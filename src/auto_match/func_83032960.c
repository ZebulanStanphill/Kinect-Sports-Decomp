typedef struct { void **vt; } VObj_83032960;
typedef struct { unsigned key; VObj_83032960 *val; } Ent_83032960;
typedef struct Host_83032960 Host_83032960;
typedef struct { Ent_83032960 *begin; Ent_83032960 *end; } Vec_83032960;
struct Host_83032960 {
  void (**vt)(void *);
  char pad[0x48 - 4];
  Vec_83032960 v;
};
extern int fn_82FAF408(Vec_83032960 *v, unsigned key);
static VObj_83032960 **get_(Ent_83032960 *it, Ent_83032960 *end) { int f = it != end; return f ? &it->val : 0; }

int fn_83032960(Host_83032960 *self, unsigned key)
{
  Vec_83032960 *v = &self->v;
  Ent_83032960 *e;
  VObj_83032960 **slot;
  for (e = v->begin; e != v->end && e->key != key; e++) {
  }
  slot = get_(e, v->end);
  if (slot != 0) {
    VObj_83032960 *o = *slot;
    ((void (*)(void *, int))o->vt[0x110 / 4])(o, 0);
    fn_82FAF408(v, key);
    self->vt[2](self);
  }
  return 1;
}
