extern int fn_826BCF78();


__int64 fn_82790D60(int param_1,unsigned __int64 param_2,unsigned short *param_3,unsigned __int64 param_4)

{
  __int64 lVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  
  if ((int)param_2 == 0) {
    lVar1 = -param_4;
  }
  else {
    param_1 = param_1 - (int)param_3;
    uVar3 = param_4;
    uVar5 = param_2;
    do {
      lVar1 = fn_826BCF78(*(unsigned short *)(param_1 + (int)param_3));
      lVar2 = fn_826BCF78(*param_3);
      uVar5 = uVar5 - 1;
      param_3 = param_3 + 1;
      iVar4 = (int)lVar1;
      if ((uVar5 == 0) || (iVar4 == 0)) break;
      if (iVar4 != (int)lVar2) goto LAB_82790de8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    if ((iVar4 == (int)lVar2) && (((uVar5 & 0xffffffff) != 0 || ((uVar3 & 0xffffffff) != 0)))) {
      lVar1 = param_2 - param_4;
    }
    else {
LAB_82790de8:
      lVar1 = lVar1 - lVar2;
    }
  }
  return lVar1;
}

