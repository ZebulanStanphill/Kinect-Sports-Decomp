extern int memcpy();


int fn_8306D108(int param_1,unsigned int param_2,int param_3)

{
  int uVar1;
  
  if (((int)param_2 < 0) || (param_2 >= 0x48)) {
    uVar1 = 0x80070057;
  }
  else {
    memcpy(param_3,param_2 * 0x30 + param_1 + 0xce90,0x30);
    uVar1 = 0;
  }
  return uVar1;
}

