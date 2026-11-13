extern int fn_825604A0();


void fn_8245F310(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  if (*(int *)(iVar1 + 0x180) != 0) {
    fn_825604A0(iVar1);
    *(unsigned int *)(iVar1 + 0x180) = 0;
  }
  *(unsigned int *)(*(int *)(param_1 + 200) + 0x544) = 0;
  return;
}

