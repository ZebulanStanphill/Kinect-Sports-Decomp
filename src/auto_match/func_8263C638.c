extern int fn_8262FE50();
extern int fn_8263B958();
extern int fn_8265C940();


__int64 fn_8263C638(unsigned int *param_1,unsigned int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  
  fn_8263B958();
  lVar3 = fn_8265C940(0x30,0x64800000);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    puVar2 = (unsigned int *)lVar3;
    uVar1 = *param_1;
    puVar2[6] = (unsigned int)param_1;
    *puVar2 = uVar1 & 0x200000 | 0x40100004;
    puVar2[1] = 1;
    puVar2[5] = 0xffff0000;
    puVar2[7] = (param_2 & 0x3f) << 0x16 | puVar2[7] & 0x3fffff | param_3 << 0x1c;
    fn_8262FE50(param_1);
  }
  return lVar3;
}

