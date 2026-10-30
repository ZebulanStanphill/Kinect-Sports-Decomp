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
extern void fn_827C08B0(void);
extern void fn_827C0A70(void);
extern void fn_827C0B88(void);
extern void fn_827C0C68(void);
extern void fn_827C0D50(void);
extern void fn_827C0DE8(void);
extern void fn_827C0E80(void);
extern void fn_827C1268(void);
extern void fn_827C1458(void);
extern void fn_827C1650(void);
extern void fn_827C17D0(void);
extern void *fn_827C8ED8(Cinfo_827C1838 *, unsigned);
extern long fn_827C90E0(void);
extern void fn_827C90F0(Cinfo_827C1838 *);

void fn_827C1838(Cinfo_827C1838 *cinfo)
{
  Mem_827C1838 *mem;
  long max_to_use;
  int pool;
  cinfo->mem = 0;
  max_to_use = fn_827C90E0();
  mem = (Mem_827C1838 *)fn_827C8ED8(cinfo, sizeof(Mem_827C1838));
  if (mem == 0) {
    fn_827C90F0(cinfo);
    cinfo->err->msg_code = 0x36;
    cinfo->err->parm = 0;
    (*cinfo->err->error_exit)(cinfo);
  }
  mem->fn[0] = fn_827C08B0;
  mem->fn[1] = fn_827C0A70;
  mem->fn[2] = fn_827C0B88;
  mem->fn[3] = fn_827C0C68;
  mem->fn[4] = fn_827C0D50;
  mem->fn[5] = fn_827C0DE8;
  mem->fn[6] = fn_827C0E80;
  mem->fn[7] = fn_827C1268;
  mem->fn[8] = fn_827C1458;
  mem->fn[9] = fn_827C1650;
  mem->fn[10] = fn_827C17D0;
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
