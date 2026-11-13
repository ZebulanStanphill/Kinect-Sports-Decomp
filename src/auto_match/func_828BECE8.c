extern int fn_8265C9E0();
extern int fn_828BDDA0();
extern unsigned int lbl_82025878;
extern unsigned int lbl_82025880;


unsigned int * fn_828BECE8(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x90);
  if (puVar1 != (unsigned int *)0x0) {
    fn_828BDDA0();
    *puVar1 = &lbl_82025880;
    puVar1[0x14] = &lbl_82025878;
    return puVar1;
  }
  return (unsigned int *)0x0;
}

