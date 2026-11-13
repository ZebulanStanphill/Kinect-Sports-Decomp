extern float fRam83263160;
extern float fRam83263164;
extern float fRam83263178;


unsigned __int64 fn_82F5CD68(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(unsigned int *)(param_1 + 0x14);
  uVar3 = 0;
  iVar1 = (int)fRam83263164;
  iVar4 = iVar1 + 1;
  if (uVar2 < 2) {
    if ((*(int *)(param_1 + 0x34) < iVar4) || (ABS(*(float *)(param_1 + 0x10)) <= fRam83263178)) {
      if (*(int *)(param_1 + 0x34) < iVar1) {
        return uVar3;
      }
      if (ABS(*(float *)(param_1 + 0x10)) <= fRam83263160) {
        return uVar3;
      }
    }
    iVar5 = *(int *)(param_1 + 0x18);
  }
  else if (uVar2 == 2) {
    iVar5 = *(int *)(param_1 + 0x18);
    if (((iVar5 != 3) || (*(int *)(param_1 + 0x34) < iVar4)) ||
       (*(float *)(param_1 + 0x10) <= fRam83263178)) {
      if (*(int *)(param_1 + 0x34) < iVar1) {
        return uVar3;
      }
      if (*(float *)(param_1 + 0x10) <= fRam83263160) {
        return uVar3;
      }
    }
  }
  else {
    if (3 < uVar2) {
      return uVar3;
    }
    iVar5 = *(int *)(param_1 + 0x18);
    if (((iVar5 != 2) || (*(int *)(param_1 + 0x34) < iVar4)) ||
       (-fRam83263178 <= *(float *)(param_1 + 0x10))) {
      if (*(int *)(param_1 + 0x34) < iVar1) {
        return uVar3;
      }
      if (-fRam83263160 <= *(float *)(param_1 + 0x10)) {
        return uVar3;
      }
    }
  }
  *(int *)(param_1 + 0x14) = iVar5;
  return 1;
}

