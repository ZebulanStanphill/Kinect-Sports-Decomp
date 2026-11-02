typedef struct { unsigned int hdr, pad4, base, cnt, idx; } Cmd_82993A78;
typedef struct Dev_82993A78 { int *vt; } Dev_82993A78;
extern int fn_8295D318(void *, int, void *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                       int, int, int, int);

void fn_82993A78(int *self)
{
  Cmd_82993A78 *c = (Cmd_82993A78 *)self[0x41];
  unsigned int hdr = c->hdr;
  unsigned int base = c->base;
  unsigned int cnt = c->cnt;
  unsigned int *idx = (unsigned int *)c->idx;
  unsigned int mask = hdr & 0xfffff;
  unsigned int end = mask * 4 + base;
  int B[4];
  int A[4];
  int C[4];
  int D[4];
  int hr;
  unsigned int i;

  hr = (*(int (**)(int *, int, int *, int, int, int))(*self + 0x154 / 4 * 4))(self, self[0x40], B, 4, 0, 0);
  if (hr >= 0) {
    int v1 = self[0x89];
    int v2 = self[0x8a];
    for (i = 0; i < 4; i++) {
      C[i] = v1;
      D[i] = v2;
      if (i < cnt)
        A[i] = B[*(int *)(((int *)self[5])[idx[i]] + 0x10)];
    }
    fn_8295D318(self, 2, A, cnt, base, end, 0, mask, 0, 0x1000000, 0, 0);
    fn_8295D318(self, 0x58, (void *)idx, cnt, (unsigned int)A, (unsigned int)D, (unsigned int)C, mask, 0, 0, 0, 0);
  }
}
