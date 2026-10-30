typedef struct Info Info;
typedef struct Cinfo Cinfo;
struct Info { char pad[8]; void (*close)(Cinfo *, Info *); };
typedef struct Virt { char pad[0x28]; int open; struct Virt *next; Info info; } Virt;
typedef struct Pool { struct Pool *next; unsigned used; unsigned left; } Pool;
typedef struct { char pad[0x34]; Pool *small[2]; Pool *large[2]; Virt *vs; Virt *vb; int total; } Mem;
typedef struct { void (*error_exit)(Cinfo *); char pad[0x10]; int code; int parm; } Err;
struct Cinfo { Err *err; Mem *mem; };
extern void fn_829BAAE8(Cinfo *, Pool *, unsigned);
void fn_829B6850(Cinfo *cinfo, int pool_id)
{
  Mem *mem = cinfo->mem;
  Virt *v;
  Pool *shdr, *next;
  unsigned space;
  if (pool_id < 0 || pool_id >= 2) {
    cinfo->err->code = 0xe;
    cinfo->err->parm = pool_id;
    cinfo->err->error_exit(cinfo);
  }
  if (pool_id == 1) {
    for (v = mem->vs; v != 0; v = v->next) {
      if (v->open) { v->open = 0; v->info.close(cinfo, &v->info); }
    }
    mem->vs = 0;
    for (v = mem->vb; v != 0; v = v->next) {
      if (v->open) { v->open = 0; v->info.close(cinfo, &v->info); }
    }
    mem->vb = 0;
  }
  shdr = mem->large[pool_id];
  mem->large[pool_id] = 0;
  while (shdr != 0) {
    next = shdr->next;
    space = shdr->used + shdr->left + 0x10;
    fn_829BAAE8(cinfo, shdr, space);
    mem->total -= space;
    shdr = next;
  }
  shdr = mem->small[pool_id];
  mem->small[pool_id] = 0;
  while (shdr != 0) {
    next = shdr->next;
    space = shdr->used + shdr->left + 0x10;
    fn_829BAAE8(cinfo, shdr, space);
    mem->total -= space;
    shdr = next;
  }
}
