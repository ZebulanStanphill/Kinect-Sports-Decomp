typedef unsigned char boolean;
typedef struct jpeg_compress_struct *j_compress_ptr;

struct jpeg_error_mgr {
    void (*error_exit)(j_compress_ptr cinfo);
    void *emit_message;
    void *output_message;
    void *format_message;
    void *reset_error_mgr;
    int msg_code;
};

struct jpeg_memory_mgr {
    void *alloc_small;
    void *alloc_large;
    void *alloc_sarray;
    void *alloc_barray;
    void *request_virt_sarray;
    void *request_virt_barray;
    void (*realize_virt_arrays)(j_compress_ptr cinfo);
};

struct jpeg_marker_writer {
    void (*write_file_header)(j_compress_ptr cinfo);
};

struct jpeg_compress_struct {
    struct jpeg_error_mgr *err;
    struct jpeg_memory_mgr *mem;
    char pad8[0xa8 - 0x8];
    int num_scans;
    int padac;
    boolean raw_data_in;
    boolean arith_code;
    boolean optimize_coding;
    char padb3[0xd4 - 0xb3];
    boolean progressive_mode;
    char padd5[0x14c - 0xd5];
    struct jpeg_marker_writer *marker;
};

extern void fn_827C8DE8(j_compress_ptr cinfo, boolean transcode_only);
extern void fn_827D0070(j_compress_ptr cinfo);
extern void fn_827CF990(j_compress_ptr cinfo);
extern void fn_827CEFA0(j_compress_ptr cinfo, boolean need_full_buffer);
extern void fn_827CE8C8(j_compress_ptr cinfo);
extern void fn_827C7F50(j_compress_ptr cinfo);
extern void fn_827C7058(j_compress_ptr cinfo);
extern void fn_827CE1D0(j_compress_ptr cinfo, boolean need_full_buffer);
extern void fn_827CD968(j_compress_ptr cinfo, boolean need_full_buffer);
extern void fn_827C5DD0(j_compress_ptr cinfo);

void fn_827C51F8(j_compress_ptr cinfo)
{
    fn_827C8DE8(cinfo, 0);

    if (!cinfo->raw_data_in) {
        fn_827D0070(cinfo);
        fn_827CF990(cinfo);
        fn_827CEFA0(cinfo, 0);
    }
    fn_827CE8C8(cinfo);

    if (cinfo->arith_code) {
        cinfo->err->msg_code = 1;
        (*cinfo->err->error_exit)(cinfo);
    } else {
        if (cinfo->progressive_mode)
            fn_827C7F50(cinfo);
        else
            fn_827C7058(cinfo);
    }

    fn_827CE1D0(cinfo, (boolean)(cinfo->num_scans > 1 || cinfo->optimize_coding));
    fn_827CD968(cinfo, 0);

    fn_827C5DD0(cinfo);

    (*cinfo->mem->realize_virt_arrays)(cinfo);

    (*cinfo->marker->write_file_header)(cinfo);
}
