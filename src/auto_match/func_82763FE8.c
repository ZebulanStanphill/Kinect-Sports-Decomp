extern int fn_827622E0();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int uStack_40;
extern unsigned int uStack_54;


/* WARNING: Removing unreachable block (ram,0x82763d10) */

void fn_82763FE8(int param_1,__int64 param_2,__int64 param_3,__int64 param_4,__int64 param_5)

{
  int iVar2;
  unsigned __int64 uVar1;
  int iVar4;
  unsigned __int64 uVar3;
  int iVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned int *puVar9;
  unsigned __int64 uVar8;
  unsigned __int64 uVar10;
  unsigned char bVar11;
  __int64 lVar12;
  unsigned int uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  unsigned char uStack_40;
  
  uVar3 = param_3 - (unsigned __int64)*(unsigned int *)(param_1 + 0x18);
  uVar1 = param_2 - (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
  iVar2 = (int)uVar1;
  iVar4 = (int)uVar3;
  iVar5 = (int)(param_4 - param_2);
  iVar6 = (int)(param_5 - param_3);
  uStack_40 = 0;
  if (*(unsigned int *)(param_1 + 0x28) < *(unsigned int *)(param_1 + 0x20)) {
    puVar7 = (unsigned int *)(*(unsigned int *)(param_1 + 0x28) * 0x14 + *(int *)(param_1 + 0x1c) + -4);
    puVar9 = &uStack_54;
    lVar12 = 5;
    do {
      puVar9 = puVar9 + 1;
      puVar7 = puVar7 + 1;
      *puVar7 = *puVar9;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  else {
    iStack_50 = iVar2;
    iStack_4c = iVar4;
    iStack_48 = iVar5;
    iStack_44 = iVar6;
    fn_827622E0(param_1 + 0x1c,&iStack_50);
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ((uVar1 ^ (__int64)(iVar2 >> 0x1f)) - (__int64)(iVar2 >> 0x1f) & 0x7fffffff) << 1;
  }
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = ((uVar3 ^ (__int64)(iVar4 >> 0x1f)) - (__int64)(iVar4 >> 0x1f) & 0x7fffffff) << 1;
  }
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = ((param_4 - param_2 ^ (__int64)(iVar5 >> 0x1f)) - (__int64)(iVar5 >> 0x1f) &
            0x7fffffffU) << 1;
  }
  if (iVar6 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = ((param_5 - param_3 ^ (__int64)(iVar6 >> 0x1f)) - (__int64)(iVar6 >> 0x1f) &
             0x7fffffffU) << 1;
  }
  uVar1 = uVar10 | uVar8 | uVar3 | uVar1;
  if (uVar1 < 0x8000) {
    if (uVar1 < 0x80) {
      if (uVar1 < 8) {
        if (uVar1 < 2) {
          bVar11 = -((uVar1 == 0) + -1);
        }
        else {
          bVar11 = 3 - (uVar1 < 4);
        }
      }
      else if (uVar1 < 0x20) {
        bVar11 = 5 - (uVar1 < 0x10);
      }
      else {
        bVar11 = 7 - (uVar1 < 0x40);
      }
    }
    else if (uVar1 < 0x800) {
      if (uVar1 < 0x200) {
        bVar11 = 9 - (uVar1 < 0x100);
      }
      else {
        bVar11 = 0xb - (uVar1 < 0x400);
      }
    }
    else if (uVar1 < 0x2000) {
      bVar11 = 0xd - (uVar1 < 0x1000);
    }
    else {
      bVar11 = 0xf - (uVar1 < 0x4000);
    }
  }
  else if (uVar1 < 0x800000) {
    if (uVar1 < 0x80000) {
      if (uVar1 < 0x20000) {
        bVar11 = 0x11 - (uVar1 < 0x10000);
      }
      else {
        bVar11 = 0x13 - (uVar1 < 0x40000);
      }
    }
    else if (uVar1 < 0x200000) {
      bVar11 = 0x15 - (uVar1 < 0x100000);
    }
    else {
      bVar11 = 0x17 - (uVar1 < 0x400000);
    }
  }
  else if (uVar1 < 0x8000000) {
    if (uVar1 < 0x2000000) {
      bVar11 = 0x19 - (uVar1 < 0x1000000);
    }
    else {
      bVar11 = 0x1b - (uVar1 < 0x4000000);
    }
  }
  else if (uVar1 < 0x20000000) {
    bVar11 = 0x1d - (uVar1 < 0x10000000);
  }
  else if (uVar1 < 0x40000000) {
    bVar11 = 0x1e;
  }
  else {
    bVar11 = 0x20 - (uVar1 < 0xffffffff80000000);
  }
  if (bVar11 <= *(unsigned char *)(param_1 + 0x34)) {
    bVar11 = *(unsigned char *)(param_1 + 0x34);
  }
  *(unsigned char *)(param_1 + 0x34) = bVar11;
  *(int *)(param_1 + 0x14) = iVar2 + iVar5 + *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar4 + iVar6;
  return;
}

