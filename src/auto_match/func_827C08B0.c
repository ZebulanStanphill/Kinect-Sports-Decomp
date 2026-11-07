/* Corresponds to libjpeg jmemmgr.c alloc_small (open-source IJG libjpeg). */
typedef unsigned int size_t_827C08B0;

typedef struct ErrMgr_827C08B0 {
    void (*error_exit)(void *cinfo);
    void (*emit_message)(void *cinfo, int level);
    void (*output_message)(void *cinfo);
    void (*format_message)(void *cinfo, char *buffer);
    void (*reset_error_mgr)(void *cinfo);
    int msg_code;
    int msg_parm[20];
} ErrMgr_827C08B0;

typedef struct SmallPool_827C08B0 {
    struct SmallPool_827C08B0 *next;
    size_t_827C08B0 bytes_used;
    size_t_827C08B0 bytes_left;
    int pad;
} SmallPool_827C08B0;

typedef struct MemMgr_827C08B0 {
    void *pub[13];
    SmallPool_827C08B0 *small_list[2];
    void *large_list[2];
    void *virt_sarray_list;
    void *virt_barray_list;
    long total_space_allocated;
} MemMgr_827C08B0;

typedef struct Common_827C08B0 {
    ErrMgr_827C08B0 *err;
    MemMgr_827C08B0 *mem;
} Common_827C08B0;

extern void *fn_827C8ED8(Common_827C08B0 *cinfo, size_t_827C08B0 sizeofobject);
extern size_t_827C08B0 lbl_82017AD8[];

void *fn_827C08B0(Common_827C08B0 *cinfo, int pool_id, size_t_827C08B0 sizeofobject)
{
    MemMgr_827C08B0 *mem = cinfo->mem;
    SmallPool_827C08B0 *hdr_ptr;
    SmallPool_827C08B0 *prev_hdr_ptr;
    char *data_ptr;
    size_t_827C08B0 odd_bytes, min_request, slop;

    if (sizeofobject > (size_t_827C08B0)(1000000000 - sizeof(SmallPool_827C08B0))) {
        cinfo->err->msg_code = 0x36;
        cinfo->err->msg_parm[0] = 1;
        (*cinfo->err->error_exit)(cinfo);
    }
    odd_bytes = sizeofobject % 8;
    if (odd_bytes > 0)
        sizeofobject += 8 - odd_bytes;
    if (pool_id < 0 || pool_id >= 2) {
        cinfo->err->msg_code = 0xe;
        cinfo->err->msg_parm[0] = pool_id;
        (*cinfo->err->error_exit)(cinfo);
    }
    prev_hdr_ptr = 0;
    hdr_ptr = mem->small_list[pool_id];
    while (hdr_ptr != 0) {
        if (hdr_ptr->bytes_left >= sizeofobject)
            break;
        prev_hdr_ptr = hdr_ptr;
        hdr_ptr = hdr_ptr->next;
    }
    if (hdr_ptr == 0) {
        min_request = sizeofobject + sizeof(SmallPool_827C08B0);
        if (prev_hdr_ptr == 0)
            slop = lbl_82017AD8[pool_id];
        else
            slop = lbl_82017AD8[pool_id + 2];
        if (slop > (size_t_827C08B0)(1000000000 - min_request))
            slop = (size_t_827C08B0)(1000000000 - min_request);
        for (;;) {
            hdr_ptr = (SmallPool_827C08B0 *)fn_827C8ED8(cinfo, min_request + slop);
            if (hdr_ptr != 0)
                break;
            slop /= 2;
            if (slop < 50) {
                cinfo->err->msg_code = 0x36;
                cinfo->err->msg_parm[0] = 2;
                (*cinfo->err->error_exit)(cinfo);
            }
        }
        mem->total_space_allocated += min_request + slop;
        hdr_ptr->next = 0;
        hdr_ptr->bytes_used = 0;
        hdr_ptr->bytes_left = sizeofobject + slop;
        if (prev_hdr_ptr == 0)
            mem->small_list[pool_id] = hdr_ptr;
        else
            prev_hdr_ptr->next = hdr_ptr;
    }
    data_ptr = (char *)(hdr_ptr + 1);
    data_ptr += hdr_ptr->bytes_used;
    hdr_ptr->bytes_used += sizeofobject;
    hdr_ptr->bytes_left -= sizeofobject;
    return (void *)data_ptr;
}
