extern void *memcpy(void *, const void *, unsigned int);

struct Buf_8223FED8;
typedef struct VT_8223FED8 {
  void *s0;
  void *s1;
  void *s2;
  int (*overflow)(struct Buf_8223FED8 *self, int c);
} VT_8223FED8;
typedef struct Buf_8223FED8 {
  VT_8223FED8 *vt;
  char pad4[0x24 - 4];
  char **pfirst;
  char pad28[0x34 - 0x28];
  int *pcount;
} Buf_8223FED8;

__int64 fn_8223FED8(Buf_8223FED8 *self, const char *s, __int64 count)
{
  __int64 done = 0;
  __int64 avail;
  int n;

  while (count > 0) {
    if (*self->pfirst != 0) { n = *self->pcount; } else { n = 0; }
    avail = n;
    if (avail > 0) {
      if (count < avail) avail = count;
      memcpy(*self->pfirst, s, (unsigned int)avail);
      s += (int)avail;
      done += avail;
      count -= avail;
      *self->pcount -= (int)avail;
      *self->pfirst += (int)avail;
    } else {
      if (self->vt->overflow(self, (unsigned char)*s) == -1) break;
      s++;
      done++;
      count--;
    }
  }
  return done;
}
