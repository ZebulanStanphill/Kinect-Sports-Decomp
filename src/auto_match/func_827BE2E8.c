typedef struct jpeg_decompress_struct *j_decompress_ptr;

struct jpeg_error_mgr {
    void (*error_exit)(j_decompress_ptr cinfo);
    void *fn4;
    void *fn8;
    void *fnc;
    void *fn10;
    int msg_code;
    int msg_parm_i[8];
};

struct jpeg_progress_mgr {
    void (*progress_monitor)(j_decompress_ptr cinfo);
    long pass_counter;
    long pass_limit;
    int completed_passes;
    int total_passes;
};

struct jpeg_input_controller {
    int (*consume_input)(j_decompress_ptr cinfo);
};

struct jpeg_d_coef_controller {
    void *fn0;
    void *fn4;
    void *fn8;
    void *fnc;
    void **coef_arrays;
};

struct jpeg_decompress_struct {
    struct jpeg_error_mgr *err;
    void *mem;
    struct jpeg_progress_mgr *progress;
    void *client_data;
    unsigned char is_decompressor;
    int global_state;
    char pad18[0x40 - 0x18];
    unsigned char buffered_image;
    char pad41[0x11c - 0x41];
    unsigned int total_iMCU_rows;
    char pad120[0x188 - 0x120];
    struct jpeg_d_coef_controller *coef;
    void *post;
    struct jpeg_input_controller *inputctl;
};

#define DSTATE_READY 202
#define DSTATE_BUFIMAGE 207
#define DSTATE_RDCOEFS 209
#define DSTATE_STOPPING 210
#define JPEG_SUSPENDED 0
#define JPEG_REACHED_SOS 1
#define JPEG_REACHED_EOI 2
#define JPEG_ROW_COMPLETED 3
#define JERR_BAD_STATE 20

extern void fn_827BE1C8(j_decompress_ptr cinfo);

void **fn_827BE2E8(j_decompress_ptr cinfo)
{
    if (cinfo->global_state == DSTATE_READY) {
        fn_827BE1C8(cinfo);
        cinfo->global_state = DSTATE_RDCOEFS;
    }
    if (cinfo->global_state == DSTATE_RDCOEFS) {
        for (;;) {
            int retcode;
            if (cinfo->progress != 0)
                (*cinfo->progress->progress_monitor)(cinfo);
            retcode = (*cinfo->inputctl->consume_input)(cinfo);
            if (retcode == JPEG_SUSPENDED)
                return 0;
            if (retcode == JPEG_REACHED_EOI)
                break;
            if (cinfo->progress != 0 &&
                (retcode == JPEG_ROW_COMPLETED || retcode == JPEG_REACHED_SOS)) {
                if (++cinfo->progress->pass_counter >= cinfo->progress->pass_limit) {
                    cinfo->progress->pass_limit += (long)cinfo->total_iMCU_rows;
                }
            }
        }
        cinfo->global_state = DSTATE_STOPPING;
    }
    if ((cinfo->global_state == DSTATE_STOPPING ||
         cinfo->global_state == DSTATE_BUFIMAGE) && cinfo->buffered_image) {
        return cinfo->coef->coef_arrays;
    }
    cinfo->err->msg_code = JERR_BAD_STATE;
    cinfo->err->msg_parm_i[0] = cinfo->global_state;
    (*cinfo->err->error_exit)(cinfo);
    return 0;
}
