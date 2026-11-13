extern int fn_82C10F40();


unsigned __int64 fn_82C1E210(int param_1,unsigned __int64 param_2,__int64 *param_3,int param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int aiStack_30;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar4 = 0;
  aiStack_30 = 0;
  if (*(short *)(iVar1 + 0x98) != 0) {
    uVar3 = fn_82C10F40(*(unsigned int *)(iVar1 + 0x94),param_2,&aiStack_30);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    if ((*(int *)(aiStack_30 + 4) == 0) || (*(int *)(aiStack_30 + 4) == 2)) {
      return 0xffffffff805000bc;
    }
    if (*(int *)(aiStack_30 + 0x30) == 2) {
      uVar2 = *(unsigned int *)(iVar1 + 0xdc);
      if (param_4 == 0) {
        if (uVar2 < *(unsigned int *)(*(int *)(aiStack_30 + 0x48) + 0xc)) {
          uVar4 = uVar2 + 1;
        }
      }
      else if (uVar2 != 0) {
        uVar4 = uVar2 - 1;
      }
      if (uVar4 <= *(unsigned int *)(*(int *)(aiStack_30 + 0x48) + 0xc)) {
        uVar2 = *(unsigned int *)(*(int *)(*(int *)(aiStack_30 + 0x48) + 0x10) + uVar4 * 8);
        if (uVar2 <= *(unsigned int *)(*(int *)(iVar1 + 4) + 0xc)) {
          *param_3 = ((__int64)*(int *)(*(int *)(iVar1 + 4) + 8) * (__int64)(int)uVar2 &
                     0xffffffffU) + *(__int64 *)(iVar1 + 0x10);
          *(unsigned int *)(iVar1 + 0xdc) = uVar4;
          return uVar3;
        }
      }
      return 0xffffffff80070057;
    }
  }
  return 0xffffffff805000bb;
}

