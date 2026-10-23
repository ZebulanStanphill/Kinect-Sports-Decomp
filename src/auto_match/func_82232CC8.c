extern int fn_82240688();
extern int fn_82240DB8();
extern int fn_8288B300();
extern unsigned int lbl_82196BD8;
extern unsigned int lbl_821970C0;

typedef struct Sub {
  void *vt;
  int x4;
  int x8;
  unsigned char xc;
} Sub;

typedef struct S {
  void *vt;
  int pad[12];
  Sub sub;
  int pad2[18];
  int x8c;
} S;

S *fn_82232CC8(S *p)
{
  Sub *s;
  fn_8288B300(p, 1);
  p->vt = &lbl_82196BD8;
  fn_82240DB8(&p->sub, 2);
  s = &p->sub;
  p->sub.x8 = 0;
  p->sub.xc = 0;
  s->vt = &lbl_821970C0;
  fn_82240688(&p->x8c);
  return p;
}
