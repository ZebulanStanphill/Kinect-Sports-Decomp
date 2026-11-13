extern int fn_8306D7E0();


void fn_8306DCC0(int param_1,float param_2,float param_3)

{
  unsigned char cVar1;
  
  cVar1 = fn_8306D7E0();
  if (cVar1 == '\0') {
    *(float *)(param_1 + 0x1a74) = (float)param_2;
    *(float *)(param_1 + 0x1a84) = (float)param_3;
  }
  return;
}

