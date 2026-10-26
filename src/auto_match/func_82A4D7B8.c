typedef struct {
  int x, y, z;
} V3;

typedef struct {
  char pad[0xfc];
  V3 v;
} S;

int fn_82A4D7B8(S *s, int *src, unsigned int size)
{
  int hr = 0;
  if (size != 0xc) {
    hr = 0x80070057;
  } else {
    s->v.x = src[0];
    s->v.y = src[1];
    s->v.z = src[2];
  }
  return hr;
}
