typedef struct { unsigned a, b, c, d; unsigned e; } Arg;
typedef struct { unsigned next, prev; } Link;
extern char *fn_82B841E8();
extern Arg *fn_82ACA920();
extern unsigned fn_82AD1978();

char *fn_82AEB678(void *p1, void *p2, Link *link, Arg *a, Arg *b)
{
  char *n;
  Link *l;
  n = fn_82B841E8(p1, p2, 0, 0x4a, 2, 1);
  *(unsigned *)(n + 0x2c) = fn_82AD1978(n, a->e != 0 ? fn_82ACA920(p1, a, a->d) : a);
  *(unsigned *)(n + 0x30) = fn_82AD1978(n, b->e != 0 ? fn_82ACA920(p1, b, b->d) : b);
  if (link != 0) {
    l = (Link *)(((unsigned)n & 0xfffffffe) + 0x24);
    l->next = link->next;
    *(unsigned *)(link->next & 0xfffffffe) = (unsigned)l - 0x24;
    l->prev = ((unsigned)link - 0x24) | 1;
    link->next = (unsigned)&l->prev;
  }
  return n;
}
