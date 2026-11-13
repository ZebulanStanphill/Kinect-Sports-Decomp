typedef struct { unsigned char id[16]; int f10; unsigned int size; } Ent_82E5B608;
typedef struct { char pad[0x8c]; char tab[0x68]; unsigned count; } Obj_82E5B608;
extern int fn_82E5AF48(void *, unsigned, Ent_82E5B608 **);
extern unsigned char lbl_82154BD8[16];
int memcmp(const void *a, const void *b, unsigned int n);
static __forceinline Ent_82E5B608 *Get_82E5B608(int ok, Ent_82E5B608 *v) { return ok ? v : 0; }
unsigned int fn_82E5B608(Obj_82E5B608 *o)
{
  unsigned int total = 0;
  unsigned i;
  Ent_82E5B608 *e, *out;
  for (i = 0; i < o->count; i++) {
    int ok = fn_82E5AF48(o->tab, i, &out);
    e = Get_82E5B608(ok, out);
    if (e != 0 && memcmp(lbl_82154BD8, e, 16) != 0)
      total += e->size + 0x16;
  }
  return total;
}
