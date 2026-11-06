typedef struct Value_82936448 {
  int type;
  int pad;
  union {
    unsigned int u;
    int i;
    double d;
  } v;
} Value_82936448;

static unsigned int NormType_82936448(int t)
{
  switch (t) {
  case 2:
  case 4:
    return 2;
  case 5:
  case 6:
  case 7:
  case 8:
    return 5;
  }
  return t;
}

int fn_82936448(Value_82936448 *value, int *out, int lo, int hi)
{
  unsigned int t;
  int i;

  if (value == 0) {
    return 0x80004005;
  }
  t = NormType_82936448(value->type);
  if (t == 5) {
    double d = value->v.d;
    if (d < (double)lo || d > (double)hi) {
      return 0x80004005;
    }
    i = (int)d;
    if (d != (double)i) {
      return 0x80004005;
    }
  } else {
    if (t == 2 && value->v.u <= 0x7fffffff) {
      i = value->v.u;
    } else if (t == 3) {
      i = value->v.i;
    } else {
      return 0x80004005;
    }
    if (i < lo || i > hi) {
      return 0x80004005;
    }
  }
  *out = i;
  return 0;
}
