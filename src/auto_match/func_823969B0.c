extern int fn_822A0C98(int);
extern void fn_82396230();
extern float lbl_821917A8[];
typedef struct { char q[0x40]; unsigned st; } Sub;
typedef struct { char p0[0xa0]; int a0; char p1[0xd4-0xa4]; int d4; char p2[0x178-0xd8]; int m178; char p3[0xbc4-0x17c]; float m_bc4; } Obj;

int fn_823969B0(Obj *o, float dt)
{
  o->m_bc4 += dt;
  fn_82396230();
  if (o->a0 != 0 && ((Sub*)o->a0)->st == 1) {
    if (fn_822A0C98(o->d4) == 0 && o->m_bc4 > lbl_821917A8[2]) return 1;
  } else {
    if (o->m178 != 0) return 1;
    if (fn_822A0C98(o->d4) == 0) return 1;
  }
  return 0;
}