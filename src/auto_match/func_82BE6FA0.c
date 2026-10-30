typedef struct Sub_82BE6FA0 { unsigned f14, f18, f1c, f20, f24, f28; char queue[1]; } Sub_82BE6FA0;
typedef struct Req_82BE6FA0 {
  void *vt;
  char base[0x10];
  Sub_82BE6FA0 s;
} Req_82BE6FA0;
extern char lbl_820E983C[];
extern void fn_82BE51E8(void *, const char *);
extern void fn_82BEA180(void *, const char *, int);
static void Init(Sub_82BE6FA0 *s) {
  s->f14 = 0;
  s->f18 = 0;
  s->f1c = 0;
  s->f20 = 0;
  s->f24 = 1;
  s->f28 = 0;
}
Req_82BE6FA0 *fn_82BE6FA0(Req_82BE6FA0 *p)
{
  fn_82BE51E8(p, "CRequestManager");
  p->vt = lbl_820E983C;
  Init(&p->s);
  fn_82BEA180(p->s.queue, "RequestQueue", 1);
  return p;
}
