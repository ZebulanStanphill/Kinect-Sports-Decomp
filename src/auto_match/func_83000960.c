typedef struct Info { char pad[0xc]; int id; char pad2[0x2c]; unsigned char kind; } Info;
typedef struct Item { int key; Info *info; } Item;
typedef struct Vec { Item *begin; Item *end; } Vec;
typedef struct Self { struct SelfVt *vt; char pad[0x50]; Vec *items; } Self;
typedef struct SelfVt { void *s[50]; void (*f)(Self *, int, int, int); } SelfVt;
void fn_83000960(Self *self, int a, int b) {
  Item *it;
  if (self->items != 0) {
    for (it = self->items->begin; it != self->items->end; it++) {
      if (it->info->kind != 0xff) self->vt->f(self, it->info->id, a, b);
    }
  }
}
