void fn_830051E0(int param_2,int param_3,float param_1,unsigned char param_5)

{
  unsigned *piStack_20;
  
  switch(param_3) {
  case 0x10000: *(float *)(*(int *)(param_2+4)+4)=param_1; piStack_20=(unsigned *)(*(int *)(param_2+4)+0x14); break;
  case 0x20000: *(float *)(*(int *)(param_2+4)+0xc)=param_1; piStack_20=(unsigned *)(*(int *)(param_2+4)+0x18); break;
  case 0x40000: *(float *)(*(int *)(param_2+4)+0x10)=param_1; piStack_20=(unsigned *)(*(int *)(param_2+4)+0x20); break;
  case 0x80000: *(float *)(*(int *)(param_2+4)+8)=param_1; piStack_20=(unsigned *)(*(int *)(param_2+4)+0x1c); break;
  }
  if ((param_5 != '\0') && (*piStack_20 != 0)) {
    (*(int (**)())(*(int *)(param_2 + -0x1c) + 0x98))(param_2 + -0x1c,3);
    *piStack_20 = 0;
  }
  (*(int (**)())(*(int *)(param_2 + -0x1c) + 0x50))(param_2 + -0x1c);
  return;
}

