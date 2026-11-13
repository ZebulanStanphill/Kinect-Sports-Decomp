#define true 1
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82FDFBD0();
extern int fn_82FDFDC8();
extern int fn_82FE5570();
extern unsigned int lbl_8217538C;
extern unsigned int lbl_82175390;
extern unsigned int lbl_821AAD20;


void fn_82FE0D90(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  unsigned char auStack_70 [16];
  unsigned int auStack_60 [4];
  
  fn_82FDFBD0(4,param_1 + 0x174,auStack_70);
  fn_82FDFDC8(auStack_70,*(unsigned int *)(param_1 + 200),4,auStack_60);
  uVar2 = 0;
  puVar4 = auStack_60;
  dVar8 = (double)lbl_821AAD20;
  iVar3 = param_1 + 4;
  dVar9 = (double)lbl_82175390;
  dVar7 = (double)lbl_8217538C;
  while( true ) {
    dVar5 = (double)(float)((double)*(float *)(param_1 + 0xec) * dVar7 -
                           (double)(float)((double)(3 - uVar2) * dVar9));
    dVar6 = dVar8;
    if ((dVar8 < dVar5) && (dVar6 = dVar5, dVar9 <= dVar5)) {
      dVar6 = dVar9;
    }
    iVar1 = fn_82FE5570(dVar6,iVar3,param_2,*puVar4);
    if (iVar1 != 1) break;
    uVar2 = uVar2 + 1;
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + 0x10;
    if (3 < uVar2) {
      return;
    }
  }
  return;
}

