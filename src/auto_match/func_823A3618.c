extern int fn_8229AC50();
extern int fn_822A0E10();
extern int fn_823985A8();
extern int fn_8239CE98();
extern float lbl_8327656C;


void fn_823A3618(int param_1)

{
  float uVar1;
  int iVar2;
  
  iVar2 = fn_8239CE98(*(unsigned int *)(param_1 + 8));
  *(int *)(param_1 + 0x10) = iVar2;
  uVar1 = iVar2 != 0 ? lbl_8327656C : 0.0f;
  *(float *)(param_1 + 0xc) = uVar1;
  *(unsigned int *)(param_1 + 0x14) = 0;
  fn_8229AC50(*(unsigned int *)(*(int *)(param_1 + 8) + 0xd4));
  fn_822A0E10(*(unsigned int *)(*(int *)(param_1 + 8) + 0xd4),0);
  fn_823985A8(*(unsigned int *)(param_1 + 8));
  return;
}

