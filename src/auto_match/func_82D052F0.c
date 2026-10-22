struct ctx {
  int pad[3];
  void *alloc;
};

struct str {
  char *data;
  int len;
  unsigned int cap;
  char buf[0x20];
};

extern struct ctx *fn_82CE5410(void);
extern void fn_82CE6310(void *alloc, struct str *s, int cap, int keep);
extern void fn_82CFC050(char *dst, const char *src, int n);

struct str *fn_82D052F0(struct str *s, const char *src, int n)
{
  int len;
  void *alloc;
  int cap;
  int newcap;

  s->data = s->buf;
  s->cap = 0x80000020;
  s->len = 0;
  len = n + 1;
  alloc = fn_82CE5410()->alloc;
  cap = s->cap & 0x3fffffff;
  if (cap < len) {
    newcap = cap * 2;
    fn_82CE6310(alloc, s, len < newcap ? newcap : len, 1);
  }
  s->len = len;
  s->data[n] = 0;
  fn_82CFC050(s->data, src, n);
  return s;
}
