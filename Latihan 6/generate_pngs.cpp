// render_normal.cpp
#include <cairo.h>
#include <pango/pangocairo.h>
#include <string>
#include <iostream>

int main() {
    const int width = 1200;
    const int height = 1700;
    const char *output_file = "Latihan_Soal_Normal_Rapi.png";

    // Content: ganti/format sesuai kebutuhan
    const std::string content =
        "LATIHAN SOAL DISTRIBUSI NORMAL\n\n"
        "Latihan Soal 1\n"
        "Diketahui: mu = 80, sigma = 4.8\n"
        "Rumus: Z = (X - mu) / sigma\n\n"
        "a) P(X < 87.2)\n"
        "   Z = (87.2 - 80)/4.8 = 1.5  -> P = 0.9332\n\n"
        "b) P(X > 76.4)\n"
        "   Z = (76.4 - 80)/4.8 = -0.75 -> P = 1 - Phi(-0.75) = Phi(0.75) = 0.7734\n\n"
        "c) P(81.2 < X < 86.0)\n"
        "   Z1 = 0.25 -> Phi(0.25) = 0.5987\n"
        "   Z2 = 1.25 -> Phi(1.25) = 0.8944\n"
        "   P = 0.8944 - 0.5987 = 0.2957\n\n"
        "d) P(71.6 < X < 88.4)\n"
        "   Z1 = -1.75 -> 0.0401\n"
        "   Z2 = 1.75  -> 0.9599\n"
        "   P = 0.9599 - 0.0401 = 0.9198\n\n"
        "----------------------------------------\n\n"
        "Latihan Soal 2\n"
        "Diketahui: mu = 4.54, sigma = 0.25\n\n"
        "a) P(X > 5)\n"
        "   Z = (5 - 4.54)/0.25 = 1.84 -> P = 1 - 0.9671 = 0.0329\n\n"
        "b) P(X < 4)\n"
        "   Z = -2.16 -> P = 0.0154\n\n"
        "c) P(4.4 < X < 4.6)\n"
        "   Z1 = -0.56 -> 0.2877\n"
        "   Z2 =  0.24 -> 0.5948\n"
        "   P = 0.5948 - 0.2877 = 0.3071\n\n"
        "----------------------------------------\n\n"
        "Latihan Soal 3\n"
        "Diketahui: mu = 200, sigma = 15\n\n"
        "a) P(X > 224)\n"
        "   Z = (224 - 200)/15 = 1.6 -> P = 1 - 0.9452 = 0.0548\n\n"
        "b) P(191 < X < 209)\n"
        "   Z1 = -0.6 -> 0.2743\n"
        "   Z2 =  0.6 -> 0.7257\n"
        "   P = 0.7257 - 0.2743 = 0.4514\n\n"
        "c) P(X > 230)\n"
        "   Z = 2.0 -> P = 1 - 0.9772 = 0.0228\n"
        "   Dari 1000 botol: 1000 * 0.0228 = 22.8 ~= 23 botol\n\n"
        "d) 10% terendah: z = -1.28155 -> X = 200 + z*15 = 180.78 ml\n\n"
        "----------------------------------------\n\n"
        "Latihan Soal 4\n"
        "Diketahui: mu = 23.7, sigma = 4.2\n\n"
        "a) P(X >= 18) ~ P(X > 17.5) [koreksi kontinuitas]\n"
        "   z = (17.5 - 23.7)/4.2 = -1.476 -> P = Phi(1.476) = 0.9300\n\n"
        "b) P(X <= 25) ~ P(X < 25.5)\n"
        "   z = (25.5 - 23.7)/4.2 = 0.4286 -> P = 0.6665\n\n"
        "c) P(15 <= X <= 21) ~ P(14.5 < X < 21.5)\n"
        "   z1 = -2.1905 -> 0.0143\n"
        "   z2 = -0.5238 -> 0.3001\n"
        "   P = 0.3001 - 0.0143 = 0.2858\n\n"
        "----------------------------------------\n\n"
        "Catatan: Nilai Phi(z) diambil dari tabel normal baku.\n";

    // Create cairo surface & context
    cairo_surface_t *surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32, width, height);
    if (!surface) {
        std::cerr << "Gagal membuat surface cairo\n";
        return 1;
    }
    cairo_t *cr = cairo_create(surface);

    // Fill background (white)
    cairo_set_source_rgb(cr, 1.0, 1.0, 1.0);
    cairo_paint(cr);

    // Create Pango layout
    PangoLayout *layout = pango_cairo_create_layout(cr);
    pango_layout_set_text(layout, content.c_str(), -1);

    // Set font description
    PangoFontDescription *desc = pango_font_description_from_string("Monospace 14");
    pango_layout_set_font_description(layout, desc);
    pango_font_description_free(desc);

    // Set width to allow wrapping (in Pango units)
    pango_layout_set_width(layout, (int)( (width - 80) * PANGO_SCALE )); // padding 40 each side
    pango_layout_set_alignment(layout, PANGO_ALIGN_LEFT);
    pango_layout_set_spacing(layout, 6 * PANGO_SCALE); // optional extra spacing

    // Move to position and show layout
    cairo_move_to(cr, 40, 40); // margin
    cairo_set_source_rgb(cr, 0.0, 0.0, 0.0); // black text
    pango_cairo_show_layout(cr, layout);

    // Cleanup
    g_object_unref(layout);
    cairo_destroy(cr);

    // Write to file
    cairo_status_t status = cairo_surface_write_to_png(surface, output_file);
    cairo_surface_destroy(surface);

    if (status != CAIRO_STATUS_SUCCESS) {
        std::cerr << "Gagal menyimpan PNG: " << cairo_status_to_string(status) << "\n";
        return 1;
    }

    std::cout << "Sukses: file dibuat -> " << output_file << std::endl;
    return 0;
}
