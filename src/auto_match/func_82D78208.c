typedef struct Pair { unsigned short x, y; } Pair;
typedef struct Set { Pair e[8]; unsigned char pad; unsigned char count; } Set;
extern char *fn_82D78178(void *out, Set *s, Pair *v);
int fn_82D78208(Set *s, int a, int b, Pair *v) {
  char buf[16];
  unsigned char c = s->count;
  int n = c;
  if (c <= 8 && *fn_82D78178(buf, s, v) == 0 && n < 8) {
    s->e[n] = *v;
    s->count++;
    return n;
  }
  return -1;
}
