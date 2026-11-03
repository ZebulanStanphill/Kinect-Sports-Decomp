extern int lbl_8216CC48;
extern int lbl_8216CC4C;
extern int lbl_8217D040;
extern int lbl_831BC768;
extern void fn_82FA5190(int, void *);
typedef struct Vt_82FA9FD0 { void (*dtor)(void *, int); } Vt_82FA9FD0;
typedef struct Res_82FA9FD0 { Vt_82FA9FD0 *vt; char pad[0x58]; int refs; } Res_82FA9FD0;
typedef struct Obj_82FA9FD0 { int vt; int vt2; char pad[0x20]; Res_82FA9FD0 *res; } Obj_82FA9FD0;
void fn_82FA9FD0(Obj_82FA9FD0 *p)
{
  Res_82FA9FD0 *r = p->res;
  int h;
  p->vt = (int)&lbl_8216CC4C;
  p->vt2 = (int)&lbl_8216CC48;
  if (r != 0) {
    if (--r->refs <= 0) {
      h = lbl_831BC768;
      r->vt->dtor(r, 0);
      fn_82FA5190(h, r);
    }
    p->res = 0;
  }
  p->vt = (int)&lbl_8217D040;
}
