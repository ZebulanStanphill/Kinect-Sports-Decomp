typedef struct jpeg_common_struct jpeg_common_struct;
typedef struct {
    void (*error_exit)(jpeg_common_struct *cinfo);
    void (*emit_message)(jpeg_common_struct *cinfo, int msg_level);
    void (*output_message)(jpeg_common_struct *cinfo);
} jpeg_error_mgr;
struct jpeg_common_struct {
    jpeg_error_mgr *err;
};

extern void jpeg_destroy(jpeg_common_struct *cinfo);
extern __declspec(noreturn) void exit(int code);

void error_exit(jpeg_common_struct *cinfo)
{
    (*cinfo->err->output_message)(cinfo);
    jpeg_destroy(cinfo);
    exit(1);
}
