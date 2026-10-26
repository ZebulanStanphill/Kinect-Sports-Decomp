typedef struct {
  int a;
  unsigned int b;
} S;

unsigned char fn_82FA58D0(S *s)
{
  unsigned __int64 v = s->b & ~3u;
  return 0 == v;
}
