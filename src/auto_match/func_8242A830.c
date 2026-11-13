extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_824388D8();
extern int fn_8243D160();
extern int fn_8243D958();
extern int fn_82440988();
extern int fn_82441BD0();
extern int fn_824C5588();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int lbl_82005748;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821955F8;
extern unsigned int lbl_821955FC;
extern unsigned int lbl_821B90FC;
extern unsigned int lbl_821B96BC;
extern unsigned int lbl_821B9B48;
extern unsigned int ltcg_pool_0_0f;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8242A830(unsigned char *param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  float fVar3;
  unsigned int *puVar5;
  int *piVar6;
  unsigned __int64 uVar4;
  int iVar7;
  unsigned int *puVar8;
  unsigned char *puVar9;
  int *piVar10;
  double dVar11;
  unsigned char auStack_90 [144];
  
  puVar8 = (unsigned int *)(param_1 + 4);
  *param_1 = 1;
  fn_82440988(puVar8,param_3 + 0x3c);
  puVar9 = param_1 + 8;
  uVar1 = *(unsigned int *)(param_3 + 0x30);
  *(unsigned char ***)(param_1 + 8) = &lbl_821B96BC;
  puVar5 = (unsigned int *)fn_8265C9E0(0x24);
  if (puVar5 == (unsigned int *)0x0) {
    puVar5 = (unsigned int *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[4] = uVar1;
    fn_8243D958(puVar5 + 5);
  }
  *(unsigned int **)(param_1 + 0xc) = puVar5;
  piVar6 = (int *)fn_8251F720(param_3 + 0x50,0);
  if (piVar6 != (int *)0x0) {
    iVar7 = 0;
    uVar4 = fn_8251FBA8(piVar6);
    piVar10 = piVar6;
    if ((int)((uVar4 & 0xffffffff) / 0x88) != 0) {
      do {
        fn_82230110(auStack_90,piVar10 + 1);
        if (*piVar10 != 0) {
          fn_8243D160(puVar9,auStack_90,piVar10);
        }
        piVar10 = piVar10 + 0x22;
        fn_82230300(auStack_90,1,0);
        iVar7 = iVar7 + 1;
        uVar4 = fn_8251FBA8(piVar6);
      } while (iVar7 < (int)((uVar4 & 0xffffffff) / 0x88));
    }
    fn_8251FA58(piVar6);
  }
  fn_82441BD0(param_1 + 0x10,0xffffffff821b9b38,(unsigned __int64)*puVar8 + 0x60,puVar9);
  *(unsigned char ***)(param_1 + 0x10) = &lbl_821B9B48;
  puVar5 = (unsigned int *)fn_8265C9E0(0x20);
  fVar3 = ltcg_pool_0_0f;
  uVar1 = lbl_821922D0;
  dVar11 = (double)ltcg_pool_0_0f;
  if (puVar5 == (unsigned int *)0x0) {
    puVar5 = (unsigned int *)0x0;
  }
  else {
    puVar5[5] = lbl_821922D0;
    puVar5[6] = uVar1;
    puVar5[2] = fVar3;
    *puVar5 = puVar8;
    puVar5[4] = fVar3;
    uVar2 = lbl_821955FC;
    uVar1 = lbl_821955F8;
    puVar5[1] = lbl_82005748;
    puVar5[3] = uVar1;
    puVar5[7] = uVar2;
  }
  *(unsigned int **)(param_1 + 0x18) = puVar5;
  fn_824388D8(param_1 + 0x1c,param_2,param_3 + 0x6c);
  iVar7 = *(int *)(param_3 + 0x30);
  *(unsigned char ***)(param_1 + 0x60) = &lbl_821B90FC;
  puVar5 = (unsigned int *)fn_8265C9E0(0x88);
  if (puVar5 == (unsigned int *)0x0) {
    puVar5 = (unsigned int *)0x0;
  }
  else {
    puVar5[1] = (float)dVar11;
    *puVar5 = puVar9;
    puVar5[2] = (float)dVar11;
    puVar5[3] = *(unsigned int *)(iVar7 + 0x8c8);
    fn_82F68CC0(puVar5 + 4,(unsigned __int64)*(unsigned int *)(param_1 + 0x5c) + 0x238,0x6c);
    puVar5[0x21] = (float)dVar11;
    puVar5[0x1f] = 0;
    puVar5[0x20] = 0;
  }
  *(unsigned int **)(param_1 + 100) = puVar5;
  uVar2 = lbl_8218E8E8;
  *(unsigned int *)(param_1 + 0x68) = 0;
  *(unsigned int *)(param_1 + 0x6c) = 0;
  *(unsigned int *)(param_1 + 0x70) = 0;
  *(unsigned int *)(param_1 + 0x74) = 0;
  *(unsigned int *)(param_1 + 0x78) = 0;
  *(unsigned int *)(param_1 + 0x7c) = 0;
  *(unsigned int *)(param_1 + 0x80) = 0;
  *(unsigned int *)(param_1 + 0x84) = 0;
  *(unsigned int *)(param_1 + 0x88) = 0;
  *(unsigned int *)(param_1 + 0x8c) = 0;
  *(unsigned int *)(param_1 + 0x90) = 0;
  *(unsigned int *)(param_1 + 0x94) = 0;
  *(unsigned int *)(param_1 + 0x98) = 0;
  uVar1 = *(unsigned int *)(param_3 + 0x30);
  *(float *)(param_1 + 0xcc) = (float)dVar11;
  *(unsigned int *)(param_1 + 0xd0) = uVar2;
  *(unsigned int *)(param_1 + 0x9c) = uVar1;
  *(unsigned int *)(param_1 + 0xb8) = 0;
  *(unsigned int *)(param_1 + 0xbc) = 0;
  *(unsigned int *)(param_1 + 0xc0) = 0;
  *(unsigned int *)(param_1 + 0xc4) = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 1;
  param_1[0xcb] = 0;
  iVar7 = fn_8251F720(param_3 + 0x84,0);
  fn_824C5588(param_1 + 0xd4,iVar7,*(unsigned int *)(param_1 + 0x9c));
  *(unsigned int *)(param_1 + 0x114) = *(unsigned int *)(iVar7 + 0x44);
  *(unsigned int *)(param_1 + 0x118) = *(unsigned int *)(iVar7 + 0x48);
  fn_8251FA58(iVar7);
  *(unsigned int *)(param_1 + 0x11c) = 0;
  *(unsigned int *)(param_1 + 0x120) = 0;
  *(unsigned int *)(param_1 + 0x124) = 0;
  *(unsigned int *)(param_1 + 0x128) = 0;
  *(unsigned int *)(param_1 + 300) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x130,0,0x40);
}

