extern int fn_8263A120();
extern int fn_82640A98();


void fn_82852B48(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0xc) * 4 + *(int *)(param_3 + 0x38));
  if (iVar1 != 0) {
    fn_8263A120(*(unsigned int *)(param_1 + 4),*(unsigned int *)(iVar1 + 0x20));
    fn_82640A98(*(unsigned int *)(param_1 + 4),*(unsigned int *)(iVar1 + 0x30),0,0,
                      *(unsigned int *)(iVar1 + 0x28));
  }
  return;
}

