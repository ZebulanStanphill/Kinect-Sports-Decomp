typedef struct Stream_82CFEC88 Stream_82CFEC88;
typedef struct {
  void *slot[4];
  int (*read)(Stream_82CFEC88 *self, void *buf, int size);
} StreamVtbl_82CFEC88;
struct Stream_82CFEC88 { StreamVtbl_82CFEC88 *vt; };

int fn_82CFEC88(Stream_82CFEC88 *s)
{
  signed char c;
  if (s->vt->read(s, &c, 1) != 0) {
    return c;
  }
  return -1;
}
