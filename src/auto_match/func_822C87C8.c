typedef struct Sub_822C87C8 { unsigned int *vt; int pad4; char member[4]; } Sub_822C87C8;
typedef struct Obj_822C87C8 {
  unsigned int *vt;
  int pad4[3];
  char m10[0x24 - 0x10];
  void *p24;
  int pad28;
  void *p2c;
  int pad30;
  int pad34;
  void *p38;
  int pad3c;
  void *p40;
  char pad44[0x88 - 0x44];
  Sub_822C87C8 sub;
} Obj_822C87C8;
extern void fn_822315A0(void *p);
extern void fn_82359BB0(void *p);
extern void fn_82359C18(void *p);
extern unsigned int lbl_821ACFF4;
extern unsigned int lbl_821C7FB8;

void fn_822C87C8(Obj_822C87C8 *o)
{
  o->vt = &lbl_821ACFF4;
  { Sub_822C87C8 *sp = &o->sub; fn_82359C18(&sp->member); sp->vt = &lbl_821C7FB8; }
  if (o->p40 != 0) {
    fn_822315A0(o->p40);
  }
  if (o->p38 != 0) {
    fn_822315A0(o->p38);
  }
  if (o->p2c != 0) {
    fn_822315A0(o->p2c);
  }
  if (o->p24 != 0) {
    fn_822315A0(o->p24);
  }
  fn_82359BB0(o->m10);
}
