extern int fn_82CE09D0();
extern int fn_82CE0A20();
extern int fn_82CE0BB0();
extern int fn_82CE0BE8();
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_23c;
extern unsigned int uStack_240;


unsigned __int64
fn_830B3990(unsigned __int64 param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             int *param_5)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uStack_240;
  unsigned int uStack_23c;
  struct { unsigned int first; unsigned int second; } stack_pair_130;

  
  if ((param_4 & 0xffffffff) == 0) {
LAB_830b39b4:
    uVar1 = 1;
    *param_5 = 0;
  }
  else {
    uStack_23c = *param_2;
    uStack_240 = 1;
    stack_pair_130.first = 1;
    stack_pair_130.second = uStack_23c;
    iVar2 = fn_82CE09D0(0,&uStack_240,0,&stack_pair_130.first,0);
    if (iVar2 != -1) {
      if (iVar2 == 0) {
LAB_830b3a60:
        *param_5 = 0;
        return 1;
      }
      if (iVar2 == 1) {
        iVar2 = fn_82CE0BE8(*param_2,&uStack_240);
        if (iVar2 == 0) goto LAB_830b39b4;
        iVar2 = fn_82CE0A20(*param_2,param_3,param_4,0);
        if (iVar2 != 0) {
          if (iVar2 != -1) {
            *param_5 = iVar2;
            return 1;
          }
          uVar3 = fn_82CE0BB0();
          if ((0x2732 < uVar3) && ((uVar3 < 0x2735 || (uVar3 == 0x2747)))) goto LAB_830b3a60;
        }
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

