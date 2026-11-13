#define NAN(x) ((x) != (x))
extern int fn_8253C548();
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int stack0x00000020;


void fn_824FE498(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int in_r0;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  float in_stack_00000024;
  
  fVar2 = *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0x8bc);
  fVar3 = *(float *)(param_1 + 0xa0) * *(float *)(param_1 + 0x8bc);
  fVar1 = *(float *)(param_1 + 0xb88);
  puVar4 = (unsigned int *)(param_1 + 0xbd0U & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  fVar8 = ltcg_pool_0_0f;
  puVar4 = (unsigned int *)(param_1 + 0xc30U & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  *(unsigned char *)(param_1 + 0xb8c) = 0;
  fVar7 = fVar1 + lbl_8218EC10;
  fVar6 = fVar3 - fVar2;
  puVar4 = (unsigned int *)((unsigned int)(&stack0x00000020 + in_r0) & 0xfffffff0);
  *puVar4 = in_register_00010010;
  puVar4[1] = in_register_00010014;
  puVar4[2] = in_register_00010018;
  puVar4[3] = in_vr1;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar6 < fVar8) << 2) | (unsigned int)(NAN(fVar6) || NAN(fVar8)) << 2)) < 0.0)
  {
    fVar3 = fVar2;
  }
  fVar3 = fVar3 * *(float *)(param_1 + 0x280);
  if (in_stack_00000024 - fVar3 < fVar7) {
    in_stack_00000024 = fVar1 + fVar3;
    *(unsigned char *)(param_1 + 0xb8c) = 1;
  }
  puVar4 = (unsigned int *)((unsigned int)(&stack0x00000020 + in_r0) & 0xfffffff0);
  uVar9 = puVar4[1];
  uVar10 = puVar4[2];
  uVar11 = puVar4[3];
  puVar5 = (unsigned int *)(param_1 + 0xbc0U & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar9;
  puVar5[2] = uVar10;
  puVar5[3] = uVar11;
  fn_8253C548(param_1,&stack0x00000020,0);
  return;
}

