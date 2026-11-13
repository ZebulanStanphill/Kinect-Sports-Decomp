extern int fn_822C52C0();
extern unsigned int ltcg_pool_0_0f;


void fn_822C4718(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,int param_6,unsigned int *param_7)

{
  int *piVar1;
  int (**pcVar2)();
  unsigned int *puVar3;
  int in_r0;
  unsigned __int64 uVar4;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  puVar3 = (unsigned int *)(in_r0 + param_6 & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  piVar1 = *(int **)(*(int *)(*(int *)(param_2 + 0x14) + 0x8c0) + 0x1b4);
  pcVar2 = *(int (***)())(*piVar1 + 0x14);
  *param_7 = ltcg_pool_0_0f;
  uVar4 = (*pcVar2)(piVar1,param_4);
  fn_822C52C0(param_1,param_3,uVar4);
  return;
}

