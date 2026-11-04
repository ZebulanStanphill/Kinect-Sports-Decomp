extern float lbl_82057518;
extern int fn_82F6E7A8(const char *, ...);
extern double fabs(double);
typedef struct { char pad[8]; } A_83059838;
typedef struct { int pad[2]; char *mem; } B_83059838;
typedef struct { int pad[5]; B_83059838 *b; } Obj_83059838;

int fn_83059838(Obj_83059838 *o, float *y, int n)
{
  int ok;
  int i;
  float *m;
  float *p;
  float d;
  unsigned char c;
  double t;
  if (y == 0) return 0;
  if (n != 0x329) return 0;
  ok = 1;
  t = lbl_82057518;
  m = (float *)(o->b->mem + 0xca4);
  i = 0;
  p = y;
  for (; i < 0x329; i++) {
    d = *p - *m;
    c = 0;
    if (fabs(d) <= t) c = 1;
    if (c == 0) {
      fn_82F6E7A8("Y-memory mismatch: yMemory[%d] = %2.16f, but memoryMap->mYMEM[%d] = %2.16f\n", i, (double)*p, i, (double)*m);
      ok = 0;
    }
    m++;
    p++;
  }
  return ok;
}
