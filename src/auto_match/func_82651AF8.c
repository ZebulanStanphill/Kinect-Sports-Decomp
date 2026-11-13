extern unsigned int *auStack_70;
extern int fn_826518E0();
extern int fn_82651A90();
extern int fn_82A2ABE0();
extern __int64 lRam83275b70;
extern __int64 lRam83275dc0;
extern unsigned int lbl_83275B68;
extern unsigned int lbl_83275DB8;
extern unsigned int uRam83275d90;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_78;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82651AF8(unsigned __int64 param_1)

{
  unsigned char *pbVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int uVar6;
  __int64 lVar5;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 *puVar9;
  int iVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  __int64 lVar13;
  __int64 lVar14;
  unsigned __int64 uStack_78;
  unsigned char auStack_70 [4];
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  
  iVar3 = (int)param_1;
  uStack_6c = *(unsigned int *)(iVar3 + 0x5528);
  uStack_68 = *(unsigned int *)(iVar3 + 0x5524);
  puVar9 = &uStack_78;
  lVar14 = 8;
  do {
    puVar9 = puVar9 + 1;
    *puVar9 = 0;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  uVar2 = *(unsigned int *)(iVar3 + 0x5550);
  uVar6 = uStack_48 | 0xffff;
  uStack_64 = *(unsigned int *)(iVar3 + 0x5520);
  uStack_58 = *(unsigned int *)(iVar3 + 0x4188);
  uStack_54 = *(unsigned int *)(iVar3 + 0x5548);
  uStack_60 = *(unsigned int *)(iVar3 + 0x5530);
  uStack_50 = *(unsigned int *)(iVar3 + 0x554c);
  uStack_4c = *(unsigned int *)(iVar3 + 0x5c10);
  uStack_5c = *(unsigned int *)(iVar3 + 0x552c);
  iVar10 = *(int *)(iVar3 + 0x2a90);
  pbVar1 = (unsigned char *)(((uVar2 & 7) + 0x10) * 4 + iVar10);
  uVar7 = (unsigned __int64)pbVar1[3] << 0x18 | (unsigned __int64)pbVar1[2] << 0x10 | (unsigned __int64)pbVar1[1] << 8 |
          (unsigned __int64)*pbVar1;
  pbVar1 = (unsigned char *)(((uVar2 + 1 & 7) + 0x10) * 4 + iVar10);
  uVar11 = (unsigned __int64)pbVar1[3] << 0x18 | (unsigned __int64)pbVar1[2] << 0x10 | (unsigned __int64)pbVar1[1] << 8 |
           (unsigned __int64)*pbVar1;
  pbVar1 = (unsigned char *)(((uVar2 - 1 & 7) + 0x10) * 4 + iVar10);
  uVar4 = (unsigned __int64)pbVar1[3] << 0x18 | (unsigned __int64)pbVar1[2] << 0x10 | (unsigned __int64)pbVar1[1] << 8 |
          (unsigned __int64)*pbVar1;
  uStack_48 = uVar6;
  if (((uVar11 != 0) && (*(unsigned int *)(iVar3 + 0x5550) = uVar2 + 2, uVar7 != 0)) && (uVar4 != 0)) {
    if (uVar7 <= uVar4) {
      uVar7 = uVar7 + 0x100000000;
    }
    if (uVar11 <= uVar7) {
      uVar11 = uVar11 + 0x100000000;
    }
    uVar2 = fn_82651A90(uVar11 - uVar7,uVar11 - uVar4);
    uStack_48 = uVar6 & 0xffff0000 | uVar2 & 0xffff;
  }
  iVar3 = fn_826518E0(param_1);
  if (iVar3 == 0) {
    uStack_34 = 0xffffffff;
    uStack_48 = uStack_48 | 0xffff0000;
    uStack_44 = 0xffffffff;
    uStack_40 = 0xffffffff;
    uStack_3c = 0xffffffff;
    uStack_38 = 0xffffffff;
  }
  else {
    iVar10 = -0x7cd8a270;
    uVar4 = lbl_83275B68 - lbl_83275DB8;
    lVar14 = lRam83275b70 - lRam83275dc0;
    iVar3 = fn_82651A90(lVar14 - (unsigned __int64)uRam83275d90,uVar4);
    uStack_48 = iVar3 << 0x10 | uStack_48 & 0xffff;
    uVar2 = fn_82651A90(lVar14);
    lVar8 = *(__int64 *)(iVar10 + 0xa8);
    lVar5 = *(__int64 *)(iVar10 + -0x1a8);
    lVar12 = *(__int64 *)(iVar10 + -0x1b0) - *(__int64 *)(iVar10 + 0xa0);
    iVar3 = fn_82651A90(lVar5 - lVar8,lVar12);
    lVar14 = *(__int64 *)(iVar10 + -0x1a0);
    lVar13 = *(__int64 *)(iVar10 + 0xb0);
    uStack_44 = iVar3 << 0x10 | uVar2 & 0xffff;
    uVar2 = fn_82651A90(((lVar12 - lVar14) - lVar5) + lVar13 + lVar8);
    iVar3 = fn_82651A90(lVar14 - lVar13);
    uStack_40 = iVar3 << 0x10 | uVar2 & 0xffff;
    lVar14 = ((*(__int64 *)(iVar10 + -0x70) - *(__int64 *)(iVar10 + 0x1e0)) -
             *(__int64 *)(iVar10 + 0x1d8)) + *(__int64 *)(iVar10 + -0x78);
    if (lVar14 < 0) {
      uVar2 = 0;
    }
    else if (uVar4 == 0) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = (unsigned int)((lVar14 * 0xaaa9) / (__int64)uVar4);
      trapDoubleWordImmediate(6,uVar4,0);
      trapDoubleWordImmediate
                (5,uVar4 & ~((lVar14 * 0x15552 | (unsigned __int64)(lVar14 * 0xaaa9) >> 0x3f) - 1),0xffff);
    }
    lVar14 = *(__int64 *)(iVar10 + -0x68) - *(__int64 *)(iVar10 + 0x1e8);
    if (lVar14 < 0) {
      uVar7 = 0;
    }
    else if (uVar4 == 0) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = (lVar14 * 0xaaa9) / (__int64)uVar4 & 0xffffffff;
      trapDoubleWordImmediate(6,uVar4,0);
      trapDoubleWordImmediate
                (5,uVar4 & ~((lVar14 * 0x15552 | (unsigned __int64)(lVar14 * 0xaaa9) >> 0x3f) - 1),0xffff);
    }
    uStack_3c = (unsigned int)(uVar7 << 0x10) | uVar2 & 0xffff;
    lVar14 = *(__int64 *)(iVar10 + -0x140) - *(__int64 *)(iVar10 + 0x110);
    if (lVar14 < 0) {
      uVar2 = 0;
    }
    else if (uVar4 == 0) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = (unsigned int)((lVar14 * 0xaaa9) / (__int64)uVar4);
      trapDoubleWordImmediate(6,uVar4,0);
      trapDoubleWordImmediate
                (5,uVar4 & ~((lVar14 * 0x15552 | (unsigned __int64)(lVar14 * 0xaaa9) >> 0x3f) - 1),0xffff);
    }
    lVar14 = *(__int64 *)(iVar10 + -0x1d0) - *(__int64 *)(iVar10 + 0x80);
    if (lVar14 < 0) {
      uVar7 = 0;
    }
    else if (uVar4 == 0) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = (lVar14 * 0xaaa9) / (__int64)uVar4 & 0xffffffff;
      trapDoubleWordImmediate(6,uVar4,0);
      trapDoubleWordImmediate
                (5,uVar4 & ~((lVar14 * 0x15552 | (unsigned __int64)(lVar14 * 0xaaa9) >> 0x3f) - 1),0xffff);
    }
    uStack_38 = (unsigned int)(uVar7 << 0x10) | uVar2 & 0xffff;
    lVar14 = *(__int64 *)(iVar10 + -0x60) - *(__int64 *)(iVar10 + 0x1f0);
    if (lVar14 * 2 < 0) {
      uVar2 = 0;
    }
    else if (uVar4 == 0) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = (unsigned int)((lVar14 * 0x15552) / (__int64)uVar4);
      trapDoubleWordImmediate(6,uVar4,0);
      trapDoubleWordImmediate
                (5,uVar4 & ~((lVar14 * 0x2aaa4 | (unsigned __int64)(lVar14 * 0x15552) >> 0x3f) - 1),0xffff)
      ;
    }
    lVar14 = *(__int64 *)(iVar10 + -0x58) - *(__int64 *)(iVar10 + 0x1f8);
    if (lVar14 * 2 < 0) {
      uVar7 = 0;
    }
    else if (uVar4 == 0) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = (lVar14 * 0x15552) / (__int64)uVar4 & 0xffffffff;
      trapDoubleWordImmediate(6,uVar4,0);
      trapDoubleWordImmediate
                (5,uVar4 & ~((lVar14 * 0x2aaa4 | (unsigned __int64)(lVar14 * 0x15552) >> 0x3f) - 1),0xffff)
      ;
    }
    uStack_34 = (unsigned int)(uVar7 << 0x10) | uVar2 & 0xffff;
  }
  fn_82A2ABE0(0x44336467,auStack_70,0x40);
  return;
}

