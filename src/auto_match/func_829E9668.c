typedef struct In_829E9668 { char pad[0x20]; int f20; unsigned f24; char pad2[0x48 - 0x28]; int f48; char pad3[0x54 - 0x4c]; int f54; } In_829E9668;
typedef struct Obj_829E9668 { char pad[0x20]; void *f20; } Obj_829E9668;
extern unsigned char fn_829E9368(In_829E9668 *, unsigned);
extern void fn_829E9460(void *, int);
extern int fn_829ECFA8(void *, void *, int);
extern void *fn_829ECFE0(void *);
extern void *fn_82A28568(void *, int, int);
extern char *lbl_832179FC;

int fn_829E9668(Obj_829E9668 *o, In_829E9668 *in, unsigned __int64 n)
{
  if (n <= 0xffffffff && fn_829E9368(in, (unsigned)n) == 1 && in->f20 == 0 && in->f24 == 1) {
    char *p = (char *)in + in->f48;
    int v = in->f54;
    void *mem;
    void *obj;
    if (o->f20 != 0) fn_829E9460(o->f20, 1);
    mem = fn_82A28568(*(void **)(lbl_832179FC + 0x8f4cc), 0, 0x9c);
    if (mem != 0) obj = fn_829ECFE0(mem); else obj = 0;
    o->f20 = obj;
    if (obj == 0) return (int)0x8007000e;
    if (fn_829ECFA8(obj, p, v) == 1) return 0;
  }
  return (int)0x80004005;
}
