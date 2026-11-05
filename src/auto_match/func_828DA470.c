typedef struct Obj Obj;
typedef struct ObjVt { void *pad[3]; void *(*fc)(Obj *); } ObjVt;
struct Obj { ObjVt *vt; };
extern Obj *fn_8289F2E0(int, int);
extern unsigned char fn_828AEC98(void *);
extern void fn_828AEC88(void *);
extern void fn_828AFE40(void *, int, int);
extern void fn_828DA2A8(int, int);

void fn_828DA470(int p1, int p2, int p3, unsigned mode, int p5, int p6)
{
  Obj *o = fn_8289F2E0(p1, p2);
  void *h = o->vt->fc(o);
  fn_8289F2E0(p1, p3);
  switch (mode) {
  case 1:
    if (fn_828AEC98(h) == 0) fn_828AEC88(h);
    fn_828AFE40(h, p5, p6);
    break;
  case 0:
    if (fn_828AEC98(h) == 0) fn_828AEC88(h);
    fn_828DA2A8(p1, p2);
    break;
  }
}
