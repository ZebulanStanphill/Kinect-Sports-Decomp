#include <vector>

extern "C" {
void fn_8287ED60(void *dst, void *src);
void fn_8287E520(void *dst, void *src);
}

template <> std::vector<float>::vector(const std::vector<float> &);

struct Rec_8287EE10 {
  unsigned f0;
  char sub1[0x18];
  unsigned f1c;
  char sub2[0x18];
  unsigned f38;
  char sub3[0x10];
  std::vector<float> vec;
  float f5c;
  float f60;
  int f64;
  int f68;
  float f6c;
  unsigned __int64 q70;
  unsigned __int64 q78;
  unsigned f80;
  unsigned pad84;
  unsigned __int64 q88;
  unsigned __int64 q90;
  float f98;
};

extern "C" Rec_8287EE10 *fn_8287EE10(Rec_8287EE10 *d, Rec_8287EE10 *s)
{
  d->f0 = s->f0;
  fn_8287ED60(d->sub1, s->sub1);
  d->f1c = s->f1c;
  fn_8287ED60(d->sub2, s->sub2);
  d->f38 = s->f38;
  fn_8287E520(d->sub3, s->sub3);
  d->vec.std::vector<float>::vector(s->vec);
  d->f5c = s->f5c;
  d->f60 = s->f60;
  d->f64 = s->f64;
  d->f68 = s->f68;
  d->f6c = s->f6c;
  d->q70 = s->q70;
  d->q78 = s->q78;
  d->f80 = s->f80;
  d->q88 = s->q88;
  d->q90 = s->q90;
  d->f98 = s->f98;
  return d;
}
