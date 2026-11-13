extern int fn_825BBDF8();


unsigned __int64 fn_825BBD78(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  uVar4 = fn_825BBDF8();
  if ((*(unsigned int *)(param_1 + 4) & 0x80) != 0) {
    return uVar4;
  }
  fVar1 = *(float *)(param_1 + 0x48);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = fVar2;
  if (fVar2 <= fVar1) {
    fVar3 = fVar1;
    fVar1 = fVar2;
  }
  if ((*(float *)(param_2 + 4) < fVar1) || (uVar5 = 1, fVar3 <= *(float *)(param_2 + 4))) {
    uVar5 = 0;
  }
  return uVar5 & uVar4;
}

