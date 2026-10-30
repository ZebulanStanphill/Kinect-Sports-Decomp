void fn_828033B8(unsigned int *w1, unsigned int *w2, unsigned int *w3, unsigned int *w4,
                 unsigned int *b1, unsigned int *b2, unsigned int *b3, unsigned int *b4,
                 unsigned int n)
{
  unsigned int v;

  v = *b1 + n;
  *b1 = v & 0x1f;
  *w1 = ((v >> 3) & 0x1ffffffc) + *w1;
  v = *b2 + n;
  *b2 = v & 0x1f;
  *w2 = ((v >> 3) & 0x1ffffffc) + *w2;
  v = *b3 + n;
  *b3 = v & 0x1f;
  *w3 = *w3 + ((v >> 3) & 0x1ffffffc);
  v = *b4 + n;
  *b4 = v & 0x1f;
  *w4 = *w4 + ((v >> 3) & 0x1ffffffc);
}
