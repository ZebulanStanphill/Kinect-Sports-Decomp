typedef struct { int pos; int avail; } Buf_826EA1E8;
typedef struct { char pad[0x18]; Buf_826EA1E8 *buf; } Obj_826EA1E8;
extern void fn_826EA110(Obj_826EA1E8 *);

void fn_826EA1E8(Obj_826EA1E8 *o, int n)
{
  Buf_826EA1E8 *b = o->buf;
  if (n > 0) {
    while (n > b->avail) {
      n -= b->avail;
      fn_826EA110(o);
    }
    b->pos += n;
    b->avail -= n;
  }
}
