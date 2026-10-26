typedef struct { char pad[5]; signed char off; } Hdr;
typedef struct { Hdr *a; Hdr *b; } Pair;
extern void *fn_82D7C120(void *a, void *b);
extern void fn_82DB05D8(void *p);
void fn_82DBA160(void *self, Pair *p)
{
  Hdr *a = p->a;
  Hdr *b = p->b;
  void *r = fn_82D7C120((char *)a + a->off, (char *)b + b->off);
  if (r != 0) fn_82DB05D8(r);
}

