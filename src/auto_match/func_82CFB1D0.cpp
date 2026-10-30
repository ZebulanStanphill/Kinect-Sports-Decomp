extern "C" char lbl_82005D48[];

class Obj_82CFB1D0 {
public:
  virtual void v0();
  virtual void v1();
  virtual void v2();
  virtual void m3(const char *, int, int);
  virtual void v4();
  virtual void m5(int, const char *, int, int, int);
};
struct P_82CFB1D0 { char pad[8]; int f8; int fc; char pad2[4]; int f14; };

extern "C" void fn_82CFB1D0(P_82CFB1D0 *param_1, Obj_82CFB1D0 *param_2)
{
  param_2->m5(1, lbl_82005D48, param_1->fc, param_1->f14, 0);
  param_2->m3("stream", param_1->f8, 0);
}
