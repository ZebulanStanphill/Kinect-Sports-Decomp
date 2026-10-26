typedef char * V;
typedef struct { int pad[2]; V base; V max; V cur; } S;
int fn_82E49318(S *s, __int64 n)
{
  s->cur = s->base + n <= s->max ? s->base + n : s->max;
  return 0;
}
