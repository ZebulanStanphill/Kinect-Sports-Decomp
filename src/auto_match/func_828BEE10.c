extern int fn_8265C9E0();
extern int fn_828BDDA0();
extern unsigned int lbl_82025900;
extern unsigned int lbl_82025908;


unsigned int * fn_828BEE10(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x98);
  if (puVar1 != (unsigned int *)0x0) {
    fn_828BDDA0();
    *puVar1 = &lbl_82025908;
    puVar1[0x14] = &lbl_82025900;
    puVar1[0x20] = 2;
    return puVar1;
  }
  return (unsigned int *)0x0;
}

