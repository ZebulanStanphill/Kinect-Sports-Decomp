extern unsigned int lbl_83280B88[];
int fn_825602B8(int i)
{
  if ((&lbl_83280B88[4])[i] != 0 &&
      (i == 0 || lbl_83280B88[4] == 0 || (*(unsigned int *)(lbl_83280B88[4] + 0xa8) & 0x200) == 0))
    return 1;
  return 0;
}
