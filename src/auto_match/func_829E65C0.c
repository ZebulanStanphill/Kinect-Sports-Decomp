typedef struct Obj_829E65C0 { int pad[6]; void *obj; } Obj_829E65C0;
extern unsigned char fn_829E82D0(void *);
extern void *fn_829E8378(void *);
extern void *fn_82A28568(void *, int, int);
extern char *lbl_832179FC;

int fn_829E65C0(Obj_829E65C0 *self)
{
  void *a = fn_82A28568(*(void **)(lbl_832179FC + 0x8f4cc), 0, 0x14);
  void *o;
  if (a != 0) {
    o = fn_829E8378(a);
  } else {
    o = 0;
  }
  self->obj = o;
  if (o == 0) {
    return 0x8007000e;
  }
  return fn_829E82D0(o) == 0 ? 0x8007000e : 0;
}
