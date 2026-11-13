extern int fn_824B4310();
extern int fn_8265C9E0();
extern unsigned int lbl_821C027C;
extern unsigned int lbl_821CA1A0[3];


unsigned int * fn_824B4D00(unsigned __int64 param_1)
{
  float uVar1;
  unsigned int *puVar2;

  puVar2 = (unsigned int *)fn_8265C9E0(0x58);
  if (puVar2 != (unsigned int *)0x0) {
    fn_824B4310(puVar2,param_1);
    uVar1 = 0.0f;
    *puVar2 = &lbl_821C027C;
    *(float *)&puVar2[0x12] = uVar1;
    puVar2[0x13] = lbl_821CA1A0[0];
    puVar2[0x14] = lbl_821CA1A0[1];
    puVar2[0x15] = lbl_821CA1A0[2];
    return puVar2;
  }
  return (unsigned int *)0x0;
}
