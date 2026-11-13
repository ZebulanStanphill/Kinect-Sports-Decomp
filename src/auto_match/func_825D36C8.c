extern int fn_825D4FE8();
extern unsigned int lbl_821C9828;
extern unsigned int ltcg_pool_0_0f;


void fn_825D36C8(unsigned __int64 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,unsigned __int64 param_8,unsigned __int64 param_9,unsigned int param_10,
                  int param_11,unsigned int param_12,unsigned int param_13)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int in_r0;
  unsigned int *puVar3;
  double extraout_f1;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned int in_stack_0000007c;
  unsigned int in_stack_00000084;
  
  puVar3 = (unsigned int *)fn_825D4FE8(param_8,param_9,(-((param_10 & 1) != 0) & 0xeU) + 0xe);
  *puVar3 = &lbl_821C9828;
  uVar2 = ltcg_pool_0_0f;
  puVar1 = (unsigned int *)(in_r0 + param_11 & 0xfffffff0);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar3[0x30] = param_10;
  puVar3[0x36] = (float)extraout_f1;
  puVar3[0x3f] = 0;
  puVar3[0x3a] = (float)param_2;
  puVar3[0x33] = in_stack_0000007c << 0x18 | in_stack_0000007c >> 8;
  puVar3[0x3c] = (float)param_2;
  puVar3[0x34] = in_stack_00000084 << 0x18 | in_stack_00000084 >> 8;
  puVar3[0x3b] = (float)param_3;
  puVar3[0x40] = in_stack_0000007c & 0xff;
  puVar3[0x37] = (float)param_4;
  puVar3[0x41] = 0;
  puVar3[0x38] = (float)(param_4 * param_5);
  puVar3[0x31] = param_12;
  puVar3[0x39] = uVar2;
  puVar3[0x32] = param_13;
  puVar3[0x35] = (float)param_6;
  puVar3[0x3d] = (float)param_7;
  puVar3[0x3e] = uVar2;
  puVar1 = (unsigned int *)((unsigned int)(puVar3 + 8) & 0xfffffff0);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  puVar1 = (unsigned int *)((unsigned int)(puVar3 + 0x14) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  if ((param_10 & 2) != 0) {
    puVar3[0x10] = puVar3[0x10] | 7;
  }
  return;
}

