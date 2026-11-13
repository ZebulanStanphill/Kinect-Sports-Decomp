extern int fn_823598B0();
extern int fn_82359928();
extern int fn_8239C468();


void fn_823A5E90(int param_1)

{
  int iVar1;
  float uVar2;
  
  uVar2 = 0.0f;
  iVar1 = *(int *)(param_1 + 8);
  *(unsigned int *)(iVar1 + 0xbc) = 0;
  *(float *)(iVar1 + 200) = uVar2;
  *(unsigned int *)(iVar1 + 0xc0) = 0xffffffff;
  *(float *)(iVar1 + 0xc4) = uVar2;
  fn_823598B0(*(unsigned int *)(param_1 + 8),0);
  fn_82359928(*(unsigned int *)(param_1 + 8),0);
  fn_8239C468(*(unsigned int *)(param_1 + 8),1);
  return;
}

