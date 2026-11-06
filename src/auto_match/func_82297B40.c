extern void *memcpy(void *, const void *, unsigned int);

struct Buf_82297B40;
typedef struct VT_82297B40 {
  void *s0;
  void *s1;
  void *s2;
  unsigned short (*overflow)(struct Buf_82297B40 *self, unsigned short c);
} VT_82297B40;
typedef struct Buf_82297B40 {
  VT_82297B40 *vt;
  char pad4[0x24 - 4];
  unsigned short **pfirst;
  char pad28[0x34 - 0x28];
  int *pcount;
} Buf_82297B40;

__int64 fn_82297B40(Buf_82297B40 *self, const unsigned short *s, __int64 count)
{
  __int64 done = 0;
  __int64 avail;
  int n;

  while (count > 0) {
    if (*self->pfirst != 0) { n = *self->pcount; } else { n = 0; }
    avail = n;
    if (avail > 0) {
      if (count < avail) avail = count;
      memcpy(*self->pfirst, s, (unsigned int)avail * 2);
      s += (int)avail;
      done += avail;
      count -= avail;
      *self->pcount -= (int)avail;
      *self->pfirst += (int)avail;
    } else {
      if (self->vt->overflow(self, *s) == 0xffff) break;
      s++;
      done++;
      count--;
    }
  }
  return done;
}
