extern int fn_826944C8();
extern int fn_82694610();
extern int fn_82F66570();


unsigned __int64 fn_826A8C78(unsigned int *param_1,unsigned char *param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  
  uVar6 = (unsigned __int64)*param_1;
  if (uVar6 < param_1[1]) {
    do {
      iVar2 = fn_82F66570(param_1[2],*(unsigned char *)*param_1);
      if (iVar2 != 0) break;
      uVar3 = *param_1;
      *param_1 = uVar3 + 1;
    } while (uVar3 + 1 < param_1[1]);
    *param_2 = *(unsigned char *)*param_1;
    uVar4 = (unsigned __int64)*param_1;
    if ((uVar6 == uVar4) || (param_1[1] < uVar4)) {
      uVar3 = *(unsigned int *)(*(int *)(param_1[3] & 0xfffffc00) + 0x18);
    }
    else {
      uVar3 = fn_82694610(*(unsigned int *)(param_1[3] & 0xfffffc00),uVar6,uVar4 - uVar6);
    }
    *(int *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 2;
    lVar5 = (unsigned __int64)*(unsigned int *)(param_1[3] + 8) - 1;
    *(int *)(param_1[3] + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8();
    }
    param_1[3] = uVar3;
    lVar5 = (unsigned __int64)*(unsigned int *)(uVar3 + 8) - 1;
    *(int *)(uVar3 + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(uVar3);
    }
    uVar1 = 1;
    *param_1 = *param_1 + 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

