extern int fn_8287A6B8();


void fn_8287A560(unsigned int self,int param_2)

{
  float dVar1;
  float dVar2;
  
  if (self != param_2) {
    dVar2 = (double)*(float *)(self + 4);
    dVar1 = (double)*(float *)(self + 0xc);
    fn_8287A6B8();
    *(float *)(self + 0xc) = (float)dVar1;
    *(float *)(self + 4) = (float)dVar2;
  }
  return;
}

