extern int fn_82631578();
extern int fn_82631920();


void fn_825A0B48(int param_1)

{
  int iVar1;
  int in_r7;
  
  iVar1 = *(int *)(param_1 + 0x1ac);
  *(unsigned int *)(in_r7 + 0x2ed8) = 0;
  *(unsigned __int64 *)(in_r7 + 0x10) = *(unsigned __int64 *)(in_r7 + 0x10) | 0x80000;
  fn_82631920(in_r7,*(unsigned int *)(iVar1 + 0x78));
                    /* WARNING: Subroutine does not return */
  fn_82631578(in_r7,*(unsigned int *)(iVar1 + 0x7c));
}

