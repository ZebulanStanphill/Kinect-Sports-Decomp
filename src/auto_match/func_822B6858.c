extern int fn_822B7480();
extern int fn_822B8768();
extern int fn_822C6880();
extern int fn_825613E0();
extern unsigned int lbl_82196750;


void fn_822B6858(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int in_register_000104d0;
  unsigned int uVar6;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  fn_822B8768(*(unsigned int *)(param_1 + 0x118));
  (**(int (***)())(**(int **)(param_1 + 0x114) + 4))();
  (**(int (***)())(**(int **)(param_1 + 0x110) + 0xc))();
  fn_822C6880(param_1 + 0xc0);
  uVar3 = in_vr77;
  uVar4 = in_register_000104d8;
  uVar5 = in_register_000104d4;
  uVar6 = in_register_000104d0;
  fn_825613E0(-(double)*(float *)(param_1 + 0x100),(double)*(float *)(param_1 + 0x100));
  puVar1 = (unsigned int *)(in_r0 + param_1 + 0xc0 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (unsigned int *)(param_1 + 0xa0U & 0xfffffff0);
  *puVar1 = uVar6;
  puVar1[1] = uVar5;
  puVar1[2] = uVar4;
  puVar1[3] = uVar3;
  puVar1 = (unsigned int *)((unsigned int)(&lbl_82196750 + in_r0) & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)(param_1 + 0xb0U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  fn_822B7480(param_1);
  return;
}

