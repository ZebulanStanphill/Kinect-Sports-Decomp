extern int fn_827589C0();
extern int fn_82759A68();


void fn_82758BD0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x85) == '\0') {
    iVar1 = *(int *)(param_1 + 8);
    fn_827589C0(iVar1 + 0x5c,param_1 + 0x6c);
    *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(iVar1 + 0x60);
  }
  fn_82759A68((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 8) + 0x60) * 0x18 +
                    (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 8) + 0x5c) + -0x18);
  return;
}

