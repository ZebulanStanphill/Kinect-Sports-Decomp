typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_40;
extern int fn_82ED41C8();
extern int fn_82F06DA0();
extern int fn_82F65350();


void fn_82F07248(int param_1)

{
  bool bVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  unsigned int auStack_40;
  
  *(unsigned int *)(param_1 + 0x97c) = 0;
  uVar3 = 0;
  *(unsigned char *)(param_1 + 0x980) = 0;
  if ((*(char *)(param_1 + 0x7b30) == '\0') || (bVar5 = true, *(int *)(param_1 + 0xaf0) != 0)) {
    bVar5 = false;
  }
  if (((*(unsigned char *)(param_1 + 0x7b31) == 0) || (*(int *)(param_1 + 0xaf0) != 1)) ||
     (bVar1 = true, *(unsigned char *)(param_1 + 0x7b32) < *(unsigned char *)(param_1 + 0x7b31))) {
    bVar1 = false;
  }
  if (((bVar5) || (bVar1)) &&
     (uVar2 = fn_82ED41C8(*(unsigned int *)(param_1 + 0x7b40),&auStack_40),
     (uVar2 & 0xffffffff) != 0)) {
    *(unsigned int *)(param_1 + 0x97c) = 1;
    *(unsigned int *)(param_1 + 0x984) = 0;
    if ((uVar2 & 0xffffffff) != 1) {
      iVar4 = 0;
      *(char *)(param_1 + 0x980) = (char)uVar2;
      if ((uVar2 & 0xffffffff) != 0) {
        do {
          iVar6 = *(int *)(param_1 + 0x588);
          if (0x1f < iVar6) {
            iVar6 = 0x1f;
          }
          *(char *)(param_1 + 0x981 + iVar4) = (char)iVar6;
          iVar4 = iVar4 + 1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      goto LAB_82f073e8;
    }
  }
  else {
    if (((*(char *)(param_1 + 0x7b30) != '\0') && (*(int *)(param_1 + 0x7b2c) == 0)) ||
       (*(int *)(*(int *)(param_1 + 0x7b40) + 0x3c) == 0)) goto LAB_82f073e8;
    if ((*(int *)(param_1 + 0xaf0) == 1) || (*(int *)(param_1 + 0xaf0) == 2)) {
      uVar3 = fn_82F06DA0(param_1);
    }
    if (((*(int *)(param_1 + 0x978) == 2) || (*(int *)(param_1 + 0xaf0) == 0)) ||
       (*(int *)(param_1 + 0xaf0) == 4)) {
      uVar3 = *(int *)(param_1 + 0x588) + 7;
      *(unsigned int *)(param_1 + 0x984) = 0xf;
      uVar3 = ((int)uVar3 >> 3) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 7) != 0);
    }
    if ((*(int *)(param_1 + 0x984) != 0) && (*(int *)(param_1 + 0x7914) < 2)) {
      *(unsigned int *)(param_1 + 0x97c) = 1;
      goto LAB_82f073e8;
    }
    if (*(int *)(param_1 + 0x7914) != 2) {
      if (*(int *)(param_1 + 0x7914) != 3) {
        return;
      }
      *(unsigned int *)(param_1 + 0x97c) = 1;
      *(unsigned int *)(param_1 + 0x984) = 0;
      *(unsigned char *)(param_1 + 0x980) = 0;
      return;
    }
    *(unsigned int *)(param_1 + 0x97c) = 1;
    auStack_40 = 4;
    *(unsigned int *)(param_1 + 0x984) = 0;
  }
  *(unsigned char *)(param_1 + 0x980) = 1;
  uVar3 = auStack_40;
LAB_82f073e8:
  if (*(char *)(param_1 + 0x980) == '\x01') {
    if (*(int *)(param_1 + 0x1a74) == 0) {
      iVar4 = *(int *)(param_1 + 0x588) + uVar3;
      if (0x1f < iVar4) {
        iVar4 = 0x1f;
      }
      *(char *)(param_1 + 0x981) = (char)iVar4;
    }
    else {
      if ((*(unsigned int *)(param_1 + 0x1dd0) & 0xf) == 0) {
        iVar4 = fn_82F65350();
        uVar3 = iVar4 + *(int *)(param_1 + 0x588) & 0x1f;
        *(char *)(param_1 + 0x981) = (char)uVar3;
        if (uVar3 == 0) {
          *(unsigned char *)(param_1 + 0x981) = 1;
        }
      }
      if (*(unsigned char *)(param_1 + 0x981) < 5) {
        *(unsigned char *)(param_1 + 0x981) = 4;
      }
    }
  }
  return;
}

