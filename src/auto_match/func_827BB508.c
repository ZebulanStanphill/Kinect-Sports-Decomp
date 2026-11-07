/* Corresponds to libjpeg jdapimin.c jpeg_read_header (open-source IJG libjpeg). */
typedef unsigned char boolean;

struct jpeg_decompress_struct_827BB508;

typedef struct jpeg_error_mgr_827BB508 {
    void (*error_exit)(struct jpeg_decompress_struct_827BB508 *cinfo);
    void (*emit_message)(struct jpeg_decompress_struct_827BB508 *cinfo, int msg_level);
    void (*output_message)(struct jpeg_decompress_struct_827BB508 *cinfo);
    void (*format_message)(struct jpeg_decompress_struct_827BB508 *cinfo, char *buffer);
    void (*reset_error_mgr)(struct jpeg_decompress_struct_827BB508 *cinfo);
    int msg_code;
    union {
        int i[8];
        char s[80];
    } msg_parm;
} jpeg_error_mgr_827BB508;

typedef struct jpeg_decompress_struct_827BB508 {
    jpeg_error_mgr_827BB508 *err;
    void *mem;
    void *progress;
    void *client_data;
    boolean is_decompressor;
    int global_state;
} jpeg_decompress_struct_827BB508;

extern int fn_827BB1D8(jpeg_decompress_struct_827BB508 *cinfo);
extern void fn_827C1968(jpeg_decompress_struct_827BB508 *cinfo);

int fn_827BB508(jpeg_decompress_struct_827BB508 *cinfo, boolean require_image)
{
    int retcode;

    if (cinfo->global_state != 200 && cinfo->global_state != 201) {
        cinfo->err->msg_code = 0x14;
        cinfo->err->msg_parm.i[0] = cinfo->global_state;
        (*cinfo->err->error_exit)(cinfo);
    }

    retcode = fn_827BB1D8(cinfo);

    switch (retcode) {
    case 1:
        retcode = 1;
        break;
    case 2:
        if (require_image) {
            cinfo->err->msg_code = 0x33;
            (*cinfo->err->error_exit)(cinfo);
        }
        fn_827C1968(cinfo);
        retcode = 2;
        break;
    case 0:
        break;
    }
    return retcode;
}
