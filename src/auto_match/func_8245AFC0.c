typedef struct { int a; int b; int c; } Buf;
typedef struct {
  int pad0;
  int handle;     /* 0x04 */
  int pad8;
  int active;     /* 0x0c */
  int pad10[3];
  int x1c;        /* 0x1c */
  Buf *buf;       /* 0x20 */
} Obj;

extern int fn_8245B1F0(Obj *self);
extern int fn_8245B4B0(int handle, int a, int c, int x, int p2, int p3);

int fn_8245AFC0(Obj *self, int param_2, int param_3)
{
  int hr;
  int a;
  int c;

  if (self->active == 0) {
    return 0x80004005;
  }
  a = self->buf->a;
  c = self->buf->c;
  if (fn_8245B1F0(self)) {
    hr = fn_8245B4B0(self->handle, a, c, self->x1c, param_2, param_3);
  } else {
    hr = 0x80004005;
  }
  self->buf->c = 0;
  self->active = 0;
  return hr;
}
