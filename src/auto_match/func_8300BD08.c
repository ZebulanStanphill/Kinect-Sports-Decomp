typedef struct { void **vt; } VObj_8300BD08;
typedef struct { unsigned key; VObj_8300BD08 *val; } Ent_8300BD08;
typedef struct Host_8300BD08 Host_8300BD08;
typedef struct { Ent_8300BD08 *begin; Ent_8300BD08 *end; } Vec_8300BD08;
struct Host_8300BD08 {
  void (**vt)(void *);
  char pad[0x48 - 4];
  Vec_8300BD08 v;
};
extern int fn_82FAF408(Vec_8300BD08 *v, unsigned key);
static VObj_8300BD08 **get_(Ent_8300BD08 *it, Ent_8300BD08 *end) { int f = it != end; return f ? &it->val : 0; }

int fn_8300BD08(Host_8300BD08 *self, unsigned key)
{
  Vec_8300BD08 *v = &self->v;
  Ent_8300BD08 *e;
  VObj_8300BD08 **slot;
  for (e = v->begin; e != v->end && e->key != key; e++) {
  }
  slot = get_(e, v->end);
  if (slot != 0) {
    VObj_8300BD08 *o = *slot;
    ((void (*)(void *, int))o->vt[0x2c / 4])(o, 0);
    fn_82FAF408(v, key);
    self->vt[2](self);
  }
  return 1;
}
