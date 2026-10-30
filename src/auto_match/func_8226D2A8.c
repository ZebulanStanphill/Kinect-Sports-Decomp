extern int fn_82356F98();
extern float lbl_821CC160;

typedef struct { char p0[8]; int a8; int ac; float a10; int a14; int a18; int a1c; int a20; int a24; short a28; char p2a[0x828 - 0x2a]; short a828; char p82a[0x1028 - 0x82a]; char a1028; } Obj;

Obj *fn_8226D2A8(Obj *o)
{
  float f;
  fn_82356F98();
  o->ac = 0;
  o->a8 = 1;
  f = lbl_821CC160;
  o->a14 = 0;
  o->a10 = f;
  o->a18 = 1;
  o->a1c = 3;
  o->a20 = 3;
  o->a24 = 0;
  o->a28 = 0;
  o->a828 = 0;
  o->a1028 = 0;
  return o;
}
