extern unsigned int fStack_18;
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_82BA02A8();


void fn_82BE4460(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  fn_82BA02A8(&fStack_30);
  fn_82BA02A8(&fStack_20);
  fStack_20 = *(float *)(param_1 + 0x7c);
  fStack_1c = *(float *)(param_1 + 0x80);
  fVar1 = *(float *)(param_1 + 0xa0);
  fStack_18 = *(float *)(param_1 + 0x84);
  fStack_30 = fStack_20;
  if (fVar1 < fStack_20) {
    fStack_30 = fVar1;
  }
  fVar2 = *(float *)(param_1 + 0xa4);
  fStack_2c = fStack_1c;
  if (fVar2 < fStack_1c) {
    fStack_2c = fVar2;
  }
  fVar3 = *(float *)(param_1 + 0xa8);
  fStack_28 = fStack_18;
  if (fVar3 < fStack_18) {
    fStack_28 = fVar3;
  }
  if (fStack_20 < fVar1) {
    fStack_20 = fVar1;
  }
  if (fStack_1c < fVar2) {
    fStack_1c = fVar2;
  }
  if (fStack_18 < fVar3) {
    fStack_18 = fVar3;
  }
  fVar1 = *(float *)(param_1 + 0x88);
  if (fVar1 < fStack_30) {
    fStack_30 = fVar1;
  }
  fVar2 = *(float *)(param_1 + 0x8c);
  if (fVar2 < fStack_2c) {
    fStack_2c = fVar2;
  }
  fVar3 = *(float *)(param_1 + 0x90);
  if (fVar3 < fStack_28) {
    fStack_28 = fVar3;
  }
  if (fStack_20 < fVar1) {
    fStack_20 = fVar1;
  }
  if (fStack_1c < fVar2) {
    fStack_1c = fVar2;
  }
  if (fStack_18 < fVar3) {
    fStack_18 = fVar3;
  }
  fVar1 = *(float *)(param_1 + 0x94);
  if (fVar1 < fStack_30) {
    fStack_30 = fVar1;
  }
  fVar2 = *(float *)(param_1 + 0x98);
  if (fVar2 < fStack_2c) {
    fStack_2c = fVar2;
  }
  fVar3 = *(float *)(param_1 + 0x9c);
  if (fVar3 < fStack_28) {
    fStack_28 = fVar3;
  }
  if (fStack_20 < fVar1) {
    fStack_20 = fVar1;
  }
  if (fStack_1c < fVar2) {
    fStack_1c = fVar2;
  }
  if (fStack_18 < fVar3) {
    fStack_18 = fVar3;
  }
  *(float *)(param_1 + 0xac) = fStack_30;
  *(float *)(param_1 + 0xb0) = fStack_2c;
  *(float *)(param_1 + 0xb4) = fStack_28;
  *(float *)(param_1 + 0xb8) = fStack_20;
  *(float *)(param_1 + 0xbc) = fStack_1c;
  *(float *)(param_1 + 0xc0) = fStack_18;
  return;
}

