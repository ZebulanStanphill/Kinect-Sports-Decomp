extern void *fn_8265C9E0(unsigned int);
extern int fn_8288B668(void *, void *);
extern int fn_8289D6D0(void *, int);
extern unsigned int lbl_82197100;
extern unsigned int lbl_82196924;

void *fn_82517768(void *param_1)
{
  unsigned int *puVar1;

  puVar1 = (unsigned int *)fn_8265C9E0(0x9c);
  if (puVar1 != 0) {
    fn_8288B668(puVar1, param_1);
    *puVar1 = (unsigned int)&lbl_82196924;
    fn_8289D6D0(puVar1 + 0x12, 8);
    puVar1[0x12] = (unsigned int)&lbl_82197100;
    return puVar1;
  }
  return 0;
}
