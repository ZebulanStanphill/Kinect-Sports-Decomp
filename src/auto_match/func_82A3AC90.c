extern int fn_82A3AB68();
extern int fn_82F68CC0();


unsigned __int64 fn_82A3AC90(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  int iVar4;
  
  iVar4 = (int)param_3;
  if (iVar4 < 1) {
LAB_82a3acb0:
    uVar2 = 0;
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 0x988);
    uVar2 = (unsigned __int64)uVar1;
    lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4320) + param_2;
    if ((int)uVar1 < iVar4) {
      if (0 < (int)uVar1) {
        fn_82F68CC0(lVar3,*(unsigned int *)(param_1 + 0x984),uVar2);
        iVar4 = *(int *)(param_1 + 0x988);
        *(unsigned int *)(param_1 + 0x988) = 0;
        *(int *)(param_1 + 0x984) = iVar4 + *(int *)(param_1 + 0x984);
        goto code_r0x82a3ad2c;
      }
      uVar2 = 0;
    }
    else {
      fn_82F68CC0(lVar3,*(unsigned int *)(param_1 + 0x984),param_3);
      *(int *)(param_1 + 0x984) = *(int *)(param_1 + 0x984) + iVar4;
      *(int *)(param_1 + 0x988) = *(int *)(param_1 + 0x988) - iVar4;
      uVar2 = param_3;
code_r0x82a3ad2c:
      if ((int)uVar2 < 0) goto LAB_82a3acb0;
    }
    if ((*(int *)(param_1 + 0x86c) != 0) && (*(unsigned int *)(param_1 + 0x432c) < 0x8000)) {
      fn_82A3AB68(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0x4320) + param_2,uVar2);
    }
    *(int *)(param_1 + 0x432c) = *(int *)(param_1 + 0x432c) + 1;
  }
  return uVar2;
}

