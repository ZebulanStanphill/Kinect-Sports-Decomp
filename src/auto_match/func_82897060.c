extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_82230218();
extern int fn_822315A0();
extern int fn_8265CA20();
extern int fn_82890428();
extern int fn_82896F40();
extern int fn_828A12E8();
extern unsigned int iStack_6c;
extern unsigned int uStack_8c;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


void fn_82897060(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned int *param_7,unsigned __int64 param_8)

{
  unsigned __int64 uVar1;
  unsigned int auStack_e0 [4];
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int auStack_c0 [4];
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int auStack_a0 [5];
  unsigned int uStack_8c;
  int iStack_6c;
  
  uVar1 = fn_828A12E8(param_8);
  uStack_d0 = 0;
  uStack_cc = 0xf;
  auStack_e0[0] = auStack_e0[0] & 0xffffff;
  fn_82230218(auStack_e0,param_1,0,0xffffffffffffffff);
  fn_82230218((unsigned __int64)*param_7 + 0x18,auStack_e0,0,0xffffffffffffffff);
  if (0xf < uStack_cc) {
    fn_8265CA20(auStack_e0[0]);
  }
  uStack_cc = 0xf;
  uStack_d0 = 0;
  auStack_e0[0] = auStack_e0[0] & 0xffffff;
  uStack_ac = 0xf;
  uStack_b0 = 0;
  auStack_c0[0] = auStack_c0[0] & 0xffffff;
  fn_82230218(auStack_c0,param_1,0,0xffffffffffffffff);
  fn_82890428(auStack_a0,auStack_c0,param_2,param_3,param_4,param_5,param_6,param_7);
  if (0xf < uStack_ac) {
    fn_8265CA20(auStack_c0[0]);
  }
  uStack_ac = 0xf;
  uStack_b0 = 0;
  auStack_c0[0] = auStack_c0[0] & 0xffffff;
  fn_82896F40(uVar1,auStack_a0);
  if (iStack_6c != 0) {
    fn_822315A0();
  }
  if (0xf < uStack_8c) {
    fn_8265CA20(auStack_a0[0]);
  }
  return;
}

