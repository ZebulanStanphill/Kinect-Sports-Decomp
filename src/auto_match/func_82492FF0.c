typedef struct SP_82492FF0 { void *px; void *rep; } SP_82492FF0;
typedef struct Vec_82492FF0 { char pad[0x30]; unsigned b; unsigned e; } Vec_82492FF0;
typedef struct Obj_82492FF0 { char pad[0x40]; unsigned f40; Vec_82492FF0 *f44; } Obj_82492FF0;
typedef struct Ctx_82492FF0 { char pad[0x14]; unsigned f14; } Ctx_82492FF0;
typedef struct Ent_82492FF0 {
  char pad20[0x20]; char f20[0x238]; int f258; char pad25c[0xc]; int f248;
} Ent_82492FF0;
extern void fn_822315A0(void *);
extern void fn_8236CE28(Vec_82492FF0 *, float);
extern int **fn_82522588(SP_82492FF0 *, unsigned);
extern int fn_82570840(int, void *, int, void *);

void fn_82492FF0(Obj_82492FF0 *o, float t, int unused, Ctx_82492FF0 *c)
{
  Vec_82492FF0 *v;
  unsigned it;
  SP_82492FF0 tmp;
  char *e;
  if (o->f40 != 0 && c->f14 >= o->f40) {
    v = o->f44;
    o->f40 = 0;
    for (it = v->b; it != v->e; it += 8) {
      e = (char *)*fn_82522588(&tmp, it);
      if (*(int *)(*(int *)(e + 0x36c) + 0x44) != 0 && *(unsigned *)(e + 0x258) != 0) {
        *(int *)(e + 0x250) = fn_82570840(*(int *)(e + 0x248), e + 0x258, 0, e + 0x20);
      }
      if (tmp.rep != 0) fn_822315A0(tmp.rep);
    }
  }
  fn_8236CE28(o->f44, t);
}
