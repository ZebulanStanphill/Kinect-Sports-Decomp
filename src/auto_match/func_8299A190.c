typedef unsigned int uint;
extern void *fn_82963958(uint n);
void *memcpy(void *d, const void *s, uint n);

typedef struct {
  char pad[0x1c];
  uint count;
  int *data;
} S;

int fn_8299A190(S *p, int v)
{
  uint n = p->count;
  if ((n & 7) == 0) {
    int *m;
    if (n + 8 < n) {
      return 0x80004005;
    }
    m = fn_82963958(n + 8);
    if (m == 0) {
      return 0x8007000e;
    }
    memcpy(m, p->data, p->count * 4);
    p->data = m;
  }
  p->data[p->count] = v;
  p->count++;
  return 0;
}
