typedef unsigned int uint;
typedef unsigned __int64 U64;
typedef struct { U64 lo, hi; } V16;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

typedef struct {
  int a;
  int b;
  V16 c;
} Arg;

typedef struct {
  int f0;
  int f4;
  int f8;
  int fc;
  V16 f10;
  uint f20;
  int f24;
  uint f28;
} Entry;

extern Entry *fn_82FF5268(void *, int);

int fn_82FF4858(char *param_1, Arg *param_2, uint param_3, int param_4, uint param_5, int param_6)
{
  Entry *e;
  void *cs;

  cs = param_1 + 0x88;
  RtlEnterCriticalSection(cs);
  e = fn_82FF5268(param_1 + 4, param_2->b);
  if (e == 0) {
    RtlLeaveCriticalSection(cs);
    return 2;
  }
  e->f8 = param_6;
  e->f0 = 0;
  e->f4 = 1;
  e->fc = param_2->a;
  e->f10 = param_2->c;
  e->f20 = param_3;
  e->f24 = param_4;
  if (param_3 == 0) {
    param_5 = param_5 & 0xffff0004;
  }
  e->f28 = param_5;
  RtlLeaveCriticalSection(cs);
  return 1;
}
