extern int fn_8265C9E0();
extern int fn_828BDDA0();
extern unsigned int lbl_82024070;
extern unsigned int lbl_82024078;


unsigned int * fn_828BF070(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x80);
  if (puVar1 != (unsigned int *)0x0) {
    fn_828BDDA0();
    *puVar1 = &lbl_82024078;
    puVar1[0x14] = &lbl_82024070;
    return puVar1;
  }
  return (unsigned int *)0x0;
}

