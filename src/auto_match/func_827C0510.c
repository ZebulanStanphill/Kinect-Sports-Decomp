typedef struct jpeg_error_mgr {
    void (*error_exit)(void *cinfo);
    int pad[4];
    int msg_code;
    union { int i[8]; char s[80]; } msg_parm;
} jpeg_error_mgr;

typedef struct jpeg_memory_mgr {
    void *(*alloc_small)(void *cinfo, int pool_id, unsigned int sizeofobject);
} jpeg_memory_mgr;

typedef struct JQUANT_TBL {
    unsigned short quantval[64];
    unsigned char sent_table;
} JQUANT_TBL;

typedef struct jpeg_component_info {
    int pad[4];
    int quant_tbl_no;
    int pad2[14];
    JQUANT_TBL *quant_table;
} jpeg_component_info;

typedef struct jpeg_decompress_struct {
    jpeg_error_mgr *err;
    jpeg_memory_mgr *mem;
    int pad[0x22];
    JQUANT_TBL *quant_tbl_ptrs[4];
    int pad2[0x21];
    int comps_in_scan;
    jpeg_component_info *cur_comp_info[4];
} jpeg_decompress_struct;

extern void *memcpy(void *d, const void *s, unsigned int n);

void fn_827C0510(jpeg_decompress_struct *cinfo)
{
    int ci, qtblno;
    jpeg_component_info *compptr;
    JQUANT_TBL *qtbl;

    for (ci = 0; ci < cinfo->comps_in_scan; ci++) {
        compptr = cinfo->cur_comp_info[ci];
        if (compptr->quant_table != 0)
            continue;
        qtblno = compptr->quant_tbl_no;
        if (qtblno < 0 || qtblno >= 4 || cinfo->quant_tbl_ptrs[qtblno] == 0) {
            cinfo->err->msg_code = 0x34;
            cinfo->err->msg_parm.i[0] = qtblno;
            (*cinfo->err->error_exit)(cinfo);
        }
        qtbl = (JQUANT_TBL *)(*cinfo->mem->alloc_small)(cinfo, 1, sizeof(JQUANT_TBL));
        memcpy(qtbl, cinfo->quant_tbl_ptrs[qtblno], sizeof(JQUANT_TBL));
        compptr->quant_table = qtbl;
    }
}
