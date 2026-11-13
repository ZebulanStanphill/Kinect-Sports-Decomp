extern int fn_825207D0();
extern int fn_826310E0();
extern int fn_82A1DD38();


void fn_82543BE0(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  int iVar2;
  __int64 lVar3;
  
  lVar3 = (param_2 + 0x806 & 0xfffffff) * 0x10 + param_1;
  iVar2 = fn_825207D0(lVar3,param_3,(param_4 & 0xfffffff) << 4);
  if (iVar2 != 0) {
    fn_82A1DD38(lVar3);
    uVar1 = (param_2 & 0xffffffff) >> 2;
    fn_826310E0(*(unsigned int *)param_1,param_2,param_3,param_4,
                 (unsigned __int64)
                 (-0x8000000000000000 >>
                 ((((param_2 + param_4) - 1 & 0xffffffff) >> 2) - uVar1 & 0x7f)) >> (uVar1 & 0x7f));
  }
  return;
}

