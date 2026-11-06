extern unsigned int lbl_83211328[];

void fn_82859808(void (**self)(void *, unsigned int))
{
  int i;
  /* the entry count is the 16-bit value 8 bytes before the base pointer */
  unsigned short *count = (unsigned short *)lbl_83211328 - 4;

  for (i = 0; i < *count; i++) {
    (*self)(self, i * 0xd8 + lbl_83211328[0]);
  }
}
