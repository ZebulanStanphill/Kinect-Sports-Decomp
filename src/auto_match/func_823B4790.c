extern void *fn_8265C9E0(unsigned);
extern void fn_828BDDA0(void *);
extern char lbl_821B5B58[];
extern char lbl_821B5BD8[];
typedef struct { void *vt; char pad[0x2c]; int a30, a34; } Sub;
typedef struct { void *vt0; int pad[0x13]; Sub s; } Obj;
void *fn_823B4790(void)
{
  Obj *p = (Obj *)fn_8265C9E0(0x90);
  if (p != 0) {
    Sub *q;
    fn_828BDDA0(p);
    q = &p->s;
    p->vt0 = lbl_821B5B58;
    q->vt = lbl_821B5BD8;
    p->s.a30 = 0;
    p->s.a34 = 0;
    return p;
  }
  return 0;
}
