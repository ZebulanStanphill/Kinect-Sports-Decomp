typedef struct Ent_8284D6C0 { int a; int b; int c; unsigned d; } Ent_8284D6C0;
typedef struct Obj_8284D6C0 {
  char pad0[0x20];
  void *f20;
  void *f24;
  char pad1[0x24];
  Ent_8284D6C0 *ents;
} Obj_8284D6C0;
typedef struct Owner_8284D6C0 { char pad[0x12c]; unsigned count; } Owner_8284D6C0;
typedef struct Fns_8284D6C0 {
  char pad0[0xc];
  void (*fc)(Obj_8284D6C0 *);
  char pad1[0xc];
  void (*f1c)(void *);
  char pad2[0xc];
  void (*f2c)(void *);
} Fns_8284D6C0;
extern void fn_82815578(int);
extern void fn_82849D18(int);

void fn_8284D6C0(Owner_8284D6C0 *own, Obj_8284D6C0 *o, Fns_8284D6C0 *fns)
{
  unsigned i = 0;
  int off;
  Ent_8284D6C0 *e;

  if (own->count > 0) {
    off = 0;
    do {
      fn_82815578(*(int *)(off + (int)o->ents + 4));
      e = (Ent_8284D6C0 *)(off + (int)o->ents);
      if (e->d != 0) {
        fn_82849D18(e->c);
      }
      i = i + 1;
      off = off + 0x10;
    } while (i < own->count);
  }
  if (o->f24 != 0) {
    fns->f2c(o->f24);
  }
  if (o->f20 != 0) {
    fns->f1c(o->f20);
  }
  fns->fc(o);
}
