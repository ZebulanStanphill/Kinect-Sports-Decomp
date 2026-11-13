extern int fn_824B4310();
extern int fn_8265C9E0();
extern unsigned int lbl_821C03A8;


unsigned int * fn_824B5590(unsigned __int64 param_1)

{
  float uVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)fn_8265C9E0(0x50);
  if (puVar2 != 0) {
    fn_824B4310(puVar2,param_1);
    puVar2[0x12] = 0;
    uVar1 = 0.0f;
    *puVar2 = &lbl_821C03A8;
    *(float *)&puVar2[0x13] = uVar1;
    return puVar2;
  }
  return 0;
}

