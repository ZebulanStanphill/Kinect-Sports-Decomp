extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern unsigned int *auStack_34;
extern int fn_8262FE50();
extern int fn_8263B958();
extern int fn_8265C940();


__int64 fn_8263C710(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned char auStack_34 [4];
  unsigned char auStack_30 [4];
  unsigned char auStack_2c [4];
  unsigned char auStack_28 [4];
  unsigned char auStack_24 [12];
  
  fn_8263B958(param_1,0,param_2,auStack_24,auStack_28,auStack_2c,auStack_30,auStack_34);
  lVar3 = fn_8265C940(0x20,0x64800000);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = *param_1;
    puVar2 = (unsigned int *)lVar3;
    puVar2[6] = (unsigned int)param_1;
    puVar2[1] = 1;
    *puVar2 = uVar1 & 0x200000 | 0x40100004;
    puVar2[5] = 0xffff0000;
    puVar2[7] = (unsigned int)((param_2 & 0xffffffff) << 0x1c) | puVar2[7] & 0xfffffff;
    fn_8262FE50(param_1);
  }
  return lVar3;
}

