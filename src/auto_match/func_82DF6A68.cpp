// Array replace (remove rem elements at pos, insert n copied from src) for a
// 32-byte element of two vectors, the same code as func_82DB9F80 for int; the
// copy is a placement-new copy construction (null test on each slot).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
struct Elem_82DF6A68 {
  __vector4 a;
  __vector4 b;
  Elem_82DF6A68(const Elem_82DF6A68 &o) : a(o.a), b(o.b) {}
};
struct Vec_82DF6A68 { Elem_82DF6A68 *data; int size; unsigned int cap; };
extern "C" int fn_82CE6310(int, Vec_82DF6A68 *, int, int);
extern "C" int fn_82CF6B28(void *, void *, int);

inline void *operator new(unsigned int, void *p) { return p; }

extern "C" void fn_82DF6A68(Vec_82DF6A68 *v, int ctx, int pos, int rem, const Elem_82DF6A68 *src, int n)
{
  int size = v->size;
  int cap = v->cap & 0x3fffffff;
  int newsize = size - rem + n;
  int cnt = size - pos - rem;
  Elem_82DF6A68 *d;
  if (cap < newsize) { fn_82CE6310(ctx, v, (newsize < cap * 2) ? cap * 2 : newsize, 0x20); }
  fn_82CF6B28(v->data + pos + n, v->data + pos + rem, cnt * 0x20);
  d = v->data + pos;
  for (int i = 0; i < n; i++) new (&d[i]) Elem_82DF6A68(src[i]);
  v->size = newsize;
}
