typedef unsigned int uint;
typedef struct { int stride; unsigned char *data; } Lock;
typedef struct { uint fmt; uint p[6]; uint rows; } Info;
extern void fn_8263CA78(void *, Info *);
extern void fn_8263CB10(void *, Lock *, int, int);
extern void fn_8263CB30(void *);
extern void *memcpy(void *, const void *, unsigned);
int fn_82923B48(void *param_1, void *param_2)
{
  Info info;
  struct { Lock a, b; } L;
  int n, m;
  uint i;
  fn_8263CA78(param_1, &info);
  fn_8263CB10(param_1, &L.a, 0, 0);
  fn_8263CB10(param_2, &L.b, 0, 0);
  if ((int)(info.fmt & 0xfffffe3f) >= 0x1a200012 && (int)(info.fmt & 0xfffffe3f) <= 0x1a200014)
    info.rows = (info.rows + 3) >> 2;
  n = L.b.stride < L.a.stride ? L.b.stride : L.a.stride;
  i = 0;
  {
    unsigned char *src = L.a.data;
    unsigned char *dst = L.b.data;
    if (info.rows != 0) {
      do {
        memcpy(dst, src, n);
        i++;
        src += L.a.stride;
        dst += L.b.stride;
      } while (i < info.rows);
    }
  }
  fn_8263CB30(param_2);
  fn_8263CB30(param_1);
  return 0;
}
