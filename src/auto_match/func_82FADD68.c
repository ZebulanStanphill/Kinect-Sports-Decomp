typedef struct Obj_82FADD68 { int pad[1]; int *vt; int pad2[9]; int ref; } Obj_82FADD68;
extern unsigned fn_82FA5060(int, int);
extern void fn_82FA9208(void *);
extern Obj_82FADD68 *fn_82FAC7A0(unsigned, int, int);
extern int fn_82FACE68(Obj_82FADD68 *, int, int);
extern int lbl_831BC768;

Obj_82FADD68 *fn_82FADD68(int a, int b, int c, int d)
{
  unsigned h = fn_82FA5060(lbl_831BC768, 0x7c);
  Obj_82FADD68 *o;
  if (h != 0) {
    o = fn_82FAC7A0(h, a, b);
    if (o != 0) {
      o->ref = o->ref + 1;
      if (fn_82FACE68(o, c, d) != 1) {
        (*(void (**)(void *, int))(*(int *)((char *)o + 4) + 4))((char *)o + 4, 0);
    fn_82FA9208(o);
        o = 0;
      }
    }
  } else {
    o = 0;
  }
  return o;
}
