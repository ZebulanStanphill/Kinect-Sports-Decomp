typedef struct { unsigned char id[16]; int f10; unsigned int size; } Ent_82E5B6B8;
typedef struct { char pad[0x8c]; char tab[0x68]; unsigned count; } Obj_82E5B6B8;
extern int fn_82E5AF48(void *, unsigned, Ent_82E5B6B8 **);
extern unsigned char lbl_82154BD8[16];
int memcmp(const void *a, const void *b, unsigned int n);
unsigned short _byteswap_ushort(unsigned short v);
static __forceinline Ent_82E5B6B8 *Get_82E5B6B8(int ok, Ent_82E5B6B8 *v) { return ok ? v : 0; }
int fn_82E5B6B8(Obj_82E5B6B8 *o, unsigned char **cursor)
{
  unsigned short n = 0;
  unsigned i;
  Ent_82E5B6B8 *e, *out;
  for (i = 0; i < o->count; i++) {
    int ok = fn_82E5AF48(o->tab, i, &out);
    e = Get_82E5B6B8(ok, out);
    if (e != 0 && memcmp(lbl_82154BD8, e, 16) != 0)
      n++;
  }
  *(unsigned short *)*cursor = _byteswap_ushort(n);
  *cursor += 2;
  return 0;
}
