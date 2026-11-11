/* The tolerance is the literal FLT_EPSILON (0x34000000, __real@34000000). */
extern int fn_82F6E7A8(const char *, ...);
extern double fabs(double);
typedef struct { int pad[2]; float *mem; } B_8305AE90;
typedef struct { int pad[5]; B_8305AE90 *b; } Obj_8305AE90;

int fn_8305AE90(Obj_8305AE90 *o, float *x, int n)
{
  int ok;
  int i;
  float *m;
  unsigned char c;
  if (x == 0) return 0;
  if (n != 0x4f8) return 0;
  ok = 1;
  m = o->b->mem;
  for (i = 0; i < 0x4f8; i++) {
    c = fabs(x[i] - m[i]) > 1.1920929e-07f ? 0 : 1;
    if (!c) {
      fn_82F6E7A8("X-memory mismatch: xMemory[%d] = %2.16f, but memoryMap->mXMEM[%d] = %2.16f\n", i, (double)x[i], i, (double)m[i]);
      ok = 0;
    }
  }
  return ok;
}
