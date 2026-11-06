typedef struct Buf_8223D440 {
  int pad0[4];
  unsigned int *gbeg;
  int pad1[3];
  int *gnext;
  int pad2[3];
  int *gcount;
  int pad3[3];
  unsigned int mode;
} Buf_8223D440;
int fn_8223D440(Buf_8223D440 *b, int c)
{
  int p = *b->gnext;
  int r;
  if (p != 0 && (unsigned int)p > *b->gbeg) {
    if (c == -1 || (char)c == *(char *)(p - 1) || (b->mode & 2) == 0) {
      *b->gcount = *b->gcount + 1;
      *b->gnext = *b->gnext - 1;
      if (c != -1) {
        *(char *)*b->gnext = (char)c;
        r = c;
      } else {
        r = 0;
      }
      return r;
    }
  }
  return -1;
}
