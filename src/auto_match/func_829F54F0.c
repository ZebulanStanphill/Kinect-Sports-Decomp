extern int fn_829F5370();
extern int fn_829FD028();


void fn_829F54F0(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x9c);
  if (iVar1 != 0) {
    fn_829FD028(iVar1);
    fn_829F5370(iVar1);
    *(unsigned int *)(param_1 + 0x9c) = 0;
  }
  return;
}

