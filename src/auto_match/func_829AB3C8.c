typedef struct Decompress_829AB3C8 Decompress_829AB3C8;

typedef struct ErrorMgr_829AB3C8 {
    void (*error_exit)(Decompress_829AB3C8 *); /* 0x00 */
    char pad04[0x10];
    int msg_code;    /* 0x14 */
    int msg_parm[2]; /* 0x18 */
} ErrorMgr_829AB3C8;

struct Decompress_829AB3C8 {
    ErrorMgr_829AB3C8 *err; /* 0x00 */
    void *mem;              /* 0x04 */
    void *progress;         /* 0x08 */
    void *client_data;      /* 0x0c */
    int is_decompressor;    /* 0x10 */
    int global_state;       /* 0x14 */
    void *src;              /* 0x18 */
    char pad1c[0xa8 - 0x1c];
    void *quant_tbl_ptrs[4];   /* 0xa8 */
    void *dc_huff_tbl_ptrs[4]; /* 0xb8 */
    void *ac_huff_tbl_ptrs[4]; /* 0xc8 */
    char padd8[0x134 - 0xd8];
    void *marker_list; /* 0x134 */
    char pad138[0x1d8 - 0x138];
};

#define ERREXIT2(cinfo, code, p1, p2)                                                                        \
    ((cinfo)->err->msg_code = (code), (cinfo)->err->msg_parm[0] = (p1), (cinfo)->err->msg_parm[1] = (p2),    \
     (*(cinfo)->err->error_exit)(cinfo))

void *memset(void *dest, int value, unsigned int count);
void fn_829B6B80(Decompress_829AB3C8 *cinfo);
void fn_829ADD48(Decompress_829AB3C8 *cinfo);
void fn_829B59F8(Decompress_829AB3C8 *cinfo);

/* libjpeg 6b jpeg_CreateDecompress */
void fn_829AB3C8(Decompress_829AB3C8 *cinfo, int version, unsigned int structsize)
{
    int i;

    cinfo->mem = 0;
    if (version != 62) {
        ERREXIT2(cinfo, 12, 62, version);
    }
    if (structsize != sizeof(Decompress_829AB3C8)) {
        ERREXIT2(cinfo, 21, (int)sizeof(Decompress_829AB3C8), (int)structsize);
    }
    {
        ErrorMgr_829AB3C8 *err = cinfo->err;
        void *client_data = cinfo->client_data;
        memset(cinfo, 0, sizeof(Decompress_829AB3C8));
        cinfo->err = err;
        cinfo->client_data = client_data;
    }
    cinfo->is_decompressor = 1;

    fn_829B6B80(cinfo);

    cinfo->progress = 0;
    cinfo->src = 0;

    for (i = 0; i < 4; i++) {
        cinfo->quant_tbl_ptrs[i] = 0;
    }
    for (i = 0; i < 4; i++) {
        cinfo->dc_huff_tbl_ptrs[i] = 0;
        cinfo->ac_huff_tbl_ptrs[i] = 0;
    }

    cinfo->marker_list = 0;
    fn_829ADD48(cinfo);
    fn_829B59F8(cinfo);

    cinfo->global_state = 200;
}
