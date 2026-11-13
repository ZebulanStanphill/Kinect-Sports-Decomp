extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821B9BC8;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_82454A88(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  puVar2 = (unsigned int *)fn_8265C9E0(0x40);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar2[1] = 1;
    *puVar2 = &lbl_821A8D8C;
    puVar2[2] = 1;
    if (puVar2 + 4 != (unsigned int *)0x0) {
      puVar2[5] = param_3;
      puVar2[0xc] = ltcg_pool_0_0f;
      puVar2[4] = &lbl_821B9BC8;
      puVar1 = (unsigned int *)((unsigned int)(puVar2 + 8) & 0xfffffff0);
      *puVar1 = in_register_000104d0;
      puVar1[1] = in_register_000104d4;
      puVar1[2] = in_register_000104d8;
      puVar1[3] = in_vr77;
      puVar2[6] = 3;
      puVar2[7] = 0;
      *(unsigned char *)(puVar2 + 0xd) = 0;
    }
  }
  param_1[1] = puVar2;
  *param_1 = puVar2 + 4;
  return param_1;
}

