extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CF68D0();

typedef struct { char *data; int len; unsigned int cap; } Str;

void fn_82D04EF0(Str *s, int src, int n)
{
  int need = n + 1;
  int heap = *(int *)(fn_82CE5410() + 0xc);
  int cap = s->cap & 0x3fffffff;
  if (cap < need) {
    int nc = cap * 2;
    fn_82CE6310(heap, s, need < nc ? nc : need, 1);
  }
  s->len = need;
  s->data[n] = 0;
  fn_82CF68D0(s->data, src, n);
}
