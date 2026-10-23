typedef int boolean;
typedef struct jpeg_decompress_struct *j_decompress_ptr;
typedef boolean (*jpeg_marker_parser_method)(j_decompress_ptr cinfo);

struct jpeg_memory_mgr {
    void *(*alloc_small)(j_decompress_ptr cinfo, int pool_id, unsigned int sizeofobject);
};

struct jpeg_marker_reader {
    void (*reset_marker_reader)(j_decompress_ptr cinfo);
    int (*read_markers)(j_decompress_ptr cinfo);
    jpeg_marker_parser_method read_restart_marker;
    boolean saw_SOI;
    boolean saw_SOF;
    int next_restart_num;
    unsigned int discarded_bytes;
};

typedef struct {
    struct jpeg_marker_reader pub;
    jpeg_marker_parser_method process_COM;
    jpeg_marker_parser_method process_APPn[16];
    unsigned int length_limit_COM;
    unsigned int length_limit_APPn[16];
    void *cur_marker;
    unsigned int bytes_read;
} my_marker_reader;

typedef my_marker_reader *my_marker_ptr;

struct jpeg_decompress_struct {
    void *err;                          /* 0x00 */
    struct jpeg_memory_mgr *mem;        /* 0x04 */
    int pad8[35];
    int input_scan_number;              /* 0x94 */
    int pad98[17];
    void *comp_info;                    /* 0xdc */
    int pade0[49];
    int unread_marker;                  /* 0x1a4 */
    int pad1a8[5];
    struct jpeg_marker_reader *marker;  /* 0x1bc */
};

extern void fn_829ADD20(j_decompress_ptr cinfo);
extern int fn_829AD7D0(j_decompress_ptr cinfo);
extern boolean fn_829ADAE0(j_decompress_ptr cinfo);
extern boolean fn_829AD470(j_decompress_ptr cinfo);
extern boolean fn_829AD2C8(j_decompress_ptr cinfo);

static void reset_marker_reader(j_decompress_ptr cinfo)
{
    my_marker_ptr marker = (my_marker_ptr)cinfo->marker;

    cinfo->comp_info = 0;
    cinfo->input_scan_number = 0;
    cinfo->unread_marker = 0;
    marker->pub.saw_SOI = 0;
    marker->pub.saw_SOF = 0;
    marker->pub.discarded_bytes = 0;
    marker->cur_marker = 0;
}

void fn_829ADD48(j_decompress_ptr cinfo)
{
    my_marker_ptr marker;
    int i;

    marker = (my_marker_ptr)(*cinfo->mem->alloc_small)(cinfo, 0, sizeof(my_marker_reader));
    cinfo->marker = (struct jpeg_marker_reader *)marker;
    marker->pub.reset_marker_reader = fn_829ADD20;
    marker->pub.read_markers = fn_829AD7D0;
    marker->pub.read_restart_marker = fn_829ADAE0;
    marker->process_COM = fn_829AD470;
    marker->length_limit_COM = 0;
    for (i = 0; i < 16; i++) {
        marker->process_APPn[i] = fn_829AD470;
        marker->length_limit_APPn[i] = 0;
    }
    marker->process_APPn[0] = fn_829AD2C8;
    marker->process_APPn[14] = fn_829AD2C8;
    reset_marker_reader(cinfo);
}
