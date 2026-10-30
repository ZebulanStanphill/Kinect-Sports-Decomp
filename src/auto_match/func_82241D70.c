extern void *fn_8265C9E0(unsigned int);
extern int fn_822337D0(void *, void *);
extern int fn_8289D7E8(void *, int);
extern unsigned int lbl_82197398;
extern unsigned int lbl_821973F0;

void *fn_82241D70(void *param_1)
{
  unsigned int *puVar1;

  puVar1 = (unsigned int *)fn_8265C9E0(0x240);
  if (puVar1 != 0) {
    fn_822337D0(puVar1, param_1);
    *puVar1 = (unsigned int)&lbl_821973F0;
    fn_8289D7E8(puVar1 + 0x7b, 1);
    puVar1[0x7b] = (unsigned int)&lbl_82197398;
    return puVar1;
  }
  return 0;
}
