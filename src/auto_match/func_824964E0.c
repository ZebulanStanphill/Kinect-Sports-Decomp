#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_60;
extern unsigned int *auStack_d0;
extern int fn_82491E88();
extern int fn_824925D0();
extern int fn_82496A28();
extern int fn_824973B0();
extern unsigned int iStack_90;
extern unsigned int lbl_82196750;
extern unsigned int lbl_821BEBAC;
extern unsigned int stack0x00000000;
extern unsigned int uStack_3c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_7c;
extern unsigned int uStack_ac;
extern unsigned int uStack_ae;
extern unsigned int uStack_af;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned __int64 storeVectorElementWordIndexed();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int fn_824964E0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  unsigned __int64 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned char auStack_d0 [16];
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned char uStack_b0;
  unsigned char uStack_af;
  unsigned char uStack_ae;
  unsigned int uStack_ac;
  int iStack_90;
  unsigned char **ppuStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned char auStack_60 [36];
  unsigned int uStack_3c;
  
  uVar5 = ZEXT48(&stack0x00000000);
  iVar6 = fn_824973B0();
  iVar1 = *(int *)(param_1 + 4);
  piVar9 = (int *)(iVar6 * 8 + *(int *)(param_1 + 0x10));
  iVar6 = *piVar9;
  piVar2 = (int *)iVar6;
  while( true ) {
    iVar8 = iVar1;
    if (iVar6 != iVar1) {
      iVar8 = *(int *)piVar9[1];
    }
    piVar7 = (int *)iVar1;
    if ((piVar2 == (int *)iVar8) || (piVar7 = piVar2, piVar2[4] == *param_2)) break;
    piVar2 = (int *)*piVar2;
  }
  if (piVar7 == (int *)iVar1) {
    puVar3 = (unsigned int *)((unsigned int)(&lbl_82196750 + in_r0) & 0xfffffff0);
    uVar10 = puVar3[1];
    uVar11 = puVar3[2];
    uVar12 = puVar3[3];
    puVar4 = (unsigned int *)((unsigned int)(auStack_d0 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar10;
    puVar4[2] = uVar11;
    puVar4[3] = uVar12;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_af = 0;
    uStack_ae = 0;
    uStack_ac = 0;
    uVar10 = storeVectorElementWordIndexed(in_vs45,0,uVar5 - 0xe8);
    *(unsigned int *)(uVar5 - 0xe8) = uVar10;
    uStack_74 = storeVectorElementWordIndexed(in_vs44,uVar5 - 0xe8,4);
    uStack_70 = storeVectorElementWordIndexed(in_vs43,uVar5 - 0xe8,8);
    iStack_90 = *param_2;
    puVar3 = (unsigned int *)((unsigned int)(auStack_d0 + in_r0) & 0xfffffff0);
    uVar10 = puVar3[1];
    uVar11 = puVar3[2];
    uVar12 = puVar3[3];
    ppuStack_80 = &lbl_821BEBAC;
    uStack_7c = 0;
    puVar4 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar10;
    puVar4[2] = uVar11;
    puVar4[3] = uVar12;
    fn_824925D0(uVar5 - 0x50,uVar5 - 0xc0);
    uStack_3c = uStack_ac;
    piVar7 = (int *)fn_82496A28(uVar5 - 0xa0,param_1,uVar5 - 0x90);
    ppuStack_80 = &lbl_821BEBAC;
    piVar7 = (int *)*piVar7;
    fn_82491E88(uVar5 - 0x50);
    fn_82491E88(uVar5 - 0xc0);
  }
  return (int)piVar7 + 0x20;
}

