typedef struct { int v[4]; } Sub;
typedef struct T { int x0; int x4; int x8; Sub xc; } T;
extern void fn_828D8260(Sub *d, Sub *s);
T *fn_828D8478(T *first, T *last, T *dest)
{
  for (; first != last; ++first, ++dest) {
    dest->x4 = first->x4;
    dest->x8 = first->x8;
    fn_828D8260(&dest->xc, &first->xc);
  }
  return dest;
}
