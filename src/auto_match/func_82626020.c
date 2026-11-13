extern int fn_82579288();
extern int fn_825795A8();
extern int fn_82579688();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83274B14;
extern unsigned int lbl_83274B18;
extern unsigned int lbl_83274B20;
extern unsigned int uRam83274b24;
extern unsigned int uRam83274b28;
extern unsigned int uRam83274b2c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82626020(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)fn_82579288(*(unsigned int *)(param_2 + 0x6d0));
  if (param_1 == (double)ltcg_pool_0_0f) {
    iVar3 = fn_825795A8(piVar2,param_3,param_4,0x1000c);
  }
  else {
    iVar3 = fn_82579688(param_1);
  }
  if (iVar3 != 0) {
    iVar3 = *(int *)(piVar2[4] + 4);
    lbl_83274B14 = *(unsigned char *)(iVar3 + 0x23);
    lbl_83274B18 = *(unsigned int *)(iVar3 + 0x24);
    puVar1 = (unsigned int *)(iVar3 + 0x10U & 0xfffffff0);
    lbl_83274B20 = *puVar1;
    uRam83274b24 = puVar1[1];
    uRam83274b28 = puVar1[2];
    uRam83274b2c = puVar1[3];
  }
  *(unsigned short *)(piVar2 + 0x67) = 0;
  piVar2[100] = piVar2[99];
  *(unsigned char *)(piVar2[0x62] + *piVar2 + 0x754) = 0;
  return;
}

