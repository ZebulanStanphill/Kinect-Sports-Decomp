extern int fn_82ED4C80();
extern int fn_82ED95B8();
extern unsigned int lbl_820525B0;


void fn_82ED9AF0(int param_1,__int64 param_2,__int64 param_3,unsigned __int64 param_4,unsigned int param_5)

{
  int iVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  iVar1 = (int)param_4;
  uVar2 = (__int64)iVar1 * (__int64)(int)param_5;
  uVar5 = lbl_820525B0;
  uVar4 = fn_82ED4C80(lbl_820525B0);
  *(unsigned __int64 *)(param_1 + 0x4f00) = uVar4;
  lVar3 = (__int64)((int)uVar2 >> 2) + (unsigned __int64)((int)uVar2 < 0 && (uVar2 & 3) != 0);
  uVar4 = fn_82ED4C80(uVar5,param_1,uVar2 + param_2,uVar2 + param_3,lVar3);
  *(unsigned __int64 *)(param_1 + 0x4f08) = uVar4;
  uVar4 = fn_82ED4C80(uVar5,param_1,lVar3 + uVar2 + param_2,lVar3 + uVar2 + param_3,lVar3);
  *(unsigned __int64 *)(param_1 + 0x4f10) = uVar4;
  uVar5 = fn_82ED95B8(uVar5,param_1,param_2,param_3,
                            (__int64)(iVar1 >> 3) + (unsigned __int64)(iVar1 < 0 && (param_4 & 7) != 0),
                            (__int64)((int)param_5 >> 3) +
                            (unsigned __int64)((int)param_5 < 0 && (param_5 & 7) != 0),param_4);
  *(unsigned __int64 *)(param_1 + 0x4f18) = uVar5;
  return;
}

