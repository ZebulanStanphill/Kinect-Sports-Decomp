extern int fn_82A1EFC0(void *, int, int);
extern void *fn_82A5F3B8(void *, char *);
extern unsigned int lbl_820E870C;
extern char lbl_83172048[];

void *fn_82BD8FE0(unsigned int *param_1)
{
  fn_82A5F3B8(param_1, lbl_83172048);
  param_1[8] = 0;
  *param_1 = (unsigned int)&lbl_820E870C;
  fn_82A1EFC0(param_1 + 9, 0, 0x810);
  fn_82A1EFC0((char *)param_1 + 0x834, 0, 0x10);
  return param_1;
}
