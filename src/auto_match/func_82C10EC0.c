extern int fn_82C10B28();


void fn_82C10EC0(int param_1,unsigned int param_2)

{
  int iVar1;
  
  iVar1 = param_1;
  if (*(int (**)())(iVar1 + 0x208) != (int (*)())0x0) {
    (*(int (**)())(iVar1 + 0x208))
              (param_1,*(unsigned int *)(((unsigned int)(param_2 << 2) & 0x3fc) + iVar1),
               param_2,*(unsigned int *)(iVar1 + 0x20c));
  }
  param_1 = (param_2 & 0xff) * 4 + param_1;
  iVar1 = fn_82C10B28(*(unsigned int *)(iVar1 + 0x1fc),2,param_1);
  if (iVar1 >= 0) {
    *(unsigned int *)param_1 = 0;
  }
  return;
}

