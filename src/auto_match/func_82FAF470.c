typedef struct { void **vt; } VObj_82FAF470;
typedef struct { unsigned key; VObj_82FAF470 *val; } Ent_82FAF470;
typedef struct Host_82FAF470 Host_82FAF470;
typedef struct { Ent_82FAF470 *begin; Ent_82FAF470 *end; } Vec_82FAF470;
struct Host_82FAF470 {
  void (**vt)(void *);
  char pad[0x7c - 4];
  Vec_82FAF470 v;
};
extern int fn_82FAF408(Vec_82FAF470 *v, unsigned key);
static VObj_82FAF470 **get_(Ent_82FAF470 *it, Ent_82FAF470 *end) { int f = it != end; return f ? &it->val : 0; }

int fn_82FAF470(Host_82FAF470 *self, unsigned key)
{
  Vec_82FAF470 *v = &self->v;
  Ent_82FAF470 *e;
  VObj_82FAF470 **slot;
  for (e = v->begin; e != v->end && e->key != key; e++) {
  }
  slot = get_(e, v->end);
  if (slot != 0) {
    VObj_82FAF470 *o = *slot;
    ((void (*)(void *, int))o->vt[0x2c / 4])(o, 0);
    fn_82FAF408(v, key);
    self->vt[2](self);
  }
  return 1;
}
