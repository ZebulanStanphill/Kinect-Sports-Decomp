typedef struct Sub_828BF6A0 {
  int a[4];
  char *buf;
  int cap;
  int f4ac;
  int f4b0;
  int f4b4;
} Sub_828BF6A0;
typedef struct Obj_828BF6A0 {
  void *vt;
  int pad0[0x13];
  void *vt50;
  int pad1[0x20 - 0x15];
  char buf[0x400];
  int f480;
  int f484;
  int f488;
  int f48c;
  unsigned char f490;
  char pad2[3];
  Sub_828BF6A0 sub;
} Obj_828BF6A0;
extern void *fn_828BDDA0(Obj_828BF6A0 *p);
extern void *fn_828E9D28(void *sub, char *buf, int n);
extern char lbl_820236C8[];
extern char lbl_820236D0[];

Obj_828BF6A0 *fn_828BF6A0(Obj_828BF6A0 *p)
{
  Sub_828BF6A0 *s;
  fn_828BDDA0(p);
  p->f480 = 0;
  p->vt = lbl_820236D0;
  p->vt50 = lbl_820236C8;
  p->f484 = 0;
  p->f488 = 0;
  p->f48c = 0;
  p->f490 = 0;
  s = &p->sub; s->f4ac = 0; s->f4b0 = 0; s->f4b4 = 0; p->sub.buf = p->buf; p->sub.cap = 0x400;
  fn_828E9D28(&p->sub, p->buf, 0x400);
  return p;
}
