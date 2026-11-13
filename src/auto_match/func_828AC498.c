typedef unsigned char bool;
#define true 1
#define false 0


void fn_828AC498(int param_1,unsigned int param_2,unsigned int param_3,__int64 param_4,__int64 param_5)

{
  bool bVar1;
  unsigned char uVar2;
  
  *(unsigned int *)(param_1 + 8) = param_2;
  *(unsigned int *)(param_1 + 0xc) = param_3;
  *(unsigned int *)(param_1 + 0x10) = (unsigned int)param_4;
  *(unsigned int *)(param_1 + 0x14) = (unsigned int)param_5;
  if ((param_4 + param_5 == 0) || (bVar1 = true, (unsigned int)param_4 < param_2)) {
    bVar1 = false;
  }
  if ((!bVar1) || (uVar2 = 1, (unsigned int)param_5 < param_3)) {
    uVar2 = 0;
  }
  *(unsigned char *)(param_1 + 4) = uVar2;
  return;
}

