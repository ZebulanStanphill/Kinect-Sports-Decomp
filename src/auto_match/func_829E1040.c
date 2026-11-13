extern int fn_829E0980();
extern int fn_829E0C20();
extern int fn_82A1DDC0();


unsigned __int64 fn_829E1040(__int64 param_1,__int64 param_2,unsigned __int64 param_3,unsigned short *param_4)

{
  int iVar2;
  unsigned __int64 uVar1;
  __int64 lVar3;
  
  iVar2 = fn_829E0C20(param_3,*param_4);
  if (iVar2 == 0) {
    uVar1 = 0xffffffff80004005;
  }
  else {
    uVar1 = fn_829E0980(iVar2,0x14,0,9,param_3);
    if (-1 < (int)uVar1) {
      lVar3 = param_2 * 0xc + param_1;
      *param_4 = (unsigned short)((unsigned int)*(unsigned int *)(iVar2 + 4) >> 0x11);
      fn_82A1DDC0(iVar2 + 0xc,lVar3 + 0x14,4);
      fn_82A1DDC0(iVar2 + 0x10,(param_2 + 2) * 0xc + param_1,4);
      fn_82A1DDC0(iVar2 + 8,lVar3 + 0x10,1);
      uVar1 = 0;
    }
  }
  return uVar1;
}

