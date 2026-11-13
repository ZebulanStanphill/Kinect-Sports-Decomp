typedef struct { char pad[4]; char flags; char pad2[0x48 - 5]; } Ent_82F82758;
extern Ent_82F82758 *lbl_8329F620[];
extern int fn_82F85D70(int);
extern long fn_82A29B68(int h, long pos, long *high, int method);
extern unsigned long fn_82A1F470(void);
extern void fn_82F682B0(unsigned long err);
extern int *_errno(void);

long fn_82F82758(int fh, long pos, int mthd)
{
  int h;
  long rv;
  unsigned long dosretval;

  h = fn_82F85D70(fh);
  if (h == -1) {
    *_errno() = 9;
    return -1;
  }
  if ((rv = fn_82A29B68(h, pos, 0, mthd)) == -1)
    dosretval = fn_82A1F470();
  else
    dosretval = 0;
  if (dosretval) {
    fn_82F682B0(dosretval);
    return -1;
  }
  lbl_8329F620[fh >> 5][fh & 0x1f].flags &= 0xfd;
  return rv;
}
