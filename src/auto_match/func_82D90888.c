extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82D90888(int param_1,int param_2)

{
  int iVar1;
  
  *(unsigned char *)(param_2 + 0x26) = *(unsigned char *)(param_2 + 0x26) & 0xcf;
  RtlEnterCriticalSection(*(unsigned int *)(param_1 + 0xc0));
  if (*(short *)(param_2 + 0x22) == -1) {
    *(short *)(param_2 + 0x22) = (short)*(unsigned int *)(param_1 + 0x44);
    iVar1 = fn_82CE5410();
    if (*(unsigned int *)(param_1 + 0x44) == (*(unsigned int *)(param_1 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(unsigned int *)(iVar1 + 0x10),(int *)(param_1 + 0x40),4);
    }
    *(int *)(*(int *)(param_1 + 0x44) * 4 + *(int *)(param_1 + 0x40)) = param_2;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  }
  RtlLeaveCriticalSection(*(unsigned int *)(param_1 + 0xc0));
  return;
}

