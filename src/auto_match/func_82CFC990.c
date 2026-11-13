extern unsigned strlen(const char *);
extern void *memcpy(void *, const void *, unsigned);

typedef struct Ctx_82CFC990 {
  char pad[0x10];
  void *heap;
} Ctx_82CFC990;

extern Ctx_82CFC990 *fn_82CE5410();
extern void fn_82CE6310(void *, void *, int, int);

typedef struct Str_82CFC990 {
  char *data;
  int len;
  unsigned cap;
} Str_82CFC990;

Str_82CFC990 *fn_82CFC990(Str_82CFC990 *s, const char *src)
{
  int old = s->len - 1;
  int n = strlen(src);
  int newlen = n + old + 1;
  void *h = fn_82CE5410()->heap;
  int cap = s->cap & 0x3fffffff;
  if (cap < newlen) {
    int nc = newlen < (cap << 1) ? (cap << 1) : newlen;
    fn_82CE6310(h, s, nc, 1);
  }
  s->len = newlen;
  memcpy(s->data + old, src, n + 1);
  return s;
}
