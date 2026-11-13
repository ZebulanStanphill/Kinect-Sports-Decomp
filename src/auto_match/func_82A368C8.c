extern unsigned int *auStack_70;
extern int fn_82A366C8();
extern int fn_82A36838();
extern int fn_82A39260();
extern int fn_82A392D0();
extern unsigned int iStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned __int64
fn_82A368C8(int param_1,unsigned int param_2,unsigned int *param_3,__int64 param_4,unsigned __int64 param_5)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_70 [16];
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned int uStack_54;
  int iStack_50;
  
  uVar1 = 0;
  if ((*(unsigned int *)(param_1 + 8) & 1) == 0) {
    fn_82A36838();
  }
  stack_pair_60.second = *param_3;
  uStack_58 = 0;
  *(unsigned int **)(param_1 + 0x4340) = &stack_pair_60.first;
  iVar2 = 0;
  *(int (***)())(param_1 + 0x4350) = fn_82A366C8;
  uStack_54 = 0;
  iStack_50 = 0;
  stack_pair_60.first = param_2;
  uVar3 = param_5 & 0xffffffff;
  while (uVar3 != 0) {
    uVar3 = param_5;
    if (0x7fff < (param_5 & 0xffffffff)) {
      uVar3 = 0x8000;
    }
    iVar2 = iVar2 + 1;
    if ((param_5 & 0xffffffff) < 0x8001) {
      iStack_50 = iVar2;
    }
    fn_82A39260(param_1 + 0x10,param_4,uVar3,auStack_70,0);
    param_4 = uVar3 + param_4;
    param_5 = param_5 - uVar3;
    uVar3 = param_5;
  }
  fn_82A392D0(param_1 + 0x10);
  *param_3 = uStack_58;
  if (stack_pair_60.second < uStack_58) {
    uVar1 = 6;
  }
  return uVar1;
}

