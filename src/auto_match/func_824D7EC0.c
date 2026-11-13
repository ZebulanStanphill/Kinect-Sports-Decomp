extern int fn_824CD030();
extern unsigned int lbl_821955D4;
extern unsigned int ltcg_pool_0_0f;


void fn_824D7EC0(int param_1,int param_2)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  double dVar5;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  dVar5 = (double)ltcg_pool_0_0f;
  *(float *)(param_1 + 0x14) = ltcg_pool_0_0f;
  iVar2 = fn_824CD030(param_2);
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_2 + 0xf4);
    iVar3 = iVar2 + 0x20;
    *(unsigned int *)(iVar2 + 0x10) = 0;
    lVar4 = 2;
    do {
      puVar1 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
      *puVar1 = in_register_000104d0;
      puVar1[1] = in_register_000104d4;
      puVar1[2] = in_register_000104d8;
      puVar1[3] = in_vr77;
      iVar3 = iVar3 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    *(float *)(iVar2 + 100) = (float)dVar5;
    *(unsigned int *)(iVar2 + 0x54) = 1;
    *(unsigned int *)(iVar2 + 0x58) = 1;
    *(unsigned int *)(iVar2 + 0x5c) = lbl_821955D4;
  }
  return;
}

