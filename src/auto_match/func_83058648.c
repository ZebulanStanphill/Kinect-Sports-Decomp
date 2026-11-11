extern int fn_82F6E7A8(const char *, ...);
extern double fabs(double);
typedef struct { char pad[8]; } A_83058648;
typedef struct { int pad[2]; char *mem; } B_83058648;
typedef struct { int pad[5]; B_83058648 *b; } Obj_83058648;

int fn_83058648(Obj_83058648 *o, float *y, int n)
{
  int ok;
  int i;
  float *m;
  float *p;
  float d;
  unsigned char c;
  double t;
  if (y == 0) return 0;
  if (n != 0x3c2) return 0;
  ok = 1;
  t = 1.1920929e-07f;
  m = (float *)(o->b->mem + 0xf08);
  i = 0;
  p = y;
  for (; i < 0x3c2; i++) {
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
