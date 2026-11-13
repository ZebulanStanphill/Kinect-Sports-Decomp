extern int fn_82A1DDC0();


typedef struct { float *data; unsigned int mask; int pad; unsigned short stride; unsigned short count; } Buf_83046770;
typedef struct { float last[6]; int rdOff; int wrOff; int f20; } State_83046770;

int fn_83046770(Buf_83046770 *param_1, Buf_83046770 *param_2, int param_3, State_83046770 *param_4)

{
  unsigned int avail;
  unsigned int diff;
  unsigned int m;
  unsigned int cnt;
  unsigned int i;
  unsigned int v;
  unsigned int lastIdx;
  float *src;

  avail = param_1->count;
  diff = param_3 - param_4->wrOff;
  m = diff < avail ? diff : avail;
  lastIdx = m - 1;
  cnt = 0;
  for (v = param_1->mask; v != 0; v = (v - 1) & v) {
    cnt = cnt + 1;
  }
  i = 0;
  if (cnt != 0) {
    do {
      src = param_1->data + (param_1->stride * i + param_4->rdOff);
      fn_82A1DDC0(param_2->data + (param_2->stride * i + param_4->wrOff), src, m * 4);
      param_4->last[i] = src[lastIdx];
      i = i + 1;
    } while (i < cnt);
  }
  param_1->count = param_1->count - m;
  param_2->count = m + param_4->wrOff;
  param_4->f20 = 0x10000;
  if (m == avail) {
    param_4->rdOff = 0;
  }
  else {
    param_4->rdOff = m + param_4->rdOff;
  }
  if (m == diff) {
    return 0x2d;
  }
  param_4->wrOff = m + param_4->wrOff;
  return 0x2b;
}
