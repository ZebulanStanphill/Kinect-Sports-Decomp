extern int fn_8287A6B8();


void fn_8287A560(unsigned int param_1,int param_2)

{
  float dVar1;
  float dVar2;
  
  if (param_1 != param_2) {
    dVar2 = (double)*(float *)(param_1 + 4);
    dVar1 = (double)*(float *)(param_1 + 0xc);
    fn_8287A6B8();
    *(float *)(param_1 + 0xc) = (float)dVar1;
    *(float *)(param_1 + 4) = (float)dVar2;
  }
  return;
}

