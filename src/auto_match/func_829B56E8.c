typedef unsigned int size_t;
extern void *memcpy(void *d, const void *s, size_t n);

typedef struct { unsigned short quantval[64]; int sent_table; } JQUANT_TBL;
typedef struct jpeg_decompress_struct *j_decompress_ptr;
typedef struct jpeg_common_struct *j_common_ptr;
struct jpeg_error_mgr {
    void (*error_exit)(j_common_ptr cinfo);
    void *emit_message;
    void *output_message;
    void *format_message;
    void *reset_error_mgr;
    int msg_code;
    union { int i[8]; char s[80]; } msg_parm;
};
struct jpeg_memory_mgr {
    void *(*alloc_small)(j_common_ptr cinfo, int pool_id, size_t sizeofobject);
};
typedef struct {
    int component_id;
    int component_index;
    int h_samp_factor;
    int v_samp_factor;
    int quant_tbl_no;
    char pad[0x4c - 0x14];
    JQUANT_TBL *quant_table;
} jpeg_component_info;
struct jpeg_decompress_struct {
    struct jpeg_error_mgr *err;
    struct jpeg_memory_mgr *mem;
    char pad[0xa8 - 8];
    JQUANT_TBL *quant_tbl_ptrs[4];
    char pad2[0x14c - 0xb8];
    int comps_in_scan;
    jpeg_component_info *cur_comp_info[4];
};

#define ERREXIT1(cinfo,code,p1)  \
  ((cinfo)->err->msg_code = (code), \
   (cinfo)->err->msg_parm.i[0] = (p1), \
   (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)))

void fn_829B56E8(j_decompress_ptr cinfo)
{
    int ci, qtblno;
    jpeg_component_info *compptr;
    JQUANT_TBL *qtbl;

    for (ci = 0; ci < cinfo->comps_in_scan; ci++) {
        compptr = cinfo->cur_comp_info[ci];
        if (compptr->quant_table != 0)
            continue;
        qtblno = compptr->quant_tbl_no;
        if (qtblno < 0 || qtblno >= 4 ||
            cinfo->quant_tbl_ptrs[qtblno] == 0)
            ERREXIT1(cinfo, 0x34, qtblno);
        qtbl = (JQUANT_TBL *)
            (*cinfo->mem->alloc_small)((j_common_ptr)cinfo, 1, sizeof(JQUANT_TBL));
        memcpy((void *)qtbl, (const void *)cinfo->quant_tbl_ptrs[qtblno], (size_t)sizeof(JQUANT_TBL));
        compptr->quant_table = qtbl;
    }
}
