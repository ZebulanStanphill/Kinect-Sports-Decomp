typedef unsigned char bool;
#define true 1
#define false 0
typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_58;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_822C72E0();
extern int fn_822E5640();
extern int fn_822E5710();
extern int fn_822E5FA8();
extern int fn_82522588();
extern int fn_8255AE78();
extern int fn_8265C9E0();
extern int fn_827F6210();
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int lbl_821AE598;
extern unsigned int ltcg_pool_0_0f;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_822F67E8(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  int in_r0;
  unsigned int *puVar6;
  char cVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  bool bVar10;
  unsigned char bVar11;
  double dVar12;
  unsigned char in_vs32 [16];
  unsigned char auVar13 [16];
  unsigned char in_vs33 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned char in_vr12 [16];
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  unsigned int uVar27;
  unsigned int uVar28;
  int iStack_60;
  int iStack_5c;
  unsigned char auStack_58 [4];
  int iStack_54;
  
  dVar12 = (double)*(float *)(param_2 + 0xb0);
  *(float *)(param_2 + 0xb0) = (float)(dVar12 - param_1);
  bVar10 = false;
  iStack_60 = 0;
  if (*(int *)(param_2 + 0x58) != 0) {
    fn_827F6210((double)*(float *)(param_2 + 0x50),
                      *(unsigned int *)
                       (*(int *)(*(int *)(*(int *)(param_2 + 0xc) + 0x118) + 0xc) + 0x110));
    if ((double)ltcg_pool_0_0f < (double)*(float *)(param_2 + 0xb0)) {
      return;
    }
    if (dVar12 <= (double)ltcg_pool_0_0f) {
      return;
    }
    *(unsigned int *)(*(int *)(param_2 + 0xc) + 700) = 1;
    return;
  }
  fVar1 = (float)((double)*(float *)(param_2 + 0xb4) - param_1);
  *(float *)(param_2 + 0xb4) = fVar1;
  dVar12 = (double)ltcg_pool_0_0f;
  if ((double)fVar1 < dVar12) {
    bVar10 = true;
    puVar6 = (unsigned int *)fn_822E5FA8(auStack_58,*(unsigned int *)(param_2 + 0xc));
    if ((*(int *)(*(int *)*puVar6 + 0x18c) == 0) || (*(int *)(*(int *)*puVar6 + 0x1a4) != 0)) {
      bVar5 = true;
      goto LAB_822f687c;
    }
  }
  bVar5 = false;
LAB_822f687c:
  if ((bVar10) && (iStack_54 != 0)) {
    fn_822315A0();
  }
  if (bVar5) {
    fn_82522588(&iStack_60,(unsigned __int64)*(unsigned int *)(param_2 + 0x44) + 0x4c);
    iVar2 = iStack_60;
    fn_822C72E0(*(unsigned int *)(*(int *)(*(int *)(param_2 + 0xc) + 0x114) + 0x20),
                      *(unsigned int *)(iStack_60 + 0xc));
    puVar6 = (unsigned int *)fn_8265C9E0(0x1c);
    if (puVar6 == (unsigned int *)0x0) {
      puVar6 = (unsigned int *)0x0;
    }
    else {
      puVar6[1] = 1;
      puVar6[2] = 1;
      *puVar6 = &lbl_821AE598;
      if (puVar6 + 3 != (unsigned int *)0x0) {
        puVar6[3] = *(unsigned int *)(iVar2 + 0x14);
        puVar6[4] = *(unsigned int *)(iVar2 + 0x18);
        puVar6[5] = *(unsigned int *)(iVar2 + 0x1c);
        puVar6[6] = *(unsigned int *)(iVar2 + 0x20);
      }
    }
    iVar2 = *(int *)(param_2 + 0xc);
    puVar8 = (unsigned int *)0x0;
    puVar9 = (unsigned int *)0x0;
    if ((puVar6 != (unsigned int *)0x0) && (cVar7 = fn_8223AAC0(puVar6), cVar7 != '\0')) {
      puVar8 = puVar6 + 3;
      puVar9 = puVar6;
    }
    iVar3 = *(int *)(iVar2 + 0x2c4);
    *(unsigned int **)(iVar2 + 0x2c4) = puVar9;
    *(unsigned int **)(iVar2 + 0x2c0) = puVar8;
    if (iVar3 != 0) {
      fn_822315A0();
    }
    bVar11 = (puVar6 == (unsigned int *)0x0) << 1;
    if (puVar6 != (unsigned int *)0x0) {
      fn_822315A0(puVar6);
    }
    piVar4 = *(int **)(*(int *)(param_2 + 0xc) + 0x1c);
    fn_8255AE78((double)*(float *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x14));
    iVar2 = *(int *)(param_2 + 0xc);
    puVar6 = (unsigned int *)(iVar2 + 0x80U & 0xfffffff0);
    uVar14 = puVar6[1];
    uVar15 = puVar6[2];
    uVar16 = puVar6[3];{ V16 _vt0 = vectorAddFloatingPoint(in_vs32,in_vs33); memcpy(auVar13, &_vt0, 16); }
    loadVectorLeftIndexed128(0xffffffff82192950,0x60);
    vectorSubtractFloatingPoint(in_vs45,auVar13);
    vectorRotateLeftImmediateMaskInsert128
              (*(unsigned char (*) [16])(in_r0 + iVar2 + 0x290 & 0xfffffff0),in_vr12,1,0);
    if (!(bool)(bVar11 >> 1 & 1)) {
      puVar8 = (unsigned int *)(in_r0 + iVar2 + 0x290 & 0xfffffff0);
      *puVar8 = *puVar6;
      puVar8[1] = uVar14;
      puVar8[2] = uVar15;
      puVar8[3] = uVar16;
      *(unsigned int *)(iVar2 + 0x2a4) = 0;
      *(unsigned int *)(iVar2 + 0x2a8) = 0;
    }
    *(unsigned int *)(param_2 + 0x58) = 1;
    *(float *)(param_2 + 0xb4) = (float)dVar12;
    iVar2 = *(int *)(*(int *)(param_2 + 0xc) + 0x14);
    puVar6 = (unsigned int *)(iVar2 + 0x120U & 0xfffffff0);
    uVar14 = puVar6[1];
    uVar15 = puVar6[2];
    uVar16 = puVar6[3];
    puVar8 = (unsigned int *)(iVar2 + 0x100U & 0xfffffff0);
    uVar25 = *puVar8;
    uVar26 = puVar8[1];
    uVar27 = puVar8[2];
    uVar28 = puVar8[3];
    puVar8 = (unsigned int *)(in_r0 + iVar2 + 0xf0 & 0xfffffff0);
    uVar21 = *puVar8;
    uVar22 = puVar8[1];
    uVar23 = puVar8[2];
    uVar24 = puVar8[3];
    puVar8 = (unsigned int *)(iVar2 + 0x110U & 0xfffffff0);
    uVar17 = *puVar8;
    uVar18 = puVar8[1];
    uVar19 = puVar8[2];
    uVar20 = puVar8[3];
    puVar8 = (unsigned int *)(param_2 + 0x90U & 0xfffffff0);
    *puVar8 = *puVar6;
    puVar8[1] = uVar14;
    puVar8[2] = uVar15;
    puVar8[3] = uVar16;
    puVar6 = (unsigned int *)(param_2 + 0x70U & 0xfffffff0);
    *puVar6 = uVar25;
    puVar6[1] = uVar26;
    puVar6[2] = uVar27;
    puVar6[3] = uVar28;
    puVar6 = (unsigned int *)(in_r0 + param_2 + 0x60 & 0xfffffff0);
    *puVar6 = uVar21;
    puVar6[1] = uVar22;
    puVar6[2] = uVar23;
    puVar6[3] = uVar24;
    puVar6 = (unsigned int *)(param_2 + 0x80U & 0xfffffff0);
    *puVar6 = uVar17;
    puVar6[1] = uVar18;
    puVar6[2] = uVar19;
    puVar6[3] = uVar20;
    if (iStack_5c != 0) {
      fn_822315A0();
    }
  }
  else {
    fn_822E5640(*(unsigned int *)(param_2 + 0xc));
    fn_822E5710(*(unsigned int *)(param_2 + 0xc));
  }
  return;
}

