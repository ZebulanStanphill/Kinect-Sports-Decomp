extern void *memmove(void *, const void *, unsigned);

typedef struct Vec_8239A928 {
  unsigned int *first;
  unsigned int *last;
} Vec_8239A928;

typedef struct Obj_8239A928 {
  char pad[0x1b4];
  Vec_8239A928 items;    /* 0x1b4 */
  char pad1bc[0x1d4 - 0x1bc];
  Vec_8239A928 removed;  /* 0x1d4 */
} Obj_8239A928;

static __forceinline void Erase(Vec_8239A928 *v, unsigned int *p)
{
  unsigned int *next = p + 1;
  memmove(p, next, (v->last - next) * 4);
  v->last--;
}

static __forceinline int NotEnd(unsigned int *it, unsigned int *end)
{
  if (it != end)
    return 1;
  return 0;
}

/* removes each entry of the removed list from the items list, then clears
   the removed list (erase(begin(), end()) inlined) */
void fn_8239A928(Obj_8239A928 *self)
{
  Vec_8239A928 *r = &self->removed;
  unsigned int *it = r->first;
  unsigned int *end = r->last;
  Vec_8239A928 *v;
  unsigned int *f;

  for (; NotEnd(it, end); it++) {
    unsigned int val = *it;
    unsigned int *last = self->items.last;
    unsigned int *p = self->items.first;
    for (; p != last; p++)
      if (*p == val)
        break;
    Erase(&self->items, p);
  }
  v = &self->removed;
  f = v->first;
  if (f != v->last) {
    unsigned int *l = v->last;
    unsigned n = (v->last - l) * 4;
    memmove(f, l, n);
    v->last = f + (n >> 2);
  }
}
