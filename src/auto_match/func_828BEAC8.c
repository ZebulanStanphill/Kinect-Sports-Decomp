extern int fn_8265C9E0();
extern int fn_828BDDA0();
extern unsigned int lbl_820255D0;
extern unsigned int lbl_820255D8;


unsigned int * fn_828BEAC8(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x88);
  if (puVar1 != (unsigned int *)0x0) {
    fn_828BDDA0();
    *puVar1 = &lbl_820255D8;
    puVar1[0x14] = &lbl_820255D0;
    return puVar1;
  }
  return (unsigned int *)0x0;
}

