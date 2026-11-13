extern int fn_8265C9E0();
extern int fn_8288B668();
extern int fn_8289D6D0();
extern int fn_8289D7E8();
extern unsigned int lbl_82196CE0;
extern unsigned int lbl_82197080;
extern unsigned int lbl_82197DE8;


unsigned int * fn_8224F0B0(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x144);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    fn_8288B668(puVar1,param_1);
    *puVar1 = &lbl_82197DE8;
    fn_8289D7E8(puVar1 + 0x12,8);
    puVar1[0x12] = &lbl_82196CE0;
    fn_8289D6D0(puVar1 + 0x27,2);
    puVar1[0x27] = &lbl_82197080;
    fn_8289D6D0(puVar1 + 0x3c,0);
    puVar1[0x3c] = &lbl_82197080;
  }
  return puVar1;
}

