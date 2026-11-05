typedef struct Ent { char pad[0x14]; unsigned key; char pad2[0x10]; } Ent;
typedef struct Tab { Ent *data; unsigned count; } Tab;
extern int fn_827AEA98(void);
extern unsigned fn_827AEAC0(Tab *, int, unsigned, unsigned *, int (*)(void));
Ent *fn_827AEE00(Tab *t, unsigned key)
{
  unsigned kk = key;
  unsigned i = fn_827AEAC0(t, 0, t->count, &key, fn_827AEA98);
  if (i < t->count) {
    Ent *e = t->data + i;
    if (e->key == kk) return e;
  }
  return 0;
}
