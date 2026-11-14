typedef struct { int handle; unsigned char flags; char pad[0x48 - 5]; } FileInfo_82F85D70;
extern FileInfo_82F85D70 *lbl_8329F620[];
extern unsigned int lbl_8329F60C;
extern unsigned long *fn_82F68278(void);
extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);

int fn_82F85D70(int fh)
{
  int ok;
  if (fh == -2) {
    *fn_82F68278() = 0;
    *_errno() = 9;
    return -1;
  }
  ok = fh >= 0 && (unsigned int)fh < lbl_8329F60C;
  if (!ok) {
    *fn_82F68278() = 0;
    *_errno() = 9;
    _invalid_parameter_noinfo();
    return -1;
  }
  ok = (lbl_8329F620[fh >> 5][fh & 0x1f].flags & 1) != 0;
  if (!ok) {
    *fn_82F68278() = 0;
    *_errno() = 9;
    _invalid_parameter_noinfo();
    return -1;
  }
  return lbl_8329F620[fh >> 5][fh & 0x1f].handle;
}
