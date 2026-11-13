extern unsigned int lbl_820143E0;
extern unsigned int lbl_82014C4C;


unsigned __int64 fn_82A4C2A8(int param_1,float *param_2,int param_3)

{
  float fVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  if (param_3 != 8) {
    return 0xffffffff80070057;
  }
  fVar1 = *param_2;
  uVar3 = 0xffffffff80070057;
  uVar2 = 0;
  if (fVar1 < lbl_820143E0) {
    uVar2 = uVar3;
  }
  if (lbl_82014C4C < param_2[1]) {
    uVar2 = uVar3;
  }
  if (param_2[1] < fVar1) {
    uVar2 = uVar3;
  }
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  *(float *)(param_1 + 0x5c) = fVar1;
  *(float *)(param_1 + 0x60) = param_2[1];
  if (*(float *)(param_1 + 100) < fVar1) {
    *(float *)(param_1 + 100) = fVar1;
  }
  if (*(float *)(param_1 + 100) <= *(float *)(param_1 + 0x60)) {
    return uVar2;
  }
  *(float *)(param_1 + 100) = *(float *)(param_1 + 0x60);
  return uVar2;
}

