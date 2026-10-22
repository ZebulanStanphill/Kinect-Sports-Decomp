typedef struct jpeg_decompress_struct *j_decompress_ptr;

struct jpeg_error_mgr {
    void (*error_exit)(j_decompress_ptr cinfo);
    void *pad[4];
    int msg_code;
    int msg_parm[8];
};

struct jpeg_color_quantizer {
    void *start_pass;
    void *color_quantize;
    void *finish_pass;
    void (*new_color_map)(j_decompress_ptr cinfo);
};

struct my_decomp_master {
    void *prepare_for_output_pass;
    void *finish_output_pass;
    unsigned char is_dummy_pass;
    unsigned char pad9[0xf];
    struct jpeg_color_quantizer *quantizer_2pass;
};

struct jpeg_decompress_struct {
    struct jpeg_error_mgr *err;
    unsigned char pad4[0x10];
    int global_state;
    unsigned char pad18[0x32];
    unsigned char quantize_colors;
    unsigned char pad4b[0xe];
    unsigned char enable_external_quant;
    unsigned char pad5a[0x1a];
    void *colormap;
    unsigned char pad78[0x108];
    struct my_decomp_master *master;
    unsigned char pad184[0x24];
    struct jpeg_color_quantizer *cquantize;
};

void fn_827C24B0(j_decompress_ptr cinfo)
{
    struct my_decomp_master *master = cinfo->master;

    if (cinfo->global_state != 0xcf) {
        cinfo->err->msg_code = 0x14;
        cinfo->err->msg_parm[0] = cinfo->global_state;
        (*cinfo->err->error_exit)(cinfo);
    }
    if (cinfo->quantize_colors && cinfo->enable_external_quant && cinfo->colormap != 0) {
        cinfo->cquantize = master->quantizer_2pass;
        (*cinfo->cquantize->new_color_map)(cinfo);
        master->is_dummy_pass = 0;
    } else {
        cinfo->err->msg_code = 0x2e;
        (*cinfo->err->error_exit)(cinfo);
    }
}
