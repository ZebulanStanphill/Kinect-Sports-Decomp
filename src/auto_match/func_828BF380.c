typedef struct Str_828BF380 { char buf[16]; unsigned int size; unsigned int res; } Str_828BF380;
typedef struct Obj_828BF380 {
  unsigned int *vt;
  char pad4[0x50 - 4];
  unsigned int *vt50;
  char pad54[0xa8 - 0x54];
  Str_828BF380 str;
} Obj_828BF380;
extern void *fn_8265C9E0(unsigned int n);
extern void fn_828BDDA0(Obj_828BF380 *o);
extern unsigned int lbl_82024190;
extern unsigned int lbl_82024198;

Obj_828BF380 *fn_828BF380(void)
{
  Obj_828BF380 *p = (Obj_828BF380 *)fn_8265C9E0(200);
  if (p != 0) {
    Str_828BF380 *s;
    fn_828BDDA0(p);
    p->vt = &lbl_82024198;
    p->vt50 = &lbl_82024190;
    s = &p->str;
    s->size = 0;
    s->res = 15;
    s->buf[0] = 0;
    return p;
  }
  return 0;
}
