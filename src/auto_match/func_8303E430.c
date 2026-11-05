typedef struct { int pad; unsigned first, last; } Vec_8303E430;
extern void *_blkmov(void *, const void *, unsigned);

void fn_8303E430(Vec_8303E430 *v, unsigned key)
{
  unsigned *r = &v->first;
  unsigned p = r[0];
  if (r[0] != r[1]) {
    do {
      if (*(unsigned *)p == key) {
        unsigned e = r[1] - 8;
        if (p < e) {
          _blkmov((void *)p, (void *)(p + 8), (((e - p - 1) >> 3) + 1) * 8);
        }
        r[1] -= 8;
      } else {
        p += 8;
      }
    } while (p != v->last);
  }
}
