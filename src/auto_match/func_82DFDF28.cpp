struct Vec_82DFDF28 { unsigned char *data; int len; unsigned cap; };
struct Obj_82DFDF28;
struct Buf_82DFDF28 { Vec_82DFDF28 a; Vec_82DFDF28 b; float f; };
struct Sink_82DFDF28 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void f3(float, Obj_82DFDF28 *, int, Buf_82DFDF28 *); };
struct Obj_82DFDF28 { char pad[0x30]; Sink_82DFDF28 *sink; char pad2[0x6c]; unsigned char *data; int len; int pad3; float f; };
struct Heap_82DFDF28 { char pad[0x10]; int heap; };
extern "C" Heap_82DFDF28 *fn_82CE5410(void);
extern "C" void fn_82CE6310(int, void *, int, int);
extern "C" void fn_82DFDF28(Obj_82DFDF28 *o, float dt, int x, Buf_82DFDF28 *buf)
{
  int n, c2, i;
  Vec_82DFDF28 *v2 = &buf->b;
  n = o->len;
  {
    int h = fn_82CE5410()->heap;
    if ((int)(buf->b.cap & 0x3fffffff) < n) {
      c2 = (buf->b.cap & 0x3fffffff) << 1;
      fn_82CE6310(h, v2, n < c2 ? c2 : n, 1);
    }
  }
  v2->len = n;
  n = o->len;
  {
    int h = fn_82CE5410()->heap;
    if ((int)(buf->a.cap & 0x3fffffff) < n) {
      c2 = (buf->a.cap & 0x3fffffff) << 1;
      fn_82CE6310(h, buf, n < c2 ? c2 : n, 4);
    }
  }
  buf->a.len = n;
  i = 0;
  if (0 < o->len) {
    do { v2->data[i] = o->data[i]; i = i + 1; } while (i < o->len);
  }
  buf->f = o->f;
  o->sink->f3(dt, o, x, buf);
  i = 0;
  if (0 < buf->b.len) {
    do { o->data[i] = v2->data[i]; i = i + 1; } while (i < buf->b.len);
  }
  o->f = buf->f;
}
