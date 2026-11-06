typedef struct { char pad[4]; char flags; char pad2[0x48 - 5]; } Ent_82F855A8;
extern Ent_82F855A8 *lbl_8329F620[];
extern int fn_82F85D70(int);
extern int fn_82A29B68(int, int, __int64 *, int);
extern unsigned int fn_82A1F470(void);
extern void fn_82F682B0(void);
extern int *_errno(void);

__int64 fn_82F855A8(int fh, __int64 off, int whence)
{
  int h;
  __int64 pos = off;
  h = fn_82F85D70(fh);
  if (h == -1) {
    *_errno() = 9;
    return -1;
  }
  ((int *)&pos)[1] = fn_82A29B68(h, ((int *)&pos)[1], &pos, whence);
  if (((int *)&pos)[1] == -1 && fn_82A1F470() != 0) {
    fn_82F682B0();
    return -1;
  }
  lbl_8329F620[fh >> 5][fh & 0x1f].flags &= 0xfd;
  return pos;
}
