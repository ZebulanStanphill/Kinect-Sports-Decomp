extern int fn_82CE6010();
extern int fn_83082330();
extern unsigned int lbl_82002AE0;


void fn_830824B8(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  
  fn_83082330(param_1 + 0x40);
  fn_82CE6010(param_1,param_3);
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)(param_1 + 0x30U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  uVar3 = lbl_82002AE0;
  puVar1 = (unsigned int *)(in_r0 + param_1 + 0x90 & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  *(unsigned int *)(param_1 + 0xa0) = uVar3;
  return;
}

