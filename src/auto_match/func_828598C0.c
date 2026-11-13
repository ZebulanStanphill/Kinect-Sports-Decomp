extern int fn_82811700();
extern unsigned int lbl_83211320;
extern unsigned int lbl_83211324;
extern unsigned int lbl_83211328;


int fn_828598C0(double param_1,unsigned int param_2,unsigned __int64 param_3,int param_4,int param_5,
                 float *param_6,float *param_7)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = lbl_83211328;
  if (param_4 == 0) {
    if ((unsigned int)lbl_83211320 < (unsigned int)lbl_83211324) {
      iVar2 = (unsigned int)lbl_83211320 * 0xd8;
      *(unsigned int *)(iVar2 + lbl_83211328) = param_2;
      iVar2 = iVar2 + iVar3;
      lbl_83211320 = lbl_83211320 + 1;
      *(float *)(iVar2 + 4) = (float)param_1;
      fn_82811700(param_6,iVar2 + 200);
      fn_82811700(param_7,iVar2 + 0xd0);
      param_5 = lbl_83211320 - 1;
    }
    else {
      param_5 = -1;
    }
  }
  else {
    iVar3 = param_5 * 0xd8 + lbl_83211328;
    fVar1 = *(float *)(iVar3 + 200);
    if (*param_6 - fVar1 < 0.0) {
      fVar1 = *param_6;
    }
    *(float *)(iVar3 + 200) = fVar1;
    fVar1 = *(float *)(iVar3 + 0xcc);
    if (param_6[1] - *(float *)(iVar3 + 0xcc) < 0.0) {
      fVar1 = param_6[1];
    }
    *(float *)(iVar3 + 0xcc) = fVar1;
    fVar1 = *(float *)(iVar3 + 0xd0);
    if (fVar1 - *param_7 < 0.0) {
      fVar1 = *param_7;
    }
    *(float *)(iVar3 + 0xd0) = fVar1;
    fVar1 = *(float *)(iVar3 + 0xd4);
    if (*(float *)(iVar3 + 0xd4) - param_7[1] < 0.0) {
      fVar1 = param_7[1];
    }
    *(float *)(iVar3 + 0xd4) = fVar1;
  }
  return param_5;
}

