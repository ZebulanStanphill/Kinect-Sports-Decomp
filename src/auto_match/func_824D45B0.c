extern int fn_824DA9F8();
extern int fn_8265C9E0();
extern unsigned int lbl_821955D4;
extern unsigned int lbl_821C0F04;
extern unsigned int ltcg_pool_0_0f;


void fn_824D45B0(int param_1,__int64 param_2)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  uVar2 = fn_8265C9E0(0x430);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_824DA9F8(uVar2,param_1,param_2 + 0x48);
  }
  *(unsigned int *)(param_1 + 0xf0) = uVar3;
  puVar4 = (unsigned int *)fn_8265C9E0(0x80);
  puVar5 = (unsigned int *)0x0;
  if (puVar4 != (unsigned int *)0x0) {
    puVar4[0x18] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x1e] = 0;
    puVar4[4] = 0;
    puVar5 = puVar4 + 8;
    *puVar4 = &lbl_821C0F04;
    uVar3 = lbl_821955D4;
    puVar4[0x17] = lbl_821955D4;
    lVar6 = 2;
    do {
      puVar1 = (unsigned int *)(in_r0 + (int)puVar5 & 0xfffffff0);
      *puVar1 = in_register_000104d0;
      puVar1[1] = in_register_000104d4;
      puVar1[2] = in_register_000104d8;
      puVar1[3] = in_vr77;
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    puVar4[0x17] = uVar3;
    puVar4[0x15] = 1;
    puVar4[0x16] = 1;
    uVar3 = ltcg_pool_0_0f;
    puVar4[0x1c] = 1;
    puVar4[0x19] = uVar3;
    puVar4[0x1d] = 1;
    puVar5 = puVar4;
  }
  *(unsigned int **)(param_1 + 0xf4) = puVar5;
  return;
}

