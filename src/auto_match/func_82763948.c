extern int fn_827622E0();
extern unsigned int iStack_48;
extern unsigned int iStack_50;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;


void fn_82763948(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned char bVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar5;
  unsigned __int64 uVar4;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned char bVar8;
  __int64 lVar9;
  unsigned int uStack_54;
  int iStack_50;
  unsigned int uStack_4c;
  int iStack_48;
  unsigned int uStack_44;
  unsigned char uStack_40;
  
  iVar2 = (int)param_2;
  uStack_40 = 1;
  if (*(unsigned int *)(param_1 + 0x28) < *(unsigned int *)(param_1 + 0x20)) {
    puVar3 = (unsigned int *)(*(unsigned int *)(param_1 + 0x28) * 0x14 + *(int *)(param_1 + 0x1c) + -4);
    puVar5 = &uStack_54;
    lVar9 = 5;
    do {
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar5;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  else {
    iStack_50 = iVar2;
    uStack_4c = param_3;
    iStack_48 = iVar2;
    uStack_44 = param_3;
    fn_827622E0(param_1 + 0x1c,&iStack_50);
  }
  bVar1 = *(unsigned char *)(param_1 + 0x34);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  if (bVar1 < param_4) {
    *(char *)(param_1 + 0x34) = (char)param_4;
  }
  else if (param_4 == 0) {
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = ((param_2 ^ (__int64)(iVar2 >> 0x1f)) - (__int64)(iVar2 >> 0x1f) & 0x7fffffff) << 1;
    }
    if (param_3 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (((unsigned __int64)param_3 ^ (__int64)((int)param_3 >> 0x1f)) -
               (__int64)((int)param_3 >> 0x1f) & 0x7fffffff) << 1;
    }
    uVar6 = uVar6 | uVar4;
    if (uVar6 < 0x8000) {
      if (uVar6 < 0x80) {
        if (uVar6 < 8) {
          if (uVar6 < 2) {
            uVar7 = -((uVar6 == 0) - 1);
          }
          else {
            uVar7 = 3 - (uVar6 < 4);
          }
        }
        else if (uVar6 < 0x20) {
          uVar7 = 5 - (uVar6 < 0x10);
        }
        else {
          uVar7 = 7 - (uVar6 < 0x40);
        }
      }
      else if (uVar6 < 0x800) {
        if (uVar6 < 0x200) {
          uVar7 = 9 - (uVar6 < 0x100);
        }
        else {
          uVar7 = 0xb - (uVar6 < 0x400);
        }
      }
      else if (uVar6 < 0x2000) {
        uVar7 = 0xd - (uVar6 < 0x1000);
      }
      else {
        uVar7 = 0xf - (uVar6 < 0x4000);
      }
    }
    else if (uVar6 < 0x800000) {
      if (uVar6 < 0x80000) {
        if (uVar6 < 0x20000) {
          uVar7 = 0x11 - (uVar6 < 0x10000);
        }
        else {
          uVar7 = 0x13 - (uVar6 < 0x40000);
        }
      }
      else if (uVar6 < 0x200000) {
        uVar7 = 0x15 - (uVar6 < 0x100000);
      }
      else {
        uVar7 = 0x17 - (uVar6 < 0x400000);
      }
    }
    else if (uVar6 < 0x8000000) {
      if (uVar6 < 0x2000000) {
        uVar7 = 0x19 - (uVar6 < 0x1000000);
      }
      else {
        uVar7 = 0x1b - (uVar6 < 0x4000000);
      }
    }
    else if (uVar6 < 0x20000000) {
      uVar7 = 0x1d - (uVar6 < 0x10000000);
    }
    else if (uVar6 < 0x40000000) {
      uVar7 = 0x1e;
    }
    else {
      uVar7 = 0x20 - (uVar6 < 0xffffffff80000000);
    }
    bVar8 = (unsigned char)uVar7;
    if ((uVar7 & 0xff) <= (unsigned int)bVar1) {
      bVar8 = bVar1;
    }
    *(unsigned char *)(param_1 + 0x34) = bVar8;
  }
  *(int *)(param_1 + 0x14) = iVar2 + *(int *)(param_1 + 0x14);
  *(unsigned int *)(param_1 + 0x18) = param_3 + *(int *)(param_1 + 0x18);
  return;
}

