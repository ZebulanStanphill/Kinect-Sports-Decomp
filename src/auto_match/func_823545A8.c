extern int fn_825603C8();
extern int fn_82566CA8();
extern int fn_82566E58();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83297910;
extern unsigned int lbl_83297920;


void fn_823545A8(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int in_r0;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    fn_825603C8(0,param_1 + 0xb0,1);
    *(unsigned int *)(param_1 + 0xa0) = 1;
  }
  if (*(int *)(param_1 + 0x294) != 0) {
    fn_82566E58(*(int *)(param_1 + 0x294),*(unsigned int *)(*(int *)(param_1 + 0x14) + 0x844));
    *(unsigned int *)(param_1 + 0x294) = 0;
  }
  if (*(int *)(param_1 + 0x234) == 0) {
    puVar1 = (unsigned int *)(param_1 + 0x240U & 0xfffffff0);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    *(unsigned int *)(param_1 + 0x180) = 1;
    puVar1 = (unsigned int *)(param_1 + 0xc0U & 0xfffffff0);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    uVar3 = lbl_83297920;
    uVar2 = lbl_83297920 & 1;
    *(unsigned int *)(param_1 + 0x100) = *(unsigned int *)(param_1 + 0x250);
    *(unsigned int *)(param_1 + 0x104) = *(unsigned int *)(param_1 + 0x254);
    *(unsigned int *)(param_1 + 0x108) = *(unsigned int *)(param_1 + 600);
    *(unsigned int *)(param_1 + 0x180) = 1;
    if (uVar2 == 0) {
      lbl_83297920 = uVar3 | 1;
      puVar1 = (unsigned int *)((int)&lbl_83297910 + in_r0 & 0xfffffff0);
      *puVar1 = in_register_000104d0;
      puVar1[1] = in_register_000104d4;
      puVar1[2] = in_register_000104d8;
      puVar1[3] = in_vr77;
    }
    else {
      puVar1 = (unsigned int *)((int)&lbl_83297910 + in_r0 & 0xfffffff0);
      in_register_000104d0 = *puVar1;
      in_register_000104d4 = puVar1[1];
      in_register_000104d8 = puVar1[2];
      in_vr77 = puVar1[3];
    }
    *(unsigned int *)(param_1 + 0x180) = 1;
    puVar1 = (unsigned int *)(param_1 + 0xd0U & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
  }
  else {
    uVar4 = fn_82566CA8((double)ltcg_pool_0_0f,*(unsigned int *)(*(int *)(param_1 + 0x14) + 0x844)
                              ,param_1 + 0x234,0,param_1 + 0xb0,0,0,*(int *)(param_1 + 0x14),0);
    *(unsigned int *)(param_1 + 0x294) = uVar4;
  }
  return;
}

