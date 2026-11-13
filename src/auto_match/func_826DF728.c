extern unsigned int *auStack_20;
extern int fn_8267BED0();


void fn_826DF728(int param_1,float *param_2)

{
  float *pfVar1;
  unsigned int uVar2;
  unsigned int auStack_20 [2];
  
  if (*(unsigned int *)(param_1 + 0x2c) == 0) {
    auStack_20[0] = 0x109;
    uVar2 = fn_8267BED0(param_1,0x10,auStack_20);
    *(unsigned int *)(param_1 + 0x2c) = uVar2;
  }
  pfVar1 = *(float **)(param_1 + 0x2c);
  *pfVar1 = *param_2;
  pfVar1[1] = param_2[1];
  pfVar1[2] = param_2[2] - *param_2;
  pfVar1[3] = param_2[3] - param_2[1];
  return;
}

