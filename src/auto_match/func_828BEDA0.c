extern int fn_8265C9E0();
extern int fn_828BDDA0();
extern unsigned int lbl_820257F0;
extern unsigned int lbl_820257F8;


unsigned int * fn_828BEDA0(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0xb0);
  if (puVar1 != (unsigned int *)0x0) {
    fn_828BDDA0();
    *puVar1 = &lbl_820257F8;
    puVar1[0x14] = &lbl_820257F0;
    return puVar1;
  }
  return (unsigned int *)0x0;
}

