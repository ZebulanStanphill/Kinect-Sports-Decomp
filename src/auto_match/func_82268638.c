extern void fn_82230218(void *, void *, int, int);

typedef struct { unsigned char v[8]; } B8;

typedef struct {
  unsigned __int64 a;
  char str[0x1c];
  int b;
  B8 c;
  int d;
} S;

S *fn_82268638(S *dst, S *src)
{
  dst->a = src->a;
  fn_82230218(dst->str, src->str, 0, -1);
  dst->b = src->b;
  dst->c = src->c;
  dst->d = src->d;
  return dst;
}
