extern int fn_82A28568();
extern int fn_82A28E60();
extern int fn_82F63CA0();
extern unsigned int lbl_832179FC;


unsigned __int64 fn_829E9EA0(int *param_1,__int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  
  lVar5 = ((param_1[3] - param_1[1]) / 0xc + param_2) * 0xc;
  uVar3 = fn_82A28568(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0,lVar5);
  if (uVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar6 = uVar3;
    if ((uVar3 & 3) != 0) {
      uVar6 = (uVar3 - (uVar3 & 3)) + 4;
    }
    fn_82F63CA0(uVar6,param_1[1],(__int64)((param_1[2] - param_1[1]) / 0xc) * 0xc);
    if (*param_1 != 0) {
      fn_82A28E60(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0);
    }
    iVar2 = (int)uVar6;
    iVar1 = param_1[1];
    uVar4 = 1;
    *param_1 = (int)uVar3;
    param_1[3] = (int)lVar5 + iVar2;
    param_1[1] = iVar2;
    param_1[2] = ((param_1[2] - iVar1) / 0xc) * 0xc + iVar2;
  }
  return uVar4;
}

