extern int fn_8265C9E0();
extern int fn_8288B668();
extern int fn_8289D6D0();
extern unsigned int lbl_82197100;
extern unsigned int lbl_821AEC0C;
extern unsigned int lbl_821B665C;


unsigned int * fn_82252FF0(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0xd0);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    fn_8288B668(puVar1,param_1);
    *puVar1 = &lbl_821B665C;
    puVar1[0x14] = puVar1 + 0x13;
    puVar1[0x15] = 0;
    puVar1[0x13] = puVar1 + 0x13;
    puVar1[0x16] = (int)param_1;
    puVar1[0x1c] = 0;
    puVar1[0x12] = &lbl_821AEC0C;
    fn_8289D6D0(puVar1 + 0x1e,4);
    puVar1[0x1e] = &lbl_82197100;
  }
  return puVar1;
}

