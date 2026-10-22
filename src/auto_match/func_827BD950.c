typedef struct jpeg_common_struct *j_common_ptr;

struct jpeg_error_mgr {
    void (*error_exit)(j_common_ptr cinfo);
    void (*emit_message)(j_common_ptr cinfo, int msg_level);
    void (*output_message)(j_common_ptr cinfo);
    void (*format_message)(j_common_ptr cinfo, char *buffer);
    void (*reset_error_mgr)(j_common_ptr cinfo);
    int msg_code;
    char msg_parm[80];
    int trace_level;
    long num_warnings;
};

struct jpeg_common_struct {
    struct jpeg_error_mgr *err;
};

void fn_827BD950(j_common_ptr cinfo, int msg_level)
{
    struct jpeg_error_mgr *err = cinfo->err;

    if (msg_level < 0) {
        if (err->num_warnings == 0 || err->trace_level >= 3)
            (*err->output_message)(cinfo);
        err->num_warnings++;
    } else {
        if (err->trace_level >= msg_level)
            (*err->output_message)(cinfo);
    }
}
