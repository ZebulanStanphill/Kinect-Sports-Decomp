typedef unsigned char bool;
#define true 1
#define false 0
typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822613B0();
extern int fn_8234C258();
extern int fn_8234C320();
extern int fn_8243D2D8();
extern int fn_82F512E8();
extern int fn_82F52348();
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_823429D0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  bool bVar8;
  unsigned __int64 in_r0;
  unsigned __int64 uVar9;
  int *piVar10;
  unsigned int uVar11;
  char cVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned char in_vr0 [16];
  unsigned int uVar15;
  unsigned char in_vr12 [16];
  unsigned char auVar16 [16];
  unsigned char in_vr13 [16];
  unsigned char auVar17 [16];
  unsigned char auStack_70 [1];
  unsigned char auStack_60 [96];

  iVar1 = **(int **)(param_1 + 0xc);
  iVar2 = *(int *)(iVar1 + 0x1a0);
  if ((*(int *)(iVar2 + 0x10) == 0) || (*(int *)(iVar2 + 0x14) != 0)) {
    uVar9 = 0xffffffff821b181c;
  }
  else {
    uVar9 = 0xffffffff821b17fc;
  }
  fn_8243D2D8((unsigned __int64)*(unsigned int *)(*(int *)(iVar2 + 0xc) + 0x174) + 8,uVar9,0,0);
  if ((*(int *)(*(int *)(iVar1 + 0x1a0) + 0x10) == 0) ||
     (bVar8 = true, *(int *)(*(int *)(iVar1 + 0x1a0) + 0x14) != 0)) {
    bVar8 = false;
  }
  if (*(int *)((!bVar8 + 0xe) * 0x2c + *(int *)(iVar1 + 0x118) + 0x18) != 1) {
    fn_8234C320(1);
  }
  fn_82230110(auStack_60,0xffffffff821b183c);
  fn_8234C258((unsigned __int64)*(unsigned int *)(iVar1 + 0x118) + 0x150,(unsigned int)!bVar8,auStack_60);
  fn_82230300(auStack_60,1,0);
  iVar2 = **(int **)(param_1 + 0xc);
  iVar3 = *(int *)(iVar2 + 0x1a0);
  iVar4 = *(int *)(iVar3 + 0x10);
  if (iVar4 != 0) {
    loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
    iVar5 = (int)in_r0;
    if (*(int *)(iVar3 + 0x14) == 0) {{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr0,4,3); memcpy(auVar16, &_vt0, 16); }
      loadVectorLeftIndexed128(in_r0,0xffffffff82192800);{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3); memcpy(auVar17, &_vt1, 16); }{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(auVar17,auVar16,3,2); memcpy(auVar16, &_vt2, 16); }
      memcpy((void *)((const void *)((unsigned int)(auStack_70 + iVar5) & 0xfffffff0)), auVar16, 16);
    }
    else {{ V16 _vt3 = vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3); memcpy(auVar17, &_vt3, 16); }
      loadVectorLeftIndexed128(0xffffffff821954b0,0x40c);{ V16 _vt4 = vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr0,4,3); memcpy(auVar16, &_vt4, 16); }{ V16 _vt5 = vectorRotateLeftImmediateMaskInsert128(auVar16,auVar17,3,2); memcpy(auVar16, &_vt5, 16); }
      memcpy((void *)((const void *)((unsigned int)(auStack_70 + iVar5) & 0xfffffff0)), auVar16, 16);
    }
    puVar6 = (unsigned int *)((unsigned int)(auStack_70 + iVar5) & 0xfffffff0);
    uVar13 = puVar6[1];
    uVar14 = puVar6[2];
    uVar15 = puVar6[3];
    iVar2 = *(int *)(iVar2 + 0x11c);
    uVar11 = 0;
    piVar10 = (int *)(iVar2 + 0x10);
    do {
      if (*piVar10 == **(int **)(iVar4 + 4)) {
        puVar7 = (unsigned int *)(uVar11 * 0x40 + iVar2 + 0x30 & 0xfffffff0);
        *puVar7 = *puVar6;
        puVar7[1] = uVar13;
        puVar7[2] = uVar14;
        puVar7[3] = uVar15;
        break;
      }
      uVar11 = uVar11 + 1;
      piVar10 = piVar10 + 0x10;
    } while (uVar11 < 2);
  }
  iVar2 = *(int *)(**(int **)(param_1 + 0xc) + 0x24);
  if (iVar2 != 0) {
    if ((*(int *)(*(int *)(iVar1 + 0x1a0) + 0x10) == 0) ||
       (cVar12 = '\x01', *(int *)(*(int *)(iVar1 + 0x1a0) + 0x14) != 0)) {
      cVar12 = '\0';
    }
    cVar12 = (-cVar12 & 5U) + 0xb;
    fn_82F512E8(auStack_70,*(unsigned int *)(iVar2 + 0x20),cVar12,2);
    fn_82F52348(*(unsigned int *)(iVar2 + 0x20),cVar12);
    iVar1 = *(int *)(iVar1 + 0x1a0);
    if ((*(int *)(iVar1 + 0x10) == 0) || (bVar8 = true, *(int *)(iVar1 + 0x14) != 0)) {
      bVar8 = false;
    }
    fn_822613B0(*(unsigned int *)
                       (*(int *)(*(int *)(*(int *)(iVar1 + 0xc) + 0x174) + 0x5c) + 0x1ec),
                      *(unsigned int *)(iVar2 + 0x2c),!bVar8);
  }
  return;
}
