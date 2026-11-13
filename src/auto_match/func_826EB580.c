extern int fn_8267BE38();
extern int fn_8267BED0();


void fn_826EB580(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  if ((param_2 & 0xffffffff) != (unsigned __int64)*(unsigned char *)(param_1 + 0x5d)) {
    if (6 < (unsigned __int64)*(unsigned char *)(param_1 + 0x5d)) {
      fn_8267BE38(*(unsigned int *)(param_1 + 0x60));
    }
    if (6 < (param_2 & 0xffffffff)) {
      uVar1 = fn_8267BED0(param_1,param_2,0);
      *(unsigned int *)(param_1 + 0x60) = uVar1;
    }
    *(char *)(param_1 + 0x5d) = (char)param_2;
  }
  return;
}

