extern int fn_8265C9E0();
extern int fn_8288B668();
extern int fn_8289D6D0();
extern int fn_8289D7E8();
extern unsigned int lbl_82197080;
extern unsigned int lbl_82197100;
extern unsigned int lbl_82198288;
extern unsigned int lbl_821B9610;


unsigned int * fn_82257BE0(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x240);
  if (puVar1 != (unsigned int *)0x0) {
    fn_8288B668(puVar1,param_1);
    *puVar1 = &lbl_82198288;
    fn_8289D6D0(puVar1 + 0x12,0);
    puVar1[0x12] = &lbl_82197080;
    fn_8289D7E8(puVar1 + 0x27,4);
    puVar1[0x27] = &lbl_821B9610;
    fn_8289D7E8(puVar1 + 0x3c,4);
    puVar1[0x3c] = &lbl_821B9610;
    fn_8289D6D0(puVar1 + 0x51,0);
    puVar1[0x51] = &lbl_82197080;
    fn_8289D6D0(puVar1 + 0x66,0);
    puVar1[0x66] = &lbl_82197080;
    fn_8289D6D0(puVar1 + 0x7b,4);
    puVar1[0x7b] = &lbl_82197100;
    return puVar1;
  }
  return 0;
}
