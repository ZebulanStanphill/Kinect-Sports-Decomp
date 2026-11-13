extern unsigned int *auStack_20;
extern int fn_82C3CD98();
extern int fn_82C4D898();


void fn_82C3D240(int param_1,int *param_2)

{
  int iVar1;
  unsigned short auStack_20 [4];
  
  iVar1 = *(int *)(param_1 + 0x20);
  auStack_20[0] = 0;
  fn_82C4D898(*(unsigned int *)(iVar1 + 0x44),auStack_20,0xf);
  *param_2 = *(int *)(iVar1 + 0x6c) * (unsigned int)auStack_20[0];
  fn_82C3CD98();
  return;
}

