typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_28;
extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_82517978();
extern int fn_82520158();
extern int fn_8256E1D8();
extern int fn_8266EC60();
extern int fn_8266EE08();
extern int fn_8266F6A8();
extern int fn_82673A28();
extern int fn_82673BC0();
extern unsigned int iStack_24;
extern unsigned int iStack_2c;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83276534;
extern unsigned int lbl_832845F8;
extern unsigned int lbl_832845FC;
extern unsigned int uStack_30;


unsigned int * fn_82299948(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  bool bVar3;
  struct { unsigned int first; int second; } stack_pair_30;

  unsigned char auStack_28 [4];
  int iStack_24;
  
  param_1[0x484] = param_2;
  param_1[0x486] = param_3;
  *param_1 = 0;
  uVar1 = ltcg_pool_0_0f;
  param_1[1] = 0;
  param_1[0x487] = uVar1;
  param_1[0x483] = 0;
  param_1[0x485] = 0;
  param_1[2] = lbl_83276534;
  lbl_83276534 = lbl_83276534 + 1;
  param_1[0x488] = 0;
  param_1[0x489] = 0;
  param_1[0x48a] = 0;
  param_1[0x48b] = 0;
  if ((lbl_832845FC == 0) || (bVar3 = false, *(int *)(lbl_832845FC + 4) == 0)) {
    bVar3 = true;
  }
  if (bVar3) {
    fn_82520158(0xffffffff821aac84,&stack_pair_30.first,0);
    uVar2 = fn_8266EC60();
    uVar2 = fn_8266EE08(auStack_28,uVar2,&stack_pair_30.first,0,1,0);
    fn_823F2E20(param_1,uVar2);
    if (iStack_24 != 0) {
      fn_822315A0();
    }
    fn_8266F6A8(*param_1,8);
    fn_8256E1D8(0xffffffff832845f8,*param_1,param_1[1]);
  }
  else {
    stack_pair_30.first = 0;
    stack_pair_30.second = 0;
    fn_82517978(&stack_pair_30.first,lbl_832845F8,lbl_832845FC,0);
    fn_823F2E20(param_1,&stack_pair_30.first);
    if (stack_pair_30.second != 0) {
      fn_822315A0();
    }
  }
  fn_82673A28(*param_1,0xffffffff8229a2f8,param_1);
  fn_82673BC0(*param_1,0xffffffff8229a4c8,param_1);
  return param_1;
}

