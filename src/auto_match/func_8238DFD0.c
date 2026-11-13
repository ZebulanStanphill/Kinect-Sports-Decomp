extern int fn_82372DE8();
extern int fn_82372ED8();
extern unsigned int lbl_821CA460;


unsigned __int64 fn_8238DFD0(int param_1)

{
  int iVar1;
  float fVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int uVar5;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(iVar1 + 0xa00) == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      *(unsigned int *)(param_1 + 0x10) = 1;
      uVar3 = 6;
      fVar2 = lbl_821CA460 / *(float *)(iVar1 + 0x9a0);
      *(float *)(iVar1 + 0x9a8) = lbl_821CA460;
      *(float *)(iVar1 + 0x9a4) = fVar2;
      *(unsigned int *)(param_1 + 0x28) = 1;
    }
    else {
      if ((*(int *)(param_1 + 0x1c) == 0) && (iVar4 = fn_82372ED8(iVar1), iVar4 != 0)) {
        uVar5 = 1;
        uVar3 = 8;
      }
      else {
        if ((*(int *)(param_1 + 0x18) == 0) &&
           ((iVar4 = fn_82372DE8(iVar1,0), iVar4 != 0 ||
            (iVar4 = fn_82372DE8(iVar1,1), iVar4 != 0)))) {
          *(unsigned int *)(param_1 + 0x18) = 1;
          return 9;
        }
        if ((*(int *)(param_1 + 0x14) == 0) && (*(int *)(iVar1 + 0x348) != 0)) {
          *(unsigned int *)(param_1 + 0x14) = 1;
          return 7;
        }
        if ((*(int *)(param_1 + 0x20) == 0) && (*(int *)(iVar1 + 0x218) == 0)) {
          *(unsigned int *)(param_1 + 0x20) = 1;
          return 0xb;
        }
        uVar5 = 0;
        *(unsigned int *)(param_1 + 0x10) = 0;
        uVar3 = 2;
        *(unsigned int *)(param_1 + 0x14) = 0;
        *(unsigned int *)(param_1 + 0x18) = 0;
        *(unsigned int *)(param_1 + 0x20) = 0;
        *(unsigned int *)(param_1 + 0x24) = 1;
      }
      *(unsigned int *)(param_1 + 0x1c) = uVar5;
    }
  }
  else {
    *(unsigned int *)(iVar1 + 0xa00) = 0;
    fVar2 = lbl_821CA460;
    iVar1 = *(int *)(param_1 + 8);
    uVar3 = 5;
    *(float *)(iVar1 + 0x9a8) = lbl_821CA460;
    *(float *)(iVar1 + 0x9a4) = fVar2 / *(float *)(iVar1 + 0x9a0);
    *(unsigned int *)(param_1 + 0x28) = 1;
  }
  return uVar3;
}

