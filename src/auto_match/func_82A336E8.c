unsigned char fn_82A336E8(unsigned int param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  __int64 lStack_20;
  
  if (param_1 == 0xffffffff) {
    lStack_20 = -0x8000000000000000;
  }
  else {
    lStack_20 = (unsigned __int64)param_1 * -10000;
  }
  do {
    lVar1 = KeDelayExecutionThread(1,param_2,&lStack_20);
    if ((param_2 & 0xff) == 0) break;
  } while ((int)lVar1 == 0x101);
  return -(lVar1 == 0xc0) & 0xc0;
}

