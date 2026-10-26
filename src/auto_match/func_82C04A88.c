typedef struct {
  char pad[0x2c];
  int err;
  unsigned __int64 pos;
  int (*read)(void *, unsigned __int64, void *, unsigned int, unsigned int *);
  void *ctx;
} S;

void fn_82C04A88(S *s, void *buf, unsigned int n, unsigned int *got)
{
  int hr = s->read(s->ctx, s->pos, buf, n, got);
  if (*got < n || hr < 0) {
    s->err = 1;
  }
  s->pos += *got;
}
