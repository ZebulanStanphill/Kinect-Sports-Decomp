extern unsigned int lbl_821917D4;
extern unsigned int lbl_821955F4;
extern unsigned int uRam831c6e4c;


void fn_824602A0(int param_1)

{
  float fVar1;
  float fVar2;
  unsigned int uVar3;
  
  uVar3 = uRam831c6e4c;
  if (*(int *)(*(int *)(param_1 + 0x50) + 0x34) == 0) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x50) + 0x74) == 0) {
    return;
  }
  fVar1 = *(float *)(*(int *)(param_1 + 0x3c) + 0x120);
  fVar2 = *(float *)(*(int *)(param_1 + 0x3c) + 4);
  if ((fVar2 < fVar1 - lbl_821917D4) || (fVar1 + lbl_821917D4 < fVar2)) {
    if (fVar2 <= fVar1) {
      *(unsigned int *)(param_1 + 0x8c) = 1;
      *(unsigned int *)(param_1 + 0x7c) = 0;
    }
    else {
      *(unsigned int *)(param_1 + 0x7c) = 1;
      *(unsigned int *)(param_1 + 0x8c) = 0;
    }
  }
  else {
    *(unsigned int *)(param_1 + 0x7c) = 1;
    *(unsigned int *)(param_1 + 0x8c) = 1;
    uVar3 = uRam831c6e4c;
  }
  *(unsigned int *)(param_1 + 0x84) = uVar3;
  *(unsigned int *)(param_1 + 0x74) = uVar3;
  uVar3 = lbl_821955F4;
  *(unsigned int *)(param_1 + 0x88) = lbl_821955F4;
  *(unsigned int *)(param_1 + 0x78) = uVar3;
  return;
}

