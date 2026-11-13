#define TBLr 0
extern unsigned int *auStack_100;
extern unsigned int *auStack_130;
extern unsigned int *auStack_150;
extern unsigned int *auStack_160;
extern unsigned int *auStack_170;
extern unsigned int *auStack_180;
extern unsigned int *auStack_d0;
extern int fn_8253D7A8();
extern int fn_82CE5410();
extern int fn_82D3E3F0();
extern int fn_82D5E360();
extern int fn_82F68CC0();
extern unsigned int iStack_140;
extern unsigned int iStack_190;
extern unsigned int iStack_194;
extern unsigned int iStack_198;
extern unsigned int iStack_19c;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_114;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;


/* WARNING: Removing unreachable block (ram,0x82d5f5e4) */

unsigned __int64
fn_82D5F458(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar3;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int *apuStack_1b0 [4];
  unsigned int **ppuStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  unsigned char auStack_180 [16];
  unsigned char auStack_170 [16];
  unsigned char auStack_160 [16];
  unsigned char auStack_150 [16];
  int iStack_140;
  unsigned char auStack_130 [16];
  unsigned int *puStack_120;
  unsigned int uStack_11c;
  unsigned int uStack_118;
  unsigned int uStack_114;
  unsigned char auStack_100 [48];
  unsigned char auStack_d0 [208];
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar5 = *(unsigned int **)(iVar4 + 4);
  if (puVar5 < *(unsigned int **)(iVar4 + 0xc)) {
    *puVar5 = "TtColl3";
    uVar3 = TBLr;
    puVar5[1] = (int)uVar3;
    *(unsigned int **)(iVar4 + 4) = puVar5 + 3;
  }
  iStack_19c = param_1[1];
  iStack_198 = param_1[2];
  iStack_194 = param_1[3];
  iStack_190 = param_1[4];
  iStack_140 = param_1[0x18];
  ppuStack_1a0 = (unsigned int **)*param_1;
  puVar5 = (unsigned int *)((int)param_1 + in_r0 + 0x20 & 0xfffffff0);
  uVar6 = puVar5[1];
  uVar7 = puVar5[2];
  uVar8 = puVar5[3];
  puVar2 = (unsigned int *)((unsigned int)(auStack_180 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  puVar5 = (unsigned int *)((unsigned int)(param_1 + 0xc) & 0xfffffff0);
  uVar6 = puVar5[1];
  uVar7 = puVar5[2];
  uVar8 = puVar5[3];
  puVar2 = (unsigned int *)((unsigned int)(auStack_170 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  puVar5 = (unsigned int *)((unsigned int)(param_1 + 0x10) & 0xfffffff0);
  uVar14 = puVar5[1];
  uVar15 = puVar5[2];
  uVar16 = puVar5[3];
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x14) & 0xfffffff0);
  uVar10 = *puVar2;
  uVar11 = puVar2[1];
  uVar12 = puVar2[2];
  uVar13 = puVar2[3];
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x1c) & 0xfffffff0);
  uVar6 = *puVar2;
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar2 = (unsigned int *)((unsigned int)(auStack_160 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar5;
  puVar2[1] = uVar14;
  puVar2[2] = uVar15;
  puVar2[3] = uVar16;
  puVar5 = (unsigned int *)((unsigned int)(auStack_150 + in_r0) & 0xfffffff0);
  *puVar5 = uVar10;
  puVar5[1] = uVar11;
  puVar5[2] = uVar12;
  puVar5[3] = uVar13;
  puVar5 = (unsigned int *)((unsigned int)(auStack_130 + in_r0) & 0xfffffff0);
  *puVar5 = uVar6;
  puVar5[1] = uVar7;
  puVar5[2] = uVar8;
  puVar5[3] = uVar9;
  apuStack_1b0[0] = *ppuStack_1a0;
  puVar5 = (unsigned int *)fn_82D3E3F0(auStack_d0,apuStack_1b0,1,0);
  fn_8253D7A8(&puStack_120,0,0,0);
  iVar4 = *param_1;
  if (*(int *)(iVar4 + 0xc) == 0) {
    fn_82F68CC0(auStack_100,iVar4 + 0x20,0x2c);
  }
  uStack_118 = *(unsigned int *)(iVar4 + 8);
  uStack_114 = *(unsigned int *)(iVar4 + 0xc);
  ppuStack_1a0 = &puStack_120;
  uStack_11c = 0xffffffff;
  iStack_198 = iVar4;
  puStack_120 = puVar5;
  uVar3 = fn_82D5E360(&ppuStack_1a0,param_2,param_3,param_4,param_5);
  fn_82CE5410();
  puVar5[7] = 0;
  (**(int (***)())*puVar5)(puVar5,0);
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar5 = *(unsigned int **)(iVar4 + 4);
  if (puVar5 < *(unsigned int **)(iVar4 + 0xc)) {
    *puVar5 = &lbl_82132BC4;
    uVar1 = TBLr;
    puVar5[1] = (int)uVar1;
    *(unsigned int **)(iVar4 + 4) = puVar5 + 3;
  }
  return uVar3;
}

