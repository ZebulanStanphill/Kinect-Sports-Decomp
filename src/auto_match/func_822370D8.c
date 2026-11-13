extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_828E5538();


void fn_822370D8(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  double dVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  float fStack_30;
  float fStack_2c;
  
  uVar4 = *(unsigned int *)(param_1 + 0xc);
  puVar1 = (unsigned int *)((int)&fStack_30 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  dVar3 = (double)fn_828E5538(param_2,*(unsigned int *)(param_1 + 8),uVar4);
  fStack_30 = (float)dVar3;
  dVar3 = (double)fn_828E5538(param_2,*(unsigned int *)(param_1 + 0x10),
                                    *(unsigned int *)(param_1 + 0x14));
  fStack_2c = (float)dVar3;
  fn_828E5538(param_2,*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0x1c));
  if (param_3 != 0) {
    puVar1 = (unsigned int *)((int)&fStack_30 + in_r0 & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
  }
  return;
}

