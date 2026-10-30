typedef struct {
  char pad0[0x28];
  void *f28;
  void *f2c;
  void *f30;
} Ent_82CAD058;

typedef struct {
  char pad0[0xc];
  Ent_82CAD058 *ents[1];
  char pad10[0x40 - 0x10];
  int count;
} Set_82CAD058;

typedef struct {
  char pad0[0x6070];
  char *pool;
} Obj_82CAD058;

extern void fn_82CAD2B0(Obj_82CAD058 *, void *);
extern void fn_82C563B0(char *, void *);

void fn_82CAD058(Obj_82CAD058 *self, Set_82CAD058 *set)
{
  char *pool0;
  char *pool;
  int i;
  Ent_82CAD058 **pp;
  Ent_82CAD058 *e;

  pool0 = self->pool + 8;
  if (set != 0) {
    i = 0;
    if (set->count > 0) {
      pp = set->ents;
      do {
        e = *pp;
        pool = self->pool + 8;
        if (e != 0) {
          fn_82CAD2B0(self, e->f2c);
          if (e->f2c != 0) fn_82C563B0(pool, e->f2c);
          if (e->f30 != 0) fn_82C563B0(pool, e->f30);
          if (e->f28 != 0) fn_82C563B0(pool, e->f28);
          fn_82C563B0(pool, e);
        }
        i++;
        pp++;
      } while (i < set->count);
    }
    fn_82C563B0(pool0, set);
  }
}
