extern int fn_8265C940();
extern int fn_82A2B660();
extern int fn_82A36CE0();


unsigned __int64 fn_82A1BCC0(unsigned int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4)

{
  __int64 lVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  uVar3 = 0;
  if (param_1 < 2) {
    uVar3 = fn_82A36CE0(param_2,param_3);
  }
  lVar1 = fn_8265C940(uVar3,0x24830000);
  if (lVar1 == 0) {
    uVar3 = 0xffffffff8007000e;
  }
  else {
    iVar2 = 0;
    if (param_1 < 2) {
      iVar2 = fn_82A2B660(param_2,param_3,lVar1,uVar3);
    }
    uVar3 = 0;
    *(unsigned int *)(iVar2 + 8) = *(unsigned int *)(iVar2 + 8) | 0x40000000;
    *param_4 = iVar2;
  }
  return uVar3;
}

