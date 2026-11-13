extern int fn_824B4310();
extern int fn_8265C9E0();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821C0570;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_824B7050(unsigned __int64 param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)fn_8265C9E0(0x74);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    fn_824B4310(puVar3,param_1);
    uVar2 = ltcg_pool_0_0f;
    puVar3[0x12] = 0;
    uVar1 = lbl_82192734;
    *puVar3 = &lbl_821C0570;
    puVar3[0x13] = uVar2;
    puVar3[0x14] = uVar2;
    puVar3[0x15] = uVar2;
    puVar3[0x16] = uVar1;
    puVar3[0x17] = uVar1;
    puVar3[0x18] = uVar2;
    puVar3[0x19] = uVar2;
    puVar3[0x1c] = uVar2;
  }
  return puVar3;
}

