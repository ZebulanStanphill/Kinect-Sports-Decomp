extern void *memcpy(void *d, const void *s, unsigned int n);


int fn_8306CA88(int param_1,unsigned int param_2)

{
  int uVar1;
  
  uVar1 = 0;
  if ((param_2 & 0xffffffff) == 0) {
    uVar1 = 0x80070057;
  }
  else {
    memcpy((void *)param_2,(void *)(param_1 + 4),0x30);
  }
  return uVar1;
}

