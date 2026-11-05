typedef struct Src_826EA248 Src_826EA248;
typedef struct { int (*f0)(); int (*f1)(); int (*f2)(); int (*f3)(); int (*f4)(); int (*f5)(); int (*f6)(); int (*f7)(); int (*f8)(); int (*read)(Src_826EA248 *, void *, int); } VT_826EA248;
struct Src_826EA248 { VT_826EA248 *vt; };
typedef struct { void *cur; int len; int a, b, c; Src_826EA248 *src; char buf[0x800]; } Buf_826EA248;
typedef struct { char pad[0x18]; Buf_826EA248 *b; } Obj_826EA248;

unsigned char fn_826EA248(Obj_826EA248 *o)
{
  Buf_826EA248 *b = o->b;
  int n = b->src->vt->read(b->src, b->buf, 0x800);
  if (n != 0x800) return 0;
  b->cur = b->buf;
  b->len = 0x800;
  return 1;
}
