extern void fn_822315A0(void *p);
extern void fn_822511E0(void *p);
extern void fn_82359C18(void *p);
extern void fn_828E3228(void *p);
extern void fn_828E32A0(void *p);
extern void *lbl_821968A4[];
extern void *lbl_82196E70[];

typedef struct {
  char a[0x38];
  char b[0x18];
  char c[0x1c];
  void *ptr;
} Part_82233BA8;

typedef struct {
  void *vt;
  char pad0[0x24];
  void *vt2;
  char pad1[0x4];
  char m30[0x80];
  Part_82233BA8 p1;
  Part_82233BA8 p2;
  char m190[4];
} Obj_82233BA8;

void fn_82233BA8(Obj_82233BA8 *o)
{
  o->vt = lbl_82196E70;
  o->vt2 = lbl_821968A4;
  fn_822511E0(o->m190);
  {
    Part_82233BA8 *s = &o->p2;
    if (s->ptr != 0) fn_822315A0(s->ptr);
    fn_82359C18(s->c);
    fn_82359C18(s->b);
    fn_828E32A0(s);
  }
  {
    Part_82233BA8 *s = &o->p1;
    if (s->ptr != 0) fn_822315A0(s->ptr);
    fn_82359C18(s->c);
    fn_82359C18(s->b);
    fn_828E32A0(s);
  }
  fn_822511E0(o->m30);
  fn_828E3228(o);
}
