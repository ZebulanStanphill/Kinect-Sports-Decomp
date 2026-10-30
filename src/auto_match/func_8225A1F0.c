extern void *fn_8265C9E0(unsigned int);
extern int fn_82232B50(void *, void *);
extern int fn_8289D7E8(void *, int);
extern unsigned int lbl_82198348;
extern unsigned int lbl_821983A0;

void *fn_8225A1F0(void *param_1)
{
  unsigned int *puVar1;

  puVar1 = (unsigned int *)fn_8265C9E0(0xa20);
  if (puVar1 != 0) {
    fn_82232B50(puVar1, param_1);
    *puVar1 = (unsigned int)&lbl_821983A0;
    fn_8289D7E8(puVar1 + 0x273, 5);
    puVar1[0x273] = (unsigned int)&lbl_82198348;
    return puVar1;
  }
  return 0;
}
