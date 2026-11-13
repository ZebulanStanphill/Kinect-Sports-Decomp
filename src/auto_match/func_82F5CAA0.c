extern unsigned int *auStack_10;
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int fStack_18;
extern unsigned int fStack_1c;
extern unsigned int fStack_2c;
extern unsigned int fStack_8;
extern unsigned int lbl_8207F514;


unsigned __int64 fn_82F5CAA0(unsigned __int64 param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned char auStack_30 [4];
  float fStack_2c;
  unsigned char auStack_20 [4];
  float fStack_1c;
  float fStack_18;
  unsigned char auStack_10 [8];
  float fStack_8;
  
  iVar2 = param_2 + 0x90;
  if (param_3 != 0) {
    iVar2 = param_2 + 0xd0;
  }
  puVar1 = (unsigned int *)(in_r0 + iVar2 & 0xfffffff0);
  uVar11 = *puVar1;
  uVar12 = puVar1[1];
  uVar13 = puVar1[2];
  uVar14 = puVar1[3];
  iVar2 = param_2 + 0x70;
  puVar1 = (unsigned int *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  puVar1[2] = uVar13;
  puVar1[3] = uVar14;
  if (param_3 != 0) {
    iVar2 = param_2 + 0xb0;
  }
  puVar1 = (unsigned int *)(in_r0 + iVar2 & 0xfffffff0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  if (param_3 == 0) {
    param_2 = param_2 + 0x60;
  }
  else {
    param_2 = param_2 + 0xa0;
  }
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar7 = *puVar1;
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  puVar1 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  puVar1[2] = uVar13;
  puVar1[3] = uVar14;
  puVar1 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  puVar1 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  if ((fStack_8 <= fStack_18 + lbl_8207F514) && (fStack_1c <= fStack_2c)) {
    return 1;
  }
  return 0;
}

