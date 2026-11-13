extern unsigned int *auStack_28;
extern int fn_8306C6E8();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


unsigned __int64 fn_82EE9280(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iStack_30;
  int iStack_2c;
  unsigned int auStack_28 [4];
  
  iStack_30 = 0;
  iStack_2c = 0;
  if (*(int *)(param_1 + 0x10ac) == 0) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10a8);
  }
  *param_2 = 0;
  iVar2 = fn_8306C6E8(*(unsigned int *)(param_1 + 0x70),auStack_28,&iStack_2c,&iStack_30,uVar3);
  iVar1 = iStack_30;
  if (iStack_2c == 0) {
    if (iStack_30 != 0) {
      iVar4 = iStack_30 + -4;
      *(unsigned int *)(iStack_30 + 0x1c) = auStack_28[0];
      if (iVar2 == 0) {
        uVar3 = thunk_FUN_82a2b798();
        if (0 < (__int64)uVar3) {
          uVar3 = uVar3 & 0xffff | 0x80070000;
        }
        *(int *)(iVar1 + 0x18) = (int)uVar3;
      }
      *param_2 = iVar4;
      return 0;
    }
  }
  else {
    if (iStack_2c != 1) {
      return 0;
    }
    if (iStack_30 != 0) {
      (**(int (***)())(*(int *)(iStack_30 + -4) + 8))(iStack_30 + -4);
      return 0;
    }
  }
  thunk_FUN_82a2b798();
  return 0;
}

