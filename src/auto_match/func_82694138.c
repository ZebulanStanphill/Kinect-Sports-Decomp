typedef struct Val { int a, b, c; unsigned int hash; } Val;
typedef struct Entry { int next; Val *val; } Entry;
typedef struct Hdr { int x; unsigned int mask; } Hdr;
typedef struct Table { Entry *e; } Table;
extern unsigned char fn_82693DF8(Val *v, int key);

int fn_82694138(Table *t, int key, unsigned int bucket)
{
  Entry *base = t->e;
  Entry *e = &base[bucket + 1];
  int i = bucket;

  if (e->next != -2 && (e->val->hash & ((Hdr *)base)->mask) == bucket) {
    for (;;) {
      if ((e->val->hash & ((Hdr *)base)->mask) == bucket && fn_82693DF8(e->val, key))
        return i;
      i = e->next;
      if (i == -1) break;
      base = t->e;
      e = &base[i + 1];
    }
  }
  return -1;
}
