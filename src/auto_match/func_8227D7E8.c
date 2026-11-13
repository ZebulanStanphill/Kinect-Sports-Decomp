extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82266D28();
extern int fn_823F2E20();
extern int fn_82520158();
extern int fn_8266EC60();
extern int fn_8266EF20();
extern int fn_8266F628();
extern int fn_8266F640();
extern int fn_82673A28();
extern int fn_82673C58();
extern unsigned int iStack_34;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


int fn_8227D7E8(int param_1)

{
  unsigned int uVar1;
  float fVar2;
  int in_r0;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  double dVar5;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_40 [8];
  unsigned char auStack_38 [4];
  int iStack_34;
  
  puVar4 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  fVar2 = ltcg_pool_0_0f;
  dVar5 = (double)ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  uVar1 = lbl_821CA460;
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x10) = uVar1;
  *(unsigned int *)(param_1 + 0x24) = 4;
  *(unsigned int *)(param_1 + 0x14) = uVar1;
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(float *)(param_1 + 0x18) = fVar2;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x38) = 0;
  puVar4 = (unsigned int *)(param_1 + 0x3c);
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned int *)(param_1 + 0x40) = 0;
  fn_82266D28(puVar4,0);
  *(float *)(param_1 + 0x48) = (float)dVar5;
  *(unsigned int *)(param_1 + 0x44) = 0;
  fn_82520158(0xffffffff821a870c,auStack_40,0);
  uVar3 = fn_8266EC60();
  uVar3 = fn_8266EF20(auStack_38,uVar3,auStack_40,0,0,0x18280143);
  fn_823F2E20(puVar4,uVar3);
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  fn_8266F640(*puVar4,1);
  fn_8266F628(*puVar4,1);
  fn_82673C58(*puVar4,0xffffffff8227db10,param_1,0);
  fn_82673A28(*puVar4,0xffffffff8227dbb0,param_1);
  return param_1;
}

