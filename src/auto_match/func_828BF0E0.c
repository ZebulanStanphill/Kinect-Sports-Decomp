extern int fn_8265C9E0();
extern int fn_828BDDA0();
extern unsigned int lbl_820240FC;
extern unsigned int lbl_82024100;


unsigned int * fn_828BF0E0(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x80);
  if (puVar1 != (unsigned int *)0x0) {
    fn_828BDDA0();
    *puVar1 = &lbl_82024100;
    puVar1[0x14] = &lbl_820240FC;
    return puVar1;
  }
  return (unsigned int *)0x0;
}

