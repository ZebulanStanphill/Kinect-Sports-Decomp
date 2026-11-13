extern unsigned int *auStack_100;
extern unsigned int *auStack_138;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_94;
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82D3BE58();
extern int fn_82D40860();
extern int fn_82D69B10();
extern int fn_82DD9828();
extern unsigned int lbl_8205751C;
extern unsigned int uStack_110;
extern unsigned int uStack_114;
extern unsigned int uStack_118;
extern unsigned int uStack_c0;


double fn_82D68D10(unsigned int *param_1,unsigned __int64 param_2,int param_3)

{
  unsigned char bVar1;
  int iVar2;
  int *piVar3;
  unsigned int *puVar4;
  int in_r0;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  int aiStack_150 [4];
  unsigned int **appuStack_140 [2];
  unsigned char auStack_138 [24];
  unsigned int *puStack_120;
  unsigned int *puStack_11c;
  unsigned int uStack_118;
  unsigned int uStack_114;
  unsigned int uStack_110;
  unsigned char auStack_100 [16];
  unsigned char auStack_f0 [16];
  unsigned char auStack_e0 [16];
  unsigned char auStack_d0 [16];
  unsigned int uStack_c0;
  unsigned char auStack_b0 [16];
  unsigned char auStack_a0 [1];
  float fStack_94;
  unsigned int auStack_90 [36];

  puStack_11c = (unsigned int *)param_1[1];
  puStack_120 = (unsigned int *)*param_1;
  uStack_118 = param_1[2];
  uStack_114 = param_1[3];
  uStack_110 = param_1[4];
  uStack_c0 = param_1[0x18];
  puVar8 = (unsigned int *)((unsigned int)(param_1 + 0xc) & 0xfffffff0);
  uVar14 = *puVar8;
  uVar15 = puVar8[1];
  uVar16 = puVar8[2];
  uVar17 = puVar8[3];
  puVar8 = (unsigned int *)(in_r0 + (int)(param_1 + 8) & 0xfffffff0);
  uVar6 = puVar8[1];
  uVar12 = puVar8[2];
  uVar13 = puVar8[3];
  puVar4 = (unsigned int *)((unsigned int)(auStack_100 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar8;
  puVar4[1] = uVar6;
  puVar4[2] = uVar12;
  puVar4[3] = uVar13;
  puVar8 = (unsigned int *)((unsigned int)(auStack_f0 + in_r0) & 0xfffffff0);
  *puVar8 = uVar14;
  puVar8[1] = uVar15;
  puVar8[2] = uVar16;
  puVar8[3] = uVar17;
  puVar8 = (unsigned int *)((unsigned int)(param_1 + 0x1c) & 0xfffffff0);
  uVar6 = puVar8[1];
  uVar12 = puVar8[2];
  uVar13 = puVar8[3];
  puVar4 = (unsigned int *)((unsigned int)(auStack_b0 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar8;
  puVar4[1] = uVar6;
  puVar4[2] = uVar12;
  puVar4[3] = uVar13;
  bVar1 = *(unsigned char *)(param_3 + 0xb);
  puVar8 = (unsigned int *)((unsigned int)(param_1 + 0x10) & 0xfffffff0);
  uVar6 = puVar8[1];
  uVar12 = puVar8[2];
  uVar13 = puVar8[3];
  appuStack_140[0] = &puStack_120;
  puVar4 = (unsigned int *)((unsigned int)(auStack_e0 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar8;
  puVar4[1] = uVar6;
  puVar4[2] = uVar12;
  puVar4[3] = uVar13;
  appuStack_140[1] = &puStack_11c;
  puVar8 = (unsigned int *)((unsigned int)(param_1 + 0x14) & 0xfffffff0);
  uVar6 = puVar8[1];
  uVar12 = puVar8[2];
  uVar13 = puVar8[3];
  aiStack_150[2] = bVar1 & 1;
  puVar4 = (unsigned int *)((unsigned int)(auStack_d0 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar8;
  puVar4[1] = uVar6;
  puVar4[2] = uVar12;
  puVar4[3] = uVar13;
  aiStack_150[3] = bVar1 & 2;
  dVar11 = (double)lbl_8205751C;
  puVar8 = auStack_90;
  iVar7 = 0;
  aiStack_150[0] = 0;
  aiStack_150[1] = 0;
  do {
    if (*(int *)((int)aiStack_150 + iVar7 + 8) == 0) {
      *(unsigned int *)((int)aiStack_150 + iVar7) = 0;
    }
    else {
      piVar3 = *(int **)((int)appuStack_140 + iVar7);
      iVar2 = *(int *)*piVar3;
      iVar5 = fn_82CE5410();
      iVar5 = (**(int (***)())(**(int **)(iVar5 + 0x10) + 4))(*(int **)(iVar5 + 0x10),0x40);
      *(unsigned short *)(iVar5 + 4) = 0x40;
      dVar10 = (double)*(float *)(iVar2 + 0x10);
      dVar9 = (double)fn_82D40860(iVar2);
      uVar6 = fn_82D3BE58((double)(float)((double)(float)(dVar9 + dVar10) + dVar11),iVar5,
                           iVar2 + 0x20,iVar2 + 0x30);
      if (puVar8 != (unsigned int *)0x0) {
        uVar12 = *(unsigned int *)(*piVar3 + 8);
        puVar8[3] = *piVar3;
        puVar8[2] = uVar12;
      }
      *puVar8 = uVar6;
      puVar8[1] = 0xffffffff;
      iVar2 = *piVar3;
      *piVar3 = (int)puVar8;
      *(int *)((int)aiStack_150 + iVar7) = iVar2;
    }
    iVar7 = iVar7 + 4;
    puVar8 = puVar8 + 4;
  } while (iVar7 < 8);
  fn_82DD9828(auStack_138,*puStack_120,*puStack_11c,param_1 + 8);
  fn_82D69B10(&puStack_120,param_2,auStack_138,auStack_a0);
  iVar7 = 0;
  do {
    iVar2 = *(int *)((int)aiStack_150 + iVar7);
    if (iVar2 != 0) {
      piVar3 = *(int **)((int)appuStack_140 + iVar7);
      fn_82CE4118(*(unsigned int *)*piVar3);
      *piVar3 = iVar2;
    }
    iVar7 = iVar7 + 4;
  } while (iVar7 < 8);
  return (double)fStack_94;
}
