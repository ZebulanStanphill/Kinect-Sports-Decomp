typedef struct {
  int osfhnd;
  unsigned char osfile;
  char pad[0x48 - 5];
} ioinfo;

extern int *_errno(void);
extern unsigned long *fn_82F68278(void);
extern unsigned int lbl_8329F60C;
extern ioinfo *lbl_8329F620[];

int fn_82F85CD8(int fh)
{
  if (fh >= 0 && (unsigned)fh < lbl_8329F60C &&
      (lbl_8329F620[fh >> 5][fh & 0x1f].osfile & 1) &&
      lbl_8329F620[fh >> 5][fh & 0x1f].osfhnd != -1) {
    lbl_8329F620[fh >> 5][fh & 0x1f].osfhnd = -1;
    return 0;
  }
  *_errno() = 9;
  *fn_82F68278() = 0;
  return -1;
}
