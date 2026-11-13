extern int fn_82340138();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82192480;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_823369B0(unsigned int *param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  uVar4 = ltcg_pool_0_0f;
  uVar3 = lbl_82192480;
  uVar2 = lbl_8218E8E8;
  param_1[4] = 0;
  *param_1 = uVar4;
  param_1[5] = 0;
  param_1[1] = uVar4;
  param_1[6] = 0;
  param_1[0x12] = uVar3;
  param_1[7] = 0;
  param_1[0x13] = uVar2;
  param_1[8] = 0;
  param_1[100] = uVar4;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 0x14) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(unsigned char *)(param_1 + 0x11) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 1;
  param_1[99] = 0;
  fn_82340138(param_1 + 0x65);
  param_1[0x66] = 0;
  param_1[0xc] = *(unsigned int *)(param_3 + 0x4c);
  param_1[0xd] = *(unsigned int *)(param_3 + 0x50);
  param_1[0xe] = *(unsigned int *)(param_3 + 0x54);
  return param_1;
}

