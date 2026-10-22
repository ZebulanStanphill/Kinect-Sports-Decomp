typedef struct Ent { int pad[4]; int ref; } Ent;
typedef struct Tab { int pad[4]; unsigned int size; int map; } Tab;
extern void fn_82691E98(Tab *t, int key, unsigned int n, unsigned char *ok);
extern unsigned int fn_8270BEF0(int *map, int key, Ent **out);

unsigned int fn_82691F08(Tab *t, int key)
{
  unsigned int r;
  unsigned char ok;
  Ent *e;

  ok = 0;
  do {
    r = fn_8270BEF0(&t->map, key, &e);
    if (r != 0) {
      e->ref++;
      return r;
    }
    fn_82691E98(t, key, t->size + 1, &ok);
  } while (ok);
  return 0;
}
