typedef struct Obj_82C07228 { char pad[0x218]; void *h; } Obj_82C07228;
extern int fn_82C114A0(void *, int, int, unsigned *);

int fn_82C07228(Obj_82C07228 *self, int a, int b, unsigned *c)
{
  int hr;
  if (self->h == 0) {
    return 0x805000a8;
  }
  hr = fn_82C114A0(self->h, a, b, c);
  if (hr >= 0 && *c == 0) {
    self->h = 0;
  }
  return hr;
}
