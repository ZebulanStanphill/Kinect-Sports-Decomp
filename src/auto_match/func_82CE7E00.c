typedef struct { char pad[0xc]; void *alloc; } Ctx;
typedef struct { char *data; int len; unsigned int flags : 2; unsigned int cap : 30; } Str;
extern Ctx *fn_82CE5410(void);
extern void fn_82CE6310(void *alloc, Str *s, int cap, int keep);

void fn_82CE7E00(Str *s, int len)
{
  int n = len + 1;
  void *a = fn_82CE5410()->alloc;
  if ((int)s->cap < n) {
    int c = s->cap * 2;
    fn_82CE6310(a, s, n < c ? c : n, 1);
  }
  s->len = n;
  s->data[len] = 0;
}
