typedef struct Target_828DD7C8 {
  int (**vt)(struct Target_828DD7C8 *, int, int);
} Target_828DD7C8;
typedef struct Obj_828DD7C8 {
  char pad[0x6c];
  void *f6c;
  char pad70[0x10];
  char f80[8];
  Target_828DD7C8 *f88;
  int f8c;
  unsigned char f90;
} Obj_828DD7C8;
extern void *fn_8265C9E0(int);
extern void fn_82886518(void *, int, int);
extern unsigned char fn_8288B760();
extern unsigned fn_8288F1E8(void *, void *);
extern void fn_828BE250(void *, void *, int);
extern void *fn_828DD6D8(void *, Target_828DD7C8 *, int, int, int);

int fn_828DD7C8(Obj_828DD7C8 *o)
{
  unsigned k;
  void *mem;
  void *n;

  k = fn_8288F1E8(o->f6c, o->f80);
  if (k != 0) {
    if (fn_8288B760() != 0) {
      return o->f88->vt[0x68 / 4](o->f88, o->f8c, k);
    }
    mem = fn_8265C9E0(0x98);
    n = mem != 0 ? fn_828DD6D8(mem, o->f88, k, o->f8c, o->f90) : 0;
    o->f90 = 0;
    o->f88 = 0;
    fn_82886518(n, -1, -1);
    fn_828BE250(o->f6c, n, k);
  }
  return 1;
}
