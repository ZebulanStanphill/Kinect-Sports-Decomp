struct jpeg_common_struct;
typedef struct jpeg_error_mgr_829B6B80 {
    void (*error_exit)(struct jpeg_common_struct *);
    void *emit_message;
    void *output_message;
    void *format_message;
    void *reset_error_mgr;
    int msg_code;
    int msg_parm_i0;
} jpeg_error_mgr_829B6B80;
typedef struct jpeg_common_struct {
    jpeg_error_mgr_829B6B80 *err;
    struct my_memory_mgr_829B6B80 *mem;
} jpeg_common_struct;
typedef struct my_memory_mgr_829B6B80 {
    void *alloc_small;
    void *alloc_large;
    void *alloc_sarray;
    void *alloc_barray;
    void *request_virt_sarray;
    void *request_virt_barray;
    void *realize_virt_arrays;
    void *access_virt_sarray;
    void *access_virt_barray;
    void *free_pool;
    void *self_destruct;
    int max_memory_to_use;
    int max_alloc_chunk;
    void *small_list[2];
    void *large_list[2];
    void *virt_sarray_list;
    void *virt_barray_list;
    int total_space_allocated;
    int pad50;
} my_memory_mgr_829B6B80;

extern void fn_829B5A80(void);
extern void fn_829B5C58(void);
extern void fn_829B5D78(void);
extern void fn_829B5E58(void);
extern void fn_829B5F40(void);
extern void fn_829B5FD8(void);
extern void fn_829B6070(void);
extern void fn_829B6468(void);
extern void fn_829B6658(void);
extern void fn_829B6850(void);
extern void fn_829B69D8(void);
extern void *fn_829BAA90(jpeg_common_struct *, int);
extern int fn_829BACF0(jpeg_common_struct *);
extern void fn_82BA02A8(jpeg_common_struct *);

void fn_829B6B80(jpeg_common_struct *cinfo)
{
    my_memory_mgr_829B6B80 *mem;
    int max_to_use;
    int pool;

    cinfo->mem = 0;
    max_to_use = fn_829BACF0(cinfo);
    mem = (my_memory_mgr_829B6B80 *)fn_829BAA90(cinfo, sizeof(my_memory_mgr_829B6B80));
    if (mem == 0) {
        fn_82BA02A8(cinfo);
        cinfo->err->msg_code = 0x36;
        cinfo->err->msg_parm_i0 = 0;
        (*cinfo->err->error_exit)(cinfo);
    }
    mem->max_memory_to_use = max_to_use;
    mem->alloc_small = fn_829B5A80;
    mem->alloc_large = fn_829B5C58;
    mem->alloc_sarray = fn_829B5D78;
    mem->alloc_barray = fn_829B5E58;
    mem->request_virt_sarray = fn_829B5F40;
    mem->request_virt_barray = fn_829B5FD8;
    mem->realize_virt_arrays = fn_829B6070;
    mem->access_virt_sarray = fn_829B6468;
    mem->access_virt_barray = fn_829B6658;
    mem->free_pool = fn_829B6850;
    mem->self_destruct = fn_829B69D8;
    mem->max_alloc_chunk = 1000000000;
    for (pool = 1; pool >= 0; pool--) {
        mem->small_list[pool] = 0;
        mem->large_list[pool] = 0;
    }
    mem->virt_sarray_list = 0;
    mem->virt_barray_list = 0;
    mem->total_space_allocated = sizeof(my_memory_mgr_829B6B80);
    cinfo->mem = mem;
}
