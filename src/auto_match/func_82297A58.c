extern void *memcpy(void *, const void *, unsigned int);

struct Buf_82297A58;
typedef struct VT_82297A58 {
  void *s0;
  void *s1;
  void *s2;
  void *s3;
  void *s4;
  void *s5;
  void *s6;
  unsigned short (*uflow)(struct Buf_82297A58 *self);
} VT_82297A58;
typedef struct Buf_82297A58 {
  VT_82297A58 *vt;
  char pad4[0x20 - 4];
  unsigned short **pnext;
  char pad24[0x30 - 0x24];
  int *pcount;
} Buf_82297A58;

__int64 fn_82297A58(Buf_82297A58 *self, unsigned short *s, __int64 count)
{
  __int64 done = 0;
  __int64 avail;
  int n;

  while (count > 0) {
    if (*self->pnext != 0) { n = *self->pcount; } else { n = 0; }
    avail = n;
    if (avail > 0) {
      if (count < avail) avail = count;
      memcpy(s, *self->pnext, (unsigned int)avail * 2);
      s += (int)avail;
      done += avail;
      count -= avail;
      *self->pcount -= (int)avail;
      *self->pnext += (int)avail;
    } else {
      unsigned short c = self->vt->uflow(self);
      if (c == 0xffff) break;
      *s = c;
      s++;
      done++;
      count--;
    }
  }
  return done;
}
