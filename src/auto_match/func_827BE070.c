typedef unsigned char boolean;
typedef struct jpeg_decompress_struct *j_decompress_ptr;

struct jpeg_error_mgr {
    void (*error_exit)(j_decompress_ptr cinfo);
    int pad4[4];
    int msg_code;                       /* 0x14 */
    union { int i[8]; } msg_parm;       /* 0x18 */
};

struct jpeg_progress_mgr {
    void (*progress_monitor)(j_decompress_ptr cinfo);
    long pass_counter;
    long pass_limit;
};

struct jpeg_input_controller {
    int (*consume_input)(j_decompress_ptr cinfo);
    int pad4[3];
    boolean has_multiple_scans;         /* 0x10 */
};

struct jpeg_decompress_struct {
    struct jpeg_error_mgr *err;         /* 0x00 */
    int pad4;
    struct jpeg_progress_mgr *progress; /* 0x08 */
    int padc[2];
    int global_state;                   /* 0x14 */
    int pad18[10];
    boolean buffered_image;             /* 0x40 */
    int pad44[14];
    int input_scan_number;              /* 0x7c */
    int pad80;
    int output_scan_number;             /* 0x84 */
    int pad88[37];
    unsigned int total_iMCU_rows;       /* 0x11c */
    int pad120[28];
    struct jpeg_input_controller *inputctl; /* 0x190 */
};

extern int fn_827BDB78(j_decompress_ptr cinfo);
extern void fn_827C2580(j_decompress_ptr cinfo);

int fn_827BE070(j_decompress_ptr cinfo)
{
    if (cinfo->global_state == 202) {
        fn_827C2580(cinfo);
        if (cinfo->buffered_image) {
            cinfo->global_state = 207;
            return 1;
        }
        cinfo->global_state = 203;
    }
    if (cinfo->global_state == 203) {
        if (cinfo->inputctl->has_multiple_scans) {
            for (;;) {
                int retcode;
                if (cinfo->progress != 0)
                    (*cinfo->progress->progress_monitor)(cinfo);
                retcode = (*cinfo->inputctl->consume_input)(cinfo);
                if (retcode == 0)
                    return 0;
                if (retcode == 2)
                    break;
                if (cinfo->progress != 0 &&
                    (retcode == 3 || retcode == 1)) {
                    if (++cinfo->progress->pass_counter >= cinfo->progress->pass_limit) {
                        cinfo->progress->pass_limit += (long)cinfo->total_iMCU_rows;
                    }
                }
            }
        }
        cinfo->output_scan_number = cinfo->input_scan_number;
    } else if (cinfo->global_state != 204) {
        cinfo->err->msg_code = 20;
        cinfo->err->msg_parm.i[0] = cinfo->global_state;
        (*cinfo->err->error_exit)(cinfo);
    }
    return fn_827BDB78(cinfo);
}
