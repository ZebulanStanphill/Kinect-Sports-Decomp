extern unsigned int *auStack_20;
extern int fn_82517D50();
extern int fn_825AC4A0();
extern int fn_825ACAC8();
extern unsigned int lbl_82196750;
extern unsigned int lbl_821C80A0;
extern unsigned int lbl_821C8110;


unsigned int * fn_825AA6B0(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_20 [8];
  
  fn_82517D50(param_1,param_2,4);
  *param_1 = &lbl_821C80A0;
  param_1[0x1a] = &lbl_821C8110;
  param_1[0x20] = 0;
  puVar1 = (unsigned int *)((int)param_1 + in_r0 + 0x90 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (unsigned int *)((unsigned int)(&lbl_82196750 + in_r0) & 0xfffffff0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(unsigned __int64 *)(param_1 + 0x34) = 0;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 0x28) & 0xfffffff0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 0x2c) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 0x30) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  fn_825ACAC8(param_1 + 0x39);
  fn_825ACAC8(param_1 + 0x3f,auStack_20);
  *(unsigned char *)(param_1 + 0x38) = 0;
  *(unsigned char *)(param_1 + 0x45) = 1;
  param_1[0x46] = 0;
  *(unsigned char *)(param_1 + 0x47) = 0;
  *(unsigned char *)(param_1 + 0x49) = 0;
  *(unsigned __int64 *)(param_1 + 0x4a) = 0;
  fn_825AC4A0(param_1);
  return param_1;
}

