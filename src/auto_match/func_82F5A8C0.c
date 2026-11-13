typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_82F535C8();
extern int fn_82F5A598();
extern int fn_82F5A628();
extern int fn_8306ED30();
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_820288E4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BAFD0;
extern unsigned int lbl_83263010;


void fn_82F5A8C0(unsigned __int64 param_1,__int64 param_2,__int64 param_3,int param_4)

{
  float fVar1;
  int iVar2;
  unsigned int *puVar3;
  bool bVar4;
  int in_r0;
  char cVar5;
  unsigned int *puVar6;
  bool bVar7;
  __int64 lVar8;
  double dVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  float fStack_70;
  float fStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_50;
  float fStack_4c;
  
  puVar6 = (unsigned int *)(param_4 + -4);
  lVar8 = 0x14;
  do {
    puVar6 = puVar6 + 1;
    *puVar6 = 0x3f800000;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  lVar8 = param_3 * 0x1c0 + param_2 + 0x30;
  dVar9 = (double)lbl_82002C2C;
  cVar5 = fn_82F5A598(dVar9);
  if (cVar5 == '\0') {
    cVar5 = fn_82F5A598(dVar9);
    bVar4 = true;
    if (cVar5 == '\0') goto LAB_82f5a950;
  }
  bVar4 = false;
LAB_82f5a950:
  cVar5 = fn_82F5A628((double)lbl_820288E4,lVar8);
  if (lbl_83263010 != '\0') {
    if ((bVar4) || (cVar5 != '\0')) {
      cVar5 = '\x01';
    }
    else {
      cVar5 = '\0';
    }
  }
  if (cVar5 != '\0') {
    iVar2 = (int)lVar8;
    puVar6 = (unsigned int *)(iVar2 + 0x20U & 0xfffffff0);
    uVar10 = puVar6[1];
    uVar11 = puVar6[2];
    uVar12 = puVar6[3];
    puVar3 = (unsigned int *)(iVar2 + 0xf0U & 0xfffffff0);
    uVar13 = *puVar3;
    uVar14 = puVar3[1];
    uVar15 = puVar3[2];
    uVar16 = puVar3[3];
    puVar3 = (unsigned int *)((int)&fStack_70 + in_r0 & 0xfffffff0);
    *puVar3 = *puVar6;
    puVar3[1] = uVar10;
    puVar3[2] = uVar11;
    puVar3[3] = uVar12;
    bVar4 = false;
    puVar6 = (unsigned int *)((int)&fStack_60 + in_r0 & 0xfffffff0);
    *puVar6 = uVar13;
    puVar6[1] = uVar14;
    puVar6[2] = uVar15;
    puVar6[3] = uVar16;
    fStack_5c = lbl_821AAD20;
    puVar6 = (unsigned int *)(iVar2 + 0x130U & 0xfffffff0);
    uVar10 = puVar6[1];
    uVar11 = puVar6[2];
    uVar12 = puVar6[3];
    bVar7 = lbl_821AAD20 <= fStack_60 - fStack_70;
    puVar3 = (unsigned int *)((int)&fStack_50 + in_r0 & 0xfffffff0);
    *puVar3 = *puVar6;
    puVar3[1] = uVar10;
    puVar3[2] = uVar11;
    puVar3[3] = uVar12;
    fStack_6c = fStack_5c;
    fStack_4c = fStack_5c;
    if (bVar7) {
      if (fStack_5c < fStack_50 - fStack_70) {
        bVar4 = false;
      }
    }
    else {
      bVar4 = true;
    }
    fn_8306ED30();
    dVar9 = (double)fn_82F535C8();
    fVar1 = (float)((double)lbl_831BAFD0 / (double)(float)(dVar9 + (double)lbl_831BAFD0));
    if (bVar4) {
      *(float *)(param_4 + 0x3c) = fVar1;
      *(float *)(param_4 + 0x38) = fVar1;
      *(float *)(param_4 + 0x34) = fVar1;
      *(float *)(param_4 + 0x30) = fVar1;
    }
    else {
      *(float *)(param_4 + 0x4c) = fVar1;
      *(float *)(param_4 + 0x48) = fVar1;
      *(float *)(param_4 + 0x44) = fVar1;
      *(float *)(param_4 + 0x40) = fVar1;
    }
  }
  return;
}

