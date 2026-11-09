typedef struct Err_827C1838 { void (*error_exit)(void *); int pad[4]; int msg_code; int parm; } Err_827C1838;
typedef struct Cinfo_827C1838 { Err_827C1838 *err; void *mem; } Cinfo_827C1838;
typedef struct Mem_827C1838 {
  void *fn[11];
  long max_memory_to_use;
  long max_alloc_chunk;
  void *small_list[2];
  void *large_list[2];
  void *virt_sarray_list;
  void *virt_barray_list;
  unsigned long total_space_allocated;
  int pad;
} Mem_827C1838;
extern void alloc_small(void);
extern void alloc_large(void);
extern void alloc_sarray(void);
extern void alloc_barray(void);
extern void request_virt_sarray(void);
extern void request_virt_barray(void);
extern void realize_virt_arrays(void);
extern void access_virt_sarray(void);
extern void access_virt_barray(void);
extern void free_pool(void);
extern void self_destruct(void);
extern void *jpeg_get_small(Cinfo_827C1838 *, unsigned);
extern long fn_827C90E0(void);
extern void jpeg_mem_term(Cinfo_827C1838 *);

void jinit_memory_mgr(Cinfo_827C1838 *cinfo)
{
  Mem_827C1838 *mem;
  long max_to_use;
  int pool;
  cinfo->mem = 0;
  max_to_use = fn_827C90E0();
  mem = (Mem_827C1838 *)jpeg_get_small(cinfo, sizeof(Mem_827C1838));
  if (mem == 0) {
    jpeg_mem_term(cinfo);
    cinfo->err->msg_code = 0x36;
    cinfo->err->parm = 0;
    (*cinfo->err->error_exit)(cinfo);
  }
  mem->fn[0] = alloc_small;
  mem->fn[1] = alloc_large;
  mem->fn[2] = alloc_sarray;
  mem->fn[3] = alloc_barray;
  mem->fn[4] = request_virt_sarray;
  mem->fn[5] = request_virt_barray;
  mem->fn[6] = realize_virt_arrays;
  mem->fn[7] = access_virt_sarray;
  mem->fn[8] = access_virt_barray;
  mem->fn[9] = free_pool;
  mem->fn[10] = self_destruct;
  mem->max_memory_to_use = max_to_use;
  mem->max_alloc_chunk = 1000000000L;
  for (pool = 1; pool >= 0; pool--) {
    mem->small_list[pool] = 0;
    mem->large_list[pool] = 0;
  }
  mem->virt_sarray_list = 0;
  mem->virt_barray_list = 0;
  mem->total_space_allocated = sizeof(Mem_827C1838);
  cinfo->mem = mem;
}
