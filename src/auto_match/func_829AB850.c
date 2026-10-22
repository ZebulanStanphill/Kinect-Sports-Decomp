typedef int boolean;
typedef struct jpeg_decompress_struct *j_decompress_ptr;

struct jpeg_error_mgr {
    void (*error_exit)(j_decompress_ptr cinfo);
    int pad4[4];
    int msg_code;                       /* 0x14 */
    union { int i[8]; } msg_parm;       /* 0x18 */
};

struct jpeg_source_mgr {
    int pad0[6];
    void (*term_source)(j_decompress_ptr cinfo);   /* 0x18 */
};

struct jpeg_decomp_master {
    void (*prepare_for_output_pass)(j_decompress_ptr cinfo);
    void (*finish_output_pass)(j_decompress_ptr cinfo);
};

struct jpeg_input_controller {
    int (*consume_input)(j_decompress_ptr cinfo);
    int pad4[4];
    boolean eoi_reached;                /* 0x14 */
};

struct jpeg_decompress_struct {
    struct jpeg_error_mgr *err;         /* 0x00 */
    int pad4[4];
    int global_state;                   /* 0x14 */
    struct jpeg_source_mgr *src;        /* 0x18 */
    int pad1c[9];
    boolean buffered_image;             /* 0x40 */
    int pad44[12];
    unsigned int output_height;         /* 0x74 */
    int pad78[5];
    unsigned int output_scanline;       /* 0x8c */
    int pad90[70];
    struct jpeg_decomp_master *master;  /* 0x1a8 */
    int pad1ac[3];
    struct jpeg_input_controller *inputctl; /* 0x1b8 */
};

extern void fn_829B6CA8(j_decompress_ptr cinfo);

boolean fn_829AB850(j_decompress_ptr cinfo)
{
    if ((cinfo->global_state == 205 || cinfo->global_state == 206) &&
        !cinfo->buffered_image) {
        if (cinfo->output_scanline < cinfo->output_height) {
            cinfo->err->msg_code = 67;
            (*cinfo->err->error_exit)(cinfo);
        }
        (*cinfo->master->finish_output_pass)(cinfo);
        cinfo->global_state = 210;
    } else if (cinfo->global_state == 207) {
        cinfo->global_state = 210;
    } else if (cinfo->global_state != 210) {
        cinfo->err->msg_code = 20;
        cinfo->err->msg_parm.i[0] = cinfo->global_state;
        (*cinfo->err->error_exit)(cinfo);
    }
    while (!cinfo->inputctl->eoi_reached) {
        if ((*cinfo->inputctl->consume_input)(cinfo) == 0)
            return 0;
    }
    (*cinfo->src->term_source)(cinfo);
    fn_829B6CA8(cinfo);
    return 1;
}
