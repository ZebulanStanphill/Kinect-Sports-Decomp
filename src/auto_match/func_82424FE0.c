extern int fn_823598B0();
extern int fn_82359928();


void fn_82424FE0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  fn_823598B0(iVar1,0);
  fn_82359928(iVar1,0);
  *(unsigned int *)(iVar1 + 0xf0) = 0;
  if (param_3 == 0) {
    *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + 1;
  }
  else {
    *(int *)(param_2 + 0x74) = *(int *)(param_2 + 0x74) + 1;
  }
  if (param_4 != 0) {
    *(int *)(param_2 + 0xa0) = *(int *)(param_2 + 0xa0) + 1;
  }
  return;
}

