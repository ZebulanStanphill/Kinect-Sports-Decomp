extern unsigned int fStack_14;
extern unsigned int fStack_18;
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern unsigned int fStack_24;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_8270D7A0();


unsigned __int64 fn_8270E1B8(unsigned __int64 param_1,unsigned __int64 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  unsigned __int64 uVar3;
  float *pfVar4;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fStack_2c = *param_3;
  fStack_30 = param_3[1];
  fStack_28 = param_3[2];
  fStack_1c = param_3[3];
  fStack_24 = fStack_30;
  fStack_20 = fStack_28;
  fStack_18 = fStack_2c;
  fStack_14 = fStack_1c;
  uVar3 = fn_8270D7A0(param_2,&fStack_2c,&fStack_30);
  uVar3 = fn_8270D7A0(uVar3,&fStack_28,&fStack_24);
  uVar3 = fn_8270D7A0(uVar3,&fStack_20,&fStack_1c);
  fn_8270D7A0(uVar3,&fStack_18,&fStack_14);
  fVar1 = fStack_2c;
  if (fStack_28 < fStack_2c) {
    fVar1 = fStack_28;
  }
  fVar2 = fStack_30;
  if (fStack_24 < fStack_30) {
    fVar2 = fStack_24;
  }
  if (fStack_2c < fStack_28) {
    fStack_2c = fStack_28;
  }
  if (fStack_30 < fStack_24) {
    fStack_30 = fStack_24;
  }
  if (fStack_20 < fVar1) {
    fVar1 = fStack_20;
  }
  if (fStack_1c < fVar2) {
    fVar2 = fStack_1c;
  }
  if (fStack_2c < fStack_20) {
    fStack_2c = fStack_20;
  }
  if (fStack_30 < fStack_1c) {
    fStack_30 = fStack_1c;
  }
  if (fStack_18 < fVar1) {
    fVar1 = fStack_18;
  }
  if (fStack_14 < fVar2) {
    fVar2 = fStack_14;
  }
  if (fStack_2c < fStack_18) {
    fStack_2c = fStack_18;
  }
  if (fStack_30 < fStack_14) {
    fStack_30 = fStack_14;
  }
  pfVar4 = (float *)param_1;
  *pfVar4 = fVar1;
  pfVar4[1] = fVar2;
  pfVar4[2] = fStack_2c;
  pfVar4[3] = fStack_30;
  return param_1;
}

