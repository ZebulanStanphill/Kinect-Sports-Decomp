extern int fn_824B4310();
extern int fn_8265C9E0();
extern unsigned int lbl_821C030C;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_824B5018(unsigned __int64 param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)fn_8265C9E0(0x54);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    fn_824B4310(puVar2,param_1);
    uVar1 = ltcg_pool_0_0f;
    *puVar2 = &lbl_821C030C;
    puVar2[0x12] = uVar1;
    puVar2[0x13] = uVar1;
    puVar2[0x14] = uVar1;
  }
  return puVar2;
}

