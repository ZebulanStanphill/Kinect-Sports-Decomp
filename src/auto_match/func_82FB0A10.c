extern int fn_830085B8(void *);
extern int fn_830085E0(void *);

typedef struct Ent_82FB0A10 {
  int a;
  void *obj;
} Ent_82FB0A10;

typedef struct Obj_82FB0A10 {
  char pad[0x88];
  Ent_82FB0A10 *begin;
  Ent_82FB0A10 *end;
} Obj_82FB0A10;
int fn_82FB0A10(Obj_82FB0A10 *o)
{
  Ent_82FB0A10 *e;
  Ent_82FB0A10 *u;
  int r = 1;

  for (e = o->begin; e != o->end; e++) {
    r = fn_830085B8(e->obj);
    if (r != 1) break;
  }
  if (r != 1) {
    for (u = o->begin; u != e; u++) fn_830085E0(u->obj);
  }
  return r;
}
