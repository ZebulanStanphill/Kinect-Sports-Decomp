typedef struct Str { unsigned int len; int pad; char data[1]; } Str;
typedef struct Entry { unsigned int *key; int *val; } Entry;
typedef struct Slot { int a; int b; int c; int d; } Slot;
typedef struct Table { Slot *slots; } Table;
extern unsigned int fn_8268AF70(char *s, unsigned int n, int seed);
extern void fn_8268BA10(Slot *s, unsigned int *key);
extern int fn_826CC0E8(Table *t, Entry *e, unsigned int h);
extern void fn_826D2420(Table *t, int a, Entry *e, unsigned int h);

void fn_826D2840(Table *t, int param_2, Entry *e)
{
  unsigned int h;
  Slot *s;
  int i;

  h = fn_8268AF70(((Str *)(*e->key & ~3u))->data, ((Str *)(*e->key & ~3u))->len & 0x7fffffff, 0x1505);
  s = t->slots;
  if (s == 0 || (i = fn_826CC0E8(t, e, s->b & h)) < 0) {
    fn_826D2420(t, param_2, e, h);
  } else {
    s = s + (i + 1);
    fn_8268BA10(s, e->key);
    s->b = *e->val;
  }
}
