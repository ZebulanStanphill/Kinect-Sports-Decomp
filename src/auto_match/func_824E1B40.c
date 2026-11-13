extern int fn_824D4E70();
extern int fn_8265C9E0();
extern unsigned int lbl_821C112C;
extern unsigned int lbl_821C1240;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_824E1B40(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  puVar2 = (unsigned int *)fn_8265C9E0(0x990);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    fn_824D4E70(puVar2,param_2,0xb);
    puVar2[0x260] = ltcg_pool_0_0f;
    *puVar2 = &lbl_821C1240;
    puVar2[0x1a] = &lbl_821C112C;
    puVar1 = (unsigned int *)((unsigned int)(puVar2 + 0x25c) & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    *(unsigned char *)(puVar2 + 600) = 0;
    *(unsigned char *)((int)puVar2 + 0x961) = 0;
  }
  return puVar2;
}

