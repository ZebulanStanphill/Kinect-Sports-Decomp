extern int fn_826944C8();
extern int fn_82694610();
extern int fn_82694700();
extern int fn_82F66570();
extern int fn_82F6A4B0();


unsigned __int64 fn_826A8AA8(unsigned int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar2;
  int iVar3;
  unsigned __int64 uVar1;
  __int64 lVar4;
  int iVar5;
  
  iVar3 = *(int *)*param_2;
  iVar5 = -1;
  iVar2 = fn_82F66570(iVar3,0x3a);
  if ((iVar2 == 0) && (iVar2 = fn_82F6A4B0(iVar3,0x2e), iVar2 == 0)) {
    uVar1 = fn_82F6A4B0(iVar3,0x2f);
    if ((uVar1 & 0xffffffff) == 0) {
      return uVar1;
    }
  }
  else {
    iVar5 = iVar2 - iVar3;
    if (-1 < iVar5) {
      iVar3 = fn_82694700((unsigned __int64)*param_1 + 0x254,*(int *)*param_2 + iVar5 + 1);
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 2;
      lVar4 = (unsigned __int64)*(unsigned int *)(*param_4 + 8) - 1;
      *(int *)(*param_4 + 8) = (int)lVar4;
      if (lVar4 == 0) {
        fn_826944C8();
      }
      *param_4 = iVar3;
      lVar4 = (unsigned __int64)*(unsigned int *)(iVar3 + 8) - 1;
      *(int *)(iVar3 + 8) = (int)lVar4;
      if (lVar4 == 0) {
        fn_826944C8(iVar3);
      }
      goto LAB_826a8bb0;
    }
  }
  iVar3 = *(int *)(*param_1 + 8);
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
  lVar4 = (unsigned __int64)*(unsigned int *)(*param_4 + 8) - 1;
  *(int *)(*param_4 + 8) = (int)lVar4;
  if (lVar4 == 0) {
    fn_826944C8();
  }
  *param_4 = iVar3;
LAB_826a8bb0:
  if ((0 < iVar5) && (*(char *)(*(int *)*param_2 + iVar5 + -1) == '/')) {
    iVar5 = iVar5 + -1;
  }
  if (iVar5 < 0) {
    iVar3 = *param_2;
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    lVar4 = (unsigned __int64)*(unsigned int *)(*param_3 + 8) - 1;
    *(int *)(*param_3 + 8) = (int)lVar4;
    if (lVar4 == 0) {
      fn_826944C8();
    }
    *param_3 = iVar3;
  }
  else {
    iVar3 = fn_82694610((unsigned __int64)*param_1 + 0x254,*(unsigned int *)*param_2,iVar5);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 2;
    lVar4 = (unsigned __int64)*(unsigned int *)(*param_3 + 8) - 1;
    *(int *)(*param_3 + 8) = (int)lVar4;
    if (lVar4 == 0) {
      fn_826944C8();
    }
    *param_3 = iVar3;
    lVar4 = (unsigned __int64)*(unsigned int *)(iVar3 + 8) - 1;
    *(int *)(iVar3 + 8) = (int)lVar4;
    if (lVar4 == 0) {
      fn_826944C8(iVar3);
    }
  }
  return 1;
}

