typedef struct Str_828BF408 { char buf[16]; unsigned int size; unsigned int res; } Str_828BF408;
typedef struct Obj_828BF408 {
  unsigned int *vt;
  char pad4[0x50 - 4];
  unsigned int *vt50;
  char pad54[0xb8 - 0x54];
  Str_828BF408 str;
} Obj_828BF408;
extern void *fn_8265C9E0(unsigned int n);
extern void fn_828BDDA0(Obj_828BF408 *o);
extern unsigned int lbl_82025A10;
extern unsigned int lbl_82025A18;

Obj_828BF408 *fn_828BF408(void)
{
  Obj_828BF408 *p = (Obj_828BF408 *)fn_8265C9E0(0xd8);
  if (p != 0) {
    Str_828BF408 *s;
    fn_828BDDA0(p);
    p->vt = &lbl_82025A18;
    p->vt50 = &lbl_82025A10;
    s = &p->str;
    s->size = 0;
    s->res = 15;
    s->buf[0] = 0;
    return p;
  }
  return 0;
}
