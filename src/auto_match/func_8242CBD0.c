typedef struct { char pad[0x2c]; void *f2c; } Ent_8242CBD0;
extern Ent_8242CBD0 *fn_8242C1B8(void *);

void *fn_8242CBD0(void *p)
{
  Ent_8242CBD0 *e = fn_8242C1B8(p);
  return e ? e->f2c : 0;
}
