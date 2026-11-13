extern int fn_82BF6E50();
extern int fn_82BF6EE8();
extern int fn_82F63CA0();
extern int fn_82F68CC0();


unsigned __int64 fn_82BF6FC0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned __int64 uVar3;
  __int64 lVar4;
  
  if (((param_3 & 0xffffffff) == 0) || ((int)param_4 == 0)) {
LAB_82bf702c:
    uVar1 = 0;
  }
  else {
    uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc) + param_4;
    if ((*(int *)(param_1 + 8) == 0) || (*(unsigned int *)(param_1 + 0x10) == 0)) {
      if ((uVar3 & 0xffffffff) <= (unsigned __int64)*(unsigned int *)(param_1 + 0x14)) {
        uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
      }
      iVar2 = fn_82BF6E50(param_1,uVar3);
LAB_82bf7024:
      if (iVar2 == 0) goto LAB_82bf702c;
    }
    else if ((unsigned __int64)*(unsigned int *)(param_1 + 0x10) < (uVar3 & 0xffffffff)) {
      iVar2 = fn_82BF6EE8(param_1);
      goto LAB_82bf7024;
    }
    if ((param_2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0xc)) {
      lVar4 = *(unsigned int *)(param_1 + 8) + param_2;
      fn_82F63CA0(lVar4 + param_4,lVar4,*(unsigned int *)(param_1 + 0xc) - param_2);
    }
    fn_82F68CC0(*(unsigned int *)(param_1 + 8) + param_2,param_3,param_4);
    uVar1 = 1;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (int)param_4;
  }
  return uVar1;
}

