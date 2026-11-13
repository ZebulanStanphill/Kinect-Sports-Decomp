extern int fn_8265C9E0();
extern int fn_8288B668();
extern int fn_8289D6D0();
extern int fn_8289D7E8();
extern unsigned int lbl_82197100;
extern unsigned int lbl_82197494;
extern unsigned int lbl_82197548;


unsigned int * fn_82243400(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x144);
  if (puVar1 != (unsigned int *)0x0) {
    fn_8288B668(puVar1,param_1);
    *puVar1 = &lbl_82197494;
    fn_8289D7E8(puVar1 + 0x12,0x3e);
    puVar1[0x12] = &lbl_82197548;
    fn_8289D6D0(puVar1 + 0x27,4);
    puVar1[0x27] = &lbl_82197100;
    fn_8289D6D0(puVar1 + 0x3c,4);
    puVar1[0x3c] = &lbl_82197100;
    return puVar1;
  }
  return 0;
}

