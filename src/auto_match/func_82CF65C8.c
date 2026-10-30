void fn_82CF65C8(unsigned char *out, float *m)
{
  int i;
  float f;
  for (i = 0; i < 12; i++) {
    if (i != 3 && i != 11) {
      f = m[i];
      if ((*(unsigned int *)&f & 0x7f800000) == 0x7f800000) {
        *out = 0;
        return;
      }
    }
  }
  *out = 1;
}
