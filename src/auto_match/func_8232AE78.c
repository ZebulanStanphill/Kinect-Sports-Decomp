extern int fn_822315A0();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_821B0600;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_8232AE78(unsigned int *param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  *param_1 = 0;
  param_1[1] = ltcg_pool_0_0f;
  param_1[2] = 1;
  fn_82F68CC0(param_1 + 3,param_2,0x104);
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  puVar1 = (unsigned int *)fn_8265C9E0(0x10);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    *puVar1 = &lbl_821B0600;
    puVar1[1] = 1;
    puVar1[2] = 1;
    puVar1[3] = 0;
  }
  if (param_1[0x45] != 0) {
    fn_822315A0();
  }
  param_1[0x45] = puVar1;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  puVar1 = (unsigned int *)fn_8265C9E0(0x10);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    *puVar1 = &lbl_821B0600;
    puVar1[1] = 1;
    puVar1[2] = 1;
    puVar1[3] = 0;
  }
  if (param_1[0x47] != 0) {
    fn_822315A0();
  }
  param_1[0x47] = puVar1;
  param_1[0x46] = 0;
  puVar3 = param_1 + 0x52;
  param_1[0x48] = 0;
  param_1[0x50] = 0;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 0x4c) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  if (*(int *)(param_3 + 0x10) == 0) {
    param_1[0x56] = 0;
  }
  else {
    if (*(int *)(param_3 + 0x10) != param_3) {
      puVar3 = (unsigned int *)0x0;
    }
    uVar2 = (**(int (***)())**(unsigned int **)(param_3 + 0x10))(*(unsigned int **)(param_3 + 0x10),puVar3);
    param_1[0x56] = uVar2;
  }
  param_1[0x58] = 0;
  return param_1;
}

