typedef struct {
  int f0;
  int f4;
  int f8;
  int fc;
  int f10;
  int f14;
  int f18;
  int f1c;
  double f20;
  double f28;
  int f30;
  int f34;
  int f38;
  int f3c;
  int f40;
  int f44;
  int f48;
  int f4c;
  int f50;
  int f54;
  int f58;
  int f5c;
  int f60;
  int f64;
  int f68;
  int f6c;
  int f70;
  int f74;
} S;

int fn_82963FA8(S *d, S *s)
{
  if (s == 0) {
    return 0x80004005;
  }
  d->f4 = s->f4;
  d->f8 = s->f8;
  d->fc = s->fc;
  d->f10 = s->f10;
  d->f14 = s->f14;
  d->f18 = s->f18;
  d->f20 = s->f20;
  d->f28 = s->f28;
  d->f0 = s->f0;
  d->f30 = s->f30;
  d->f34 = s->f34;
  d->f38 = s->f38;
  d->f40 = s->f40;
  d->f3c = s->f3c;
  d->f44 = s->f44;
  d->f48 = s->f48;
  d->f4c = s->f4c;
  d->f50 = s->f50;
  d->f54 = s->f54;
  d->f58 = s->f58;
  d->f5c = s->f5c;
  d->f60 = s->f60;
  d->f64 = s->f64;
  d->f68 = s->f68;
  d->f6c = s->f6c;
  d->f70 = s->f70;
  d->f74 = s->f74;
  return 0;
}
