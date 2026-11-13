extern char *fn_825117D8(void);
extern char *lbl_83297800;

int fn_82594868(unsigned int *param_1)
{
  char *iVar2;

  if (param_1[0x20] != 0) {
    return 1;
  }
  iVar2 = lbl_83297800;
  if (lbl_83297800 == 0) {
    iVar2 = fn_825117D8();
  }
  if (iVar2[9] != 0 && ((unsigned char (*)(unsigned *))(*(int *)(*param_1 + 0x40)))(param_1) != 0) {
    return 1;
  }
  return 0;
}
