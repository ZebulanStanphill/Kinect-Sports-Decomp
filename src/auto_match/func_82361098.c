extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B9BC8;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_82361098(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)fn_8265C9E0(0x20);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar2[1] = 1;
    *puVar2 = &lbl_821AD588;
    puVar2[2] = 1;
    if (puVar2 + 3 != (unsigned int *)0x0) {
      puVar2[4] = param_3;
      puVar2[5] = 7;
      uVar1 = ltcg_pool_0_0f;
      puVar2[3] = &lbl_821B9BC8;
      puVar2[7] = uVar1;
      puVar2[6] = 0xffffffff;
    }
  }
  param_1[1] = puVar2;
  *param_1 = puVar2 + 3;
  return param_1;
}

