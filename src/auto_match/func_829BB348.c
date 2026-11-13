/* Corresponds to libjpeg jdmainct.c start_pass_main (open-source IJG libjpeg). */
typedef struct Cinfo_829BB348 Cinfo_829BB348;

typedef struct {
    void (*error_exit)(Cinfo_829BB348 *cinfo);
    int pad04[4];
    int msg_code;
} ErrMgr_829BB348;

typedef struct {
    void (*start_pass)(Cinfo_829BB348 *cinfo, int pass_mode);
    void (*process_data)(Cinfo_829BB348 *cinfo, void *output_buf, void *out_row_ctr, int out_rows_avail);
    int pad08[10];
    int buffer_full;
    int rowgroup_ctr;
    int pad38[2];
    int whichptr;
    int context_state;
    int rowgroups_avail;
    int iMCU_row_ctr;
} Main_829BB348;

typedef struct {
    int pad00[2];
    int need_context_rows;
} Upsample_829BB348;

struct Cinfo_829BB348 {
    ErrMgr_829BB348 *err;
    int pad04[106];
    Main_829BB348 *main;
    int pad1b0[6];
    Upsample_829BB348 *upsample;
};

extern void fn_829BB1A0(Cinfo_829BB348 *cinfo, void *output_buf, void *out_row_ctr, int out_rows_avail);
extern void fn_829BB0F8(Cinfo_829BB348 *cinfo, void *output_buf, void *out_row_ctr, int out_rows_avail);
extern void fn_829BADF0(Cinfo_829BB348 *cinfo);

void fn_829BB348(Cinfo_829BB348 *cinfo, int pass_mode)
{
    Main_829BB348 *main = cinfo->main;

    switch (pass_mode) {
    case 0:
        if (cinfo->upsample->need_context_rows) {
            main->process_data = fn_829BB1A0;
            fn_829BADF0(cinfo);
            main->whichptr = 0;
            main->context_state = 0;
            main->iMCU_row_ctr = 0;
        } else {
            main->process_data = fn_829BB0F8;
        }
        main->buffer_full = 0;
        main->rowgroup_ctr = 0;
        break;
    default:
        cinfo->err->msg_code = 4;
        cinfo->err->error_exit(cinfo);
        break;
    }
}
