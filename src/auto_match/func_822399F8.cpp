typedef struct Obj_822399F8 {
  void *vt;
  char pad0[0x28 - 4];
  void *vt28;
  char pad1[4];
  char m30[0x80];
  char mb0[0x70];
  char m120[0x70];
  char m190[1];
} Obj_822399F8;
extern "C" void fn_82239CB0(Obj_822399F8 *, Obj_822399F8 *);
extern "C" void fn_8223A1B0(void *, void *);
extern "C" void fn_8223A2D8(void *, void *);
extern "C" void fn_82253B40(void *, void *);
extern "C" char lbl_821968A4[], lbl_82196E28[], lbl_82196E38[], lbl_82196E70[], lbl_82196E78[];
namespace v2 { extern "C" char lbl_82196E70[]; }

extern "C" Obj_822399F8 *fn_822399F8(Obj_822399F8 *p, Obj_822399F8 *s)
{
  fn_82239CB0(p, s);
  p->vt = lbl_82196E70;
  p->vt28 = lbl_821968A4;
  fn_8223A1B0(p->m30, s->m30);
  *(void **)p->m30 = lbl_82196E28;
  fn_82253B40(p->mb0, s->mb0);
  fn_82253B40(p->m120, s->m120);
  fn_8223A2D8(p->m190, s->m190);
  *(void **)p->m190 = lbl_82196E38;
  p->vt = v2::lbl_82196E70;
  p->vt28 = lbl_82196E78;
  return p;
}
