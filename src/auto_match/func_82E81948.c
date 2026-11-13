extern unsigned int iStack00000020;
extern unsigned int uStack00000024;


void fn_82E81948(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iStack00000020;
  unsigned int uStack00000024;
  
  *(unsigned int *)(param_1 + 0x888) = 0xffffffff;
  if (*(int *)(param_1 + 0xa0c) == 0) {
    iVar1 = *(int *)(param_1 + 0x1fac);
    if (iVar1 == 0) {
      *(unsigned int *)(param_1 + 0x888) = 0;
    }
    else if (iVar1 == 1) {
      *(unsigned int *)(param_1 + 0x888) = 1;
    }
    else {
      *(unsigned int *)(param_1 + 0x888) = ((unsigned int)LZCOUNT(iVar1 + -2) >> 5) + 1;
    }
  }
  else {
    *(unsigned int *)(param_1 + 0x888) = 3;
  }
  if (*(int *)(param_1 + 0xb08) != 0) {
    *(unsigned int *)(param_1 + 0x888) = 1;
  }
  iStack00000020 = (int)((unsigned __int64)param_2 >> 0x20);
  if (iStack00000020 == 0) {
    return;
  }
  uStack00000024 = (unsigned int)param_2;
  *(unsigned int *)(param_1 + 0x888) = uStack00000024;
  return;
}

