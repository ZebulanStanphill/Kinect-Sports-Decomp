extern int fn_82CE09D0();
extern int fn_82CE0AD8();
extern int fn_82CE0BB0();
extern int fn_82CE0BE8();
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_24c;
extern unsigned int uStack_250;
extern unsigned int uStack_25c;
extern unsigned int uStack_260;


unsigned __int64
fn_830B3898(unsigned __int64 param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             int *param_5)

{
  int iVar1;
  unsigned int uVar2;
  struct { unsigned int first; unsigned int second; } stack_pair_260;

  struct { unsigned int first; unsigned int second; } stack_pair_250;

  unsigned int uStack_140;
  unsigned int uStack_13c;

  stack_pair_250.second = *param_2;
  stack_pair_260.first = 0;
  stack_pair_250.first = 1;
  stack_pair_260.second = 0;
  uStack_140 = 1;
  uStack_13c = stack_pair_250.second;
  iVar1 = fn_82CE09D0(0,0,&stack_pair_250.first,&uStack_140,&stack_pair_260.first);
  if (iVar1 == -1) {
    return 0;
  }
  if (iVar1 != 0) {
    if ((iVar1 < 1) || (2 < iVar1)) {
      return 0;
    }
    iVar1 = fn_82CE0BE8(*param_2,&stack_pair_250.first);
    if (iVar1 == 0) {
      *param_5 = 0;
      return 1;
    }
    iVar1 = fn_82CE0AD8(*param_2,param_3,param_4,0);
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 != -1) {
      *param_5 = iVar1;
      return 1;
    }
    uVar2 = fn_82CE0BB0();
    if (uVar2 < 0x2733) {
      return 0;
    }
    if ((0x2734 < uVar2) && (uVar2 != 0x2747)) {
      return 0;
    }
  }
  *param_5 = 0;
  return 1;
}
