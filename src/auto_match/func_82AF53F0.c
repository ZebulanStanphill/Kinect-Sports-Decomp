#define true 1


void fn_82AF53F0(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  
  while( true ) {
    if ((param_2[2] & 0x8000) == 0) {
      return;
    }
    puVar1 = (unsigned int *)param_2[5];
    param_2[2] = param_2[2] & 0xffff7fff;
    for (; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[1]) {
      fn_82AF53F0(param_1,*puVar1);
    }
    if ((*param_2 & 0x1fffe000) != 0) break;
    param_2 = (unsigned int *)param_2[6];
  }
  return;
}

