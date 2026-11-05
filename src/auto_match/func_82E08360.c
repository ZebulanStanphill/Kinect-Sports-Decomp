extern unsigned fn_82E08BE0(void *);
extern void fn_82E08C10(void *, unsigned, int, int, int);
typedef struct { char pad[0xc]; void **items; int count; } Self_82E08360;
void fn_82E08360(Self_82E08360 *s, unsigned pos, int a, int b, int c)
{
  unsigned acc = 0;
  int i;
  for (i = 0; i < s->count; i++) {
    void *it = s->items[i];
    unsigned n = fn_82E08BE0(it);
    if (pos < acc + n) {
      fn_82E08C10(it, pos - acc, a, b, c);
      return;
    }
    acc += n;
  }
}
