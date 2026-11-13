typedef struct Str_82681728 {
  int pad[2];
  int refs;
} Str_82681728;
extern unsigned int strlen(const char *);
extern Str_82681728 *fn_82694548(int, const char *, unsigned int, int);

Str_82681728 **fn_82681728(Str_82681728 **out, int a, const char *s)
{
  Str_82681728 *p = fn_82694548(a, s, strlen(s), 0);
  *out = p;
  p->refs = p->refs + 1;
  return out;
}
