extern int fn_8265C9E0();
extern int fn_828BDDA0();
extern unsigned int lbl_82024B80;
extern unsigned int lbl_82024B88;


unsigned int * fn_828BEA58(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x80);
  if (puVar1 != (unsigned int *)0x0) {
    fn_828BDDA0();
    *puVar1 = &lbl_82024B88;
    puVar1[0x14] = &lbl_82024B80;
    return puVar1;
  }
  return (unsigned int *)0x0;
}

