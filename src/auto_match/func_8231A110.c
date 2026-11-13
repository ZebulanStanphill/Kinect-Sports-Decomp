extern int fn_82230040();
extern int fn_82230300();
extern int fn_82230360();
extern int fn_822C4718();
extern int fn_82511668();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82560010();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_821AF948;
extern unsigned int lbl_821AF968;
extern unsigned int lbl_821C0F10;
extern unsigned int lbl_821C0F1C;
extern unsigned int lbl_821C2424;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_60;
extern unsigned int uStack_64;


unsigned int * fn_8231A110(unsigned int *param_1,int param_2,unsigned int param_3,unsigned __int64 param_4)

{
  unsigned short uVar1;
  unsigned int uVar2;
  float fVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned short *puVar8;
  unsigned __int64 uVar9;
  unsigned short *puVar10;
  int iVar11;
  __int64 lVar12;
  unsigned int *puVar13;
  double dVar14;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char **ppuStack_68;
  unsigned int uStack_64;
  unsigned __int64 uStack_60;
  unsigned int *puStack_58;
  unsigned int *puStack_50;
  
  uVar2 = *(unsigned int *)(param_2 + 0x114);
  param_1[4] = param_3;
  param_1[3] = param_2;
  puVar13 = param_1 + 8;
  param_1[1] = 0x14;
  *param_1 = &lbl_821AF948;
  lVar12 = 0xc;
  param_1[2] = uVar2;
  puVar4 = puVar13;
  do {
    fn_82230300(puVar4,0,0);
    lVar12 = lVar12 + -1;
    puVar4 = puVar4 + 0xc;
  } while (-1 < lVar12);
  *(unsigned char *)(param_1 + 0xa8) = 0;
  *(unsigned char *)((int)param_1 + 0x2a1) = 0;
  *(unsigned char *)((int)param_1 + 0x2a2) = 0;
  fVar3 = ltcg_pool_0_0f;
  dVar14 = (double)ltcg_pool_0_0f;
  *(unsigned char *)((int)param_1 + 0x2a3) = 0;
  param_1[0xa9] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  *(unsigned char *)((int)param_1 + 0x2d1) = 0;
  param_1[0xb5] = 0;
  param_1[0xba] = &lbl_821C2424;
  param_1[0xc0] = 0;
  param_1[0xc3] = fVar3;
  puVar4 = (unsigned int *)((unsigned int)(param_1 + 0xc4) & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  param_1[200] = 0;
  puVar4 = (unsigned int *)fn_8265C9E0(0x70);
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    puVar4[5] = (float)dVar14;
    *puVar4 = &lbl_821C0F1C;
    puVar5 = (unsigned int *)fn_8265C9E0(4);
    if (puVar5 == (unsigned int *)0x0) {
      puVar5 = (unsigned int *)0x0;
    }
    else {
      *puVar5 = &lbl_821C0F10;
    }
    puVar4[4] = puVar5;
  }
  param_1[0xa5] = puVar4;
  fn_82230360(puVar13,0xffffffff821af7e8,0xf);
  fn_82230360(param_1 + 0x14,0xffffffff821af7f8,0x12);
  fn_82230360(param_1 + 0x20,0xffffffff821af80c,0x10);
  fn_82230360(param_1 + 0x2c,0xffffffff821af820,9);
  fn_82230360(param_1 + 0x38,0xffffffff821af780,0xc);
  fn_82230360(param_1 + 0x44,0xffffffff821af82c,10);
  fn_82230360(param_1 + 0x50,0xffffffff821af838,0x12);
  fn_82230360(param_1 + 0x5c,0xffffffff821af84c,0x12);
  fn_82230360(param_1 + 0x68,0xffffffff821af860,0x16);
  fn_82230360(param_1 + 0x74,0xffffffff821af878,0x13);
  fn_82230360(param_1 + 0x80,0xffffffff821af88c,0x11);
  fn_82230360(param_1 + 0x8c,0xffffffff821af8a0,0x15);
  fn_82230360(param_1 + 0x98,0xffffffff821af8b8,0x12);
  iVar11 = 0;
  do {
    puVar4 = puVar13;
    if (0xf < (unsigned int)puVar13[5]) {
      puVar4 = (unsigned int *)*puVar13;
    }
    iVar6 = fn_82560010(*(unsigned int *)(*(int *)(param_1[3] + 0x118) + 0x24),puVar4);
    puVar7 = (unsigned int *)(iVar6 + 0x44);
    if ((puVar7 == (unsigned int *)0x0) ||
       (uVar9 = (unsigned __int64)*puVar7, uVar9 == (uVar9 - 1) + (unsigned __int64)(uVar9 == 0))) {
      param_1[iVar11 * 0xc + 0xf] = lbl_82191FC8;
      break;
    }
    puVar8 = (unsigned short *)fn_8251F720(puVar7,0);
    uVar1 = puVar8[6];
    puVar10 = puVar8;
    while (uVar1 != 0) {
      if (uVar1 == 0x14) goto LAB_8231a3a0;
      puVar10 = (unsigned short *)((unsigned int)*puVar10 + (int)puVar10);
      uVar1 = puVar10[6];
    }
    puVar10 = (unsigned short *)0x0;
LAB_8231a3a0:
    fn_822C4718((double)*(float *)(puVar10 + 2),param_1[3],iVar6 + 0x40,0x21,param_4,
                      puVar13 + 8,puVar13 + 7);
    fn_8251FA58(puVar8);
    iVar11 = iVar11 + 1;
    puVar13 = puVar13 + 0xc;
  } while (iVar11 < 0xd);
  uStack_60 = 0x8231de4800000000;
  puStack_58 = param_1;
  puStack_50 = (unsigned int *)fn_8265C9E0(0x20);
  if (puStack_50 == (unsigned int *)0x0) {
    uStack_64 = 0;
    ppuStack_68 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_68);
  }
  *puStack_50 = &lbl_821AF968;
  fn_82F68CC0(puStack_50 + 2,&uStack_60,0x18);
  fn_82511668(param_1 + 0xba,&uStack_60);
  return param_1;
}

