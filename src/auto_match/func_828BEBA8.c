extern int fn_8265C9E0();
extern int fn_828B5608();
extern int fn_828BDDA0();
extern unsigned int lbl_820256E0;
extern unsigned int lbl_820256E8;


unsigned int * fn_828BEBA8(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x90);
  if (puVar1 != (unsigned int *)0x0) {
    fn_828BDDA0();
    *puVar1 = &lbl_820256E8;
    puVar1[0x14] = &lbl_820256E0;
    fn_828B5608(puVar1 + 0x21);
    return puVar1;
  }
  return (unsigned int *)0x0;
}

