extern int fn_8265C9E0();
extern int fn_828B5608();
extern int fn_828BDDA0();
extern unsigned int lbl_82025768;
extern unsigned int lbl_82025770;


unsigned int * fn_828BEC68(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x98);
  if (puVar1 != (unsigned int *)0x0) {
    fn_828BDDA0();
    *puVar1 = &lbl_82025770;
    puVar1[0x14] = &lbl_82025768;
    fn_828B5608(puVar1 + 0x20);
    *(unsigned char *)(puVar1 + 0x24) = 1;
    return puVar1;
  }
  return (unsigned int *)0x0;
}

