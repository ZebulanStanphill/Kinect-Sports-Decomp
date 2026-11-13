extern int fn_8265C9E0();
extern int fn_828BDDA0();
extern unsigned int lbl_82025658;
extern unsigned int lbl_82025660;


unsigned int * fn_828BEB38(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x90);
  if (puVar1 != (unsigned int *)0x0) {
    fn_828BDDA0();
    *puVar1 = &lbl_82025660;
    puVar1[0x14] = &lbl_82025658;
    return puVar1;
  }
  return (unsigned int *)0x0;
}

