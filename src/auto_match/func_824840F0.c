extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83296AE0;


void fn_824840F0(unsigned __int64 param_1,int param_2,int param_3,unsigned int *param_4,
                  unsigned int *param_5)

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
  
  uVar5 = in_vr77;
  uVar4 = in_register_000104d8;
  uVar3 = in_register_000104d4;
  uVar2 = in_register_000104d0;
  if (lbl_83296AE0 != 0) {
    puVar1 = (unsigned int *)(lbl_83296AE0 + 0x10U & 0xfffffff0);
    uVar5 = puVar1[3];
    uVar4 = puVar1[2];
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
  }
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  if (lbl_83296AE0 != 0) {
    puVar1 = (unsigned int *)(lbl_83296AE0 + 0x30U & 0xfffffff0);
    in_register_000104d0 = *puVar1;
    in_register_000104d4 = puVar1[1];
    in_register_000104d8 = puVar1[2];
    in_vr77 = puVar1[3];
  }
  puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  uVar5 = ltcg_pool_0_0f;
  if (lbl_83296AE0 != 0) {
    uVar5 = *(unsigned int *)(lbl_83296AE0 + 0x60);
  }
  *param_4 = uVar5;
  *param_5 = lbl_821CA460;
  return;
}

