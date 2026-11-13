extern unsigned int *auStack_20;
extern int fn_82C10F40();
extern int fn_82C11EA8();


void fn_82C12128(int param_1)

{
  int iVar1;
  unsigned int auStack_20 [4];
  
  auStack_20[0] = 0;
  iVar1 = fn_82C10F40(*(unsigned int *)(param_1 + 0x48),*(unsigned char *)(param_1 + 0x10),auStack_20);
  if ((iVar1 >= 0) &&
     (iVar1 = (*(int (**)())(*(int *)(param_1 + 4) + 0x10))(*(int *)(param_1 + 4)), iVar1 >= 0)) {
    fn_82C11EA8(param_1,auStack_20[0]);
  }
  return;
}

