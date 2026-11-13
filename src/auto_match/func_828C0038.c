extern unsigned int lbl_83159F2C;
extern unsigned int lbl_83159F30;
extern unsigned int lbl_83159FD8;


double fn_828C0038(int param_1)

{
  if ((&lbl_83159F30)[param_1 * 0x10] != '\0') {
    return (double)*(float *)(&lbl_83159F2C + param_1 * 0x10);
  }
  return (double)(float)((double)lbl_83159FD8 * (double)*(float *)(&lbl_83159F2C + param_1 * 0x10));
}

