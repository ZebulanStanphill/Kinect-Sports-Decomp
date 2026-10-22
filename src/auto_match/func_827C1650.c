typedef unsigned int size_t;
typedef unsigned char boolean;

typedef struct jpeg_error_mgr {
    void (*error_exit)(void *cinfo);
    char pad[0x10];
    int msg_code;
    int msg_parm;
} jpeg_error_mgr;

typedef struct jpeg_common {
    jpeg_error_mgr *err;
    struct my_memory_mgr *mem;
} jpeg_common, *j_common_ptr;

typedef struct backing_store_info {
    void (*read_backing_store)(void);
    void (*write_backing_store)(void);
    void (*close_backing_store)(j_common_ptr cinfo, struct backing_store_info *info);
} backing_store_info;

typedef struct jvirt_array_control {
    char pad[0x22];
    boolean b_s_open;
    char pad23;
    struct jvirt_array_control *next;
    backing_store_info b_s_info;
} jvirt_array_control, *jvirt_ptr;

typedef union small_pool_struct *small_pool_ptr;
typedef union small_pool_struct {
    struct {
        small_pool_ptr next;
        size_t bytes_used;
        size_t bytes_left;
    } hdr;
    double dummy;
} small_pool_hdr;

typedef union large_pool_struct *large_pool_ptr;
typedef union large_pool_struct {
    struct {
        large_pool_ptr next;
        size_t bytes_used;
        size_t bytes_left;
    } hdr;
    double dummy;
} large_pool_hdr;

typedef struct my_memory_mgr {
    char pub[0x34];
    small_pool_ptr small_list[2];
    large_pool_ptr large_list[2];
    jvirt_ptr virt_sarray_list;
    jvirt_ptr virt_barray_list;
    long total_space_allocated;
} my_memory_mgr, *my_mem_ptr;

extern void fn_827C8EE0(j_common_ptr cinfo, void *object, size_t sizeofobject);
extern void fn_827C8EF0(j_common_ptr cinfo, void *object, size_t sizeofobject);

void fn_827C1650(j_common_ptr cinfo, int pool_id)
{
    my_mem_ptr mem = cinfo->mem;
    small_pool_ptr shdr_ptr;
    large_pool_ptr lhdr_ptr;
    size_t space_freed;

    if (pool_id < 0 || pool_id >= 2) {
        cinfo->err->msg_code = 14;
        cinfo->err->msg_parm = pool_id;
        (*cinfo->err->error_exit)(cinfo);
    }

    if (pool_id == 1) {
        jvirt_ptr sptr;
        jvirt_ptr bptr;

        for (sptr = mem->virt_sarray_list; sptr != 0; sptr = sptr->next) {
            if (sptr->b_s_open) {
                sptr->b_s_open = 0;
                (*sptr->b_s_info.close_backing_store)(cinfo, &sptr->b_s_info);
            }
        }
        mem->virt_sarray_list = 0;
        for (bptr = mem->virt_barray_list; bptr != 0; bptr = bptr->next) {
            if (bptr->b_s_open) {
                bptr->b_s_open = 0;
                (*bptr->b_s_info.close_backing_store)(cinfo, &bptr->b_s_info);
            }
        }
        mem->virt_barray_list = 0;
    }

    lhdr_ptr = mem->large_list[pool_id];
    mem->large_list[pool_id] = 0;

    while (lhdr_ptr != 0) {
        large_pool_ptr next_lhdr_ptr = lhdr_ptr->hdr.next;
        space_freed = lhdr_ptr->hdr.bytes_used +
                      lhdr_ptr->hdr.bytes_left +
                      sizeof(large_pool_hdr);
        fn_827C8EF0(cinfo, (void *)lhdr_ptr, space_freed);
        mem->total_space_allocated -= space_freed;
        lhdr_ptr = next_lhdr_ptr;
    }

    shdr_ptr = mem->small_list[pool_id];
    mem->small_list[pool_id] = 0;

    while (shdr_ptr != 0) {
        small_pool_ptr next_shdr_ptr = shdr_ptr->hdr.next;
        space_freed = shdr_ptr->hdr.bytes_used +
                      shdr_ptr->hdr.bytes_left +
                      sizeof(small_pool_hdr);
        fn_827C8EE0(cinfo, (void *)shdr_ptr, space_freed);
        mem->total_space_allocated -= space_freed;
        shdr_ptr = next_shdr_ptr;
    }
}
