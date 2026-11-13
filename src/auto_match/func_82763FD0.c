extern int fn_827622E0();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int uStack_40;
extern unsigned int uStack_54;


/* WARNING: Removing unreachable block (ram,0x827639f0) */

void fn_82763FD0(int param_1,__int64 param_2,__int64 param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned char bVar7;
  __int64 lVar8;
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
  uStack_40 = 1;
  if (*(unsigned int *)(param_1 + 0x28) < *(unsigned int *)(param_1 + 0x20)) {
    puVar5 = (unsigned int *)(*(unsigned int *)(param_1 + 0x28) * 0x14 + *(int *)(param_1 + 0x1c) + -4);
    puVar6 = &uStack_54;
    lVar8 = 5;
    do {
      puVar6 = puVar6 + 1;
      puVar5 = puVar5 + 1;
      *puVar5 = *puVar6;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  else {
    iStack_50 = iVar2;
    iStack_4c = iVar4;
    iStack_48 = iVar2;
    iStack_44 = iVar4;
    fn_827622E0(param_1 + 0x1c,&iStack_50);
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
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
  uVar3 = uVar3 | uVar1;
  if (uVar3 < 0x8000) {
    if (uVar3 < 0x80) {
      if (uVar3 < 8) {
        if (uVar3 < 2) {
          bVar7 = -((uVar3 == 0) + -1);
        }
        else {
          bVar7 = 3 - (uVar3 < 4);
        }
      }
      else if (uVar3 < 0x20) {
        bVar7 = 5 - (uVar3 < 0x10);
      }
      else {
        bVar7 = 7 - (uVar3 < 0x40);
      }
    }
    else if (uVar3 < 0x800) {
      if (uVar3 < 0x200) {
        bVar7 = 9 - (uVar3 < 0x100);
      }
      else {
        bVar7 = 0xb - (uVar3 < 0x400);
      }
    }
    else if (uVar3 < 0x2000) {
      bVar7 = 0xd - (uVar3 < 0x1000);
    }
    else {
      bVar7 = 0xf - (uVar3 < 0x4000);
    }
  }
  else if (uVar3 < 0x800000) {
    if (uVar3 < 0x80000) {
      if (uVar3 < 0x20000) {
        bVar7 = 0x11 - (uVar3 < 0x10000);
      }
      else {
        bVar7 = 0x13 - (uVar3 < 0x40000);
      }
    }
    else if (uVar3 < 0x200000) {
      bVar7 = 0x15 - (uVar3 < 0x100000);
    }
    else {
      bVar7 = 0x17 - (uVar3 < 0x400000);
    }
  }
  else if (uVar3 < 0x8000000) {
    if (uVar3 < 0x2000000) {
      bVar7 = 0x19 - (uVar3 < 0x1000000);
    }
    else {
      bVar7 = 0x1b - (uVar3 < 0x4000000);
    }
  }
  else if (uVar3 < 0x20000000) {
    bVar7 = 0x1d - (uVar3 < 0x10000000);
  }
  else if (uVar3 < 0x40000000) {
    bVar7 = 0x1e;
  }
  else {
    bVar7 = 0x20 - (uVar3 < 0xffffffff80000000);
  }
  if (bVar7 <= *(unsigned char *)(param_1 + 0x34)) {
    bVar7 = *(unsigned char *)(param_1 + 0x34);
  }
  *(unsigned char *)(param_1 + 0x34) = bVar7;
  *(int *)(param_1 + 0x14) = iVar2 + *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x18) = iVar4 + *(int *)(param_1 + 0x18);
  return;
}

