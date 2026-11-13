extern int fn_82C496B0();
extern int fn_82C563D8();


unsigned __int64 fn_82C49870(unsigned __int64 *param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,
                       unsigned __int64 param_5)

{
  int iVar3;
  unsigned __int64 uVar1;
  __int64 lVar2;
  
  *param_1 = 0x1996011419991223;
  *(unsigned int *)((int)param_1 + 0xb4) = *(unsigned int *)(param_3 + 0xf0);
  iVar3 = fn_82C563D8(param_1 + 1,param_4,param_5);
  if (iVar3 == 0) {
    lVar2 = fn_82C496B0(param_1,param_2,param_3);
    uVar1 = -(unsigned __int64)(lVar2 != 0) & 0xfffffffffffffffe;
  }
  else {
    uVar1 = 0xfffffffffffffffe;
  }
  return uVar1;
}

