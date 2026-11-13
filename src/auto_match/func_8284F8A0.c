extern int fn_82811520();
extern int fn_82859E28();


void fn_8284F8A0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82859E28();
  fn_82811520(*(unsigned int *)(param_4 + 0x1c),*puVar1,*(unsigned int *)(param_1 + 0x40),0,
               *(unsigned int *)(param_1 + 0x38));
  return;
}

