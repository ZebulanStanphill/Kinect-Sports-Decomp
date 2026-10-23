extern void fn_82FA5190(void *heap, void *p);
extern void *lbl_831BC978;
typedef struct Buf { void *data; int pad[6]; unsigned int flags; } Buf;
typedef struct Obj { int pad[4]; Buf *buf; } Obj;

void fn_8304FF88(Obj *o)
{
  if (o->buf != 0) {
    if ((o->buf->flags & 0x80000000U) != 0) {
      if (o->buf->data != 0) {
        fn_82FA5190(lbl_831BC978, o->buf->data);
      }
    }
    fn_82FA5190(lbl_831BC978, o->buf);
    o->buf = 0;
  }
}
