extern int fn_82A1EFC0();
extern unsigned int lbl_82192734;
extern unsigned int lbl_82195644;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


void fn_826279F0(int param_1)

{
  float fVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int in_r0;
  double dVar5;
  double dVar6;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  uVar4 = ltcg_pool_0_0f;
  uVar3 = lbl_82195644;
  *(unsigned int *)(param_1 + 0xa8) = lbl_82195644;
  *(unsigned int *)(param_1 + 0xac) = uVar3;
  *(unsigned int *)(param_1 + 0xb0) = uVar3;
  *(unsigned int *)(param_1 + 0xb4) = uVar3;
  *(unsigned int *)(param_1 + 0xb8) = uVar4;
  *(unsigned int *)(param_1 + 0xbc) = uVar3;
  *(unsigned int *)(param_1 + 0xc0) = uVar3;
  *(unsigned int *)(param_1 + 0xc4) = uVar3;
  *(unsigned int *)(param_1 + 200) = uVar3;
  *(unsigned int *)(param_1 + 0xcc) = uVar4;
  *(unsigned int *)(param_1 + 0xd0) = uVar4;
  *(unsigned int *)(param_1 + 0xd4) = uVar4;
  *(unsigned int *)(param_1 + 0xd8) = uVar4;
  *(unsigned int *)(param_1 + 0xdc) = uVar4;
  *(unsigned int *)(param_1 + 0xe0) = uVar4;
  *(unsigned int *)(param_1 + 0xa4) = 0;
  uVar3 = lbl_82192734;
  *(unsigned short *)(param_1 + 0xa0) = 0;
  fVar1 = lbl_821CA460;
  dVar6 = (double)lbl_821CA460;
  *(unsigned int *)(param_1 + 0xec) = uVar4;
  *(float *)(param_1 + 0xf0) = fVar1;
  *(unsigned int *)(param_1 + 0xfc) = uVar3;
  *(unsigned int *)(param_1 + 0x100) = uVar3;
  *(unsigned int *)(param_1 + 0x104) = uVar3;
  *(unsigned int *)(param_1 + 0x184) = uVar4;
  *(unsigned int *)(param_1 + 0x180) = 0;
  *(unsigned int *)(param_1 + 0x170) = uVar4;
  *(unsigned int *)(param_1 + 0x174) = uVar4;
  *(unsigned int *)(param_1 + 0x178) = uVar4;
  *(unsigned int *)(param_1 + 0x17c) = uVar4;
  *(unsigned int *)(param_1 + 0x160) = 0;
  puVar2 = (unsigned int *)(in_r0 + param_1 + 0x110 & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  puVar2 = (unsigned int *)(param_1 + 0x150U & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  puVar2 = (unsigned int *)(param_1 + 0x120U & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  puVar2 = (unsigned int *)(param_1 + 0x130U & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  puVar2 = (unsigned int *)(param_1 + 0x140U & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  *(unsigned int *)(param_1 + 0x198) = 0;
  *(unsigned int *)(param_1 + 0x188) = uVar4;
  *(unsigned int *)(param_1 + 0x18c) = uVar4;
  *(unsigned int *)(param_1 + 400) = uVar4;
  *(unsigned int *)(param_1 + 0x194) = uVar4;
  *(unsigned int *)(param_1 + 0x1ac) = 0;
  *(unsigned int *)(param_1 + 0x19c) = uVar4;
  *(unsigned int *)(param_1 + 0x1a0) = uVar4;
  *(unsigned int *)(param_1 + 0x1a4) = uVar4;
  *(unsigned int *)(param_1 + 0x1a8) = uVar4;
  *(unsigned int *)(param_1 + 0x1c0) = 0;
  *(unsigned int *)(param_1 + 0x1b0) = uVar4;
  *(unsigned int *)(param_1 + 0x1b4) = uVar4;
  *(unsigned int *)(param_1 + 0x1b8) = uVar4;
  *(unsigned int *)(param_1 + 0x1bc) = uVar4;
  fn_82A1EFC0(param_1,0,0xa0);
  *(float *)(param_1 + 0x74) = (float)dVar6;
  *(float *)(param_1 + 0x78) = (float)dVar6;
  *(unsigned char *)(param_1 + 0x95) = 1;
  *(float *)(param_1 + 0x7c) = (float)dVar6;
  *(unsigned int *)(param_1 + 0x8c) = 1;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  dVar5 = (double)*(float *)(*(int *)(param_1 + 0x1c4) + 0x160);
  fVar1 = (float)(dVar6 - dVar5);
  *(float *)(param_1 + 0xf4) =
       (((float)(dVar5 + dVar6) - fVar1) *
        (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar6) + fVar1) *
       *(float *)(*(int *)(param_1 + 0x1c4) + 0x15c);
  return;
}

