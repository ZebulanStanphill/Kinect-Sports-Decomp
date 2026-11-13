extern int fn_8252BAB8();
extern int fn_8252D240();


unsigned __int64 fn_825D9BF0(int param_1,__int64 param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  
  uVar3 = 0;
  iVar1 = fn_8252BAB8(param_1,param_2 + 0x5bc,0,0);
  if ((iVar1 != 0) && (iVar1 = fn_8252D240(param_1,param_2 + 0x5c0,0), iVar1 != 0)) {
    puVar2 = (unsigned int *)(param_1 + 0xb58);
    lVar4 = 4;
    do {
      puVar2 = puVar2 + 2;
      *puVar2 = 0xffffffff;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    uVar3 = 1;
  }
  return uVar3;
}

