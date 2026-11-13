extern int fn_82A21458();
extern unsigned int lbl_83219B94;
extern unsigned int lbl_83219CB8;


unsigned int * fn_82A226B0(void)

{
  unsigned int *puVar1;
  
  RtlEnterCriticalSection(lbl_83219B94);
  puVar1 = (unsigned int *)0x0;
  if (lbl_83219CB8 != 0) {
    for (puVar1 = *(unsigned int **)(lbl_83219B94 + 0x2c);
        puVar1 != (unsigned int *)(lbl_83219B94 + 0x2c); puVar1 = (unsigned int *)*puVar1) {
      if ((puVar1[7] & 1) != 0) {
        puVar1[7] = puVar1[7] & 0xfffffffe;
        lbl_83219CB8 = lbl_83219CB8 + -1;
        fn_82A21458(lbl_83219B94);
        goto LAB_82a22738;
      }
    }
    lbl_83219CB8 = 0;
    puVar1 = (unsigned int *)0x0;
  }
LAB_82a22738:
  RtlLeaveCriticalSection(lbl_83219B94);
  return puVar1;
}

