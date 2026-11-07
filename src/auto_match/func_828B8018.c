typedef struct { unsigned char c; } Tag_828B8018;

typedef struct Elem_828B8018 {
  int key;
  int value;
} Elem_828B8018;

typedef struct Vec_828B8018 {
  Elem_828B8018 *first;
  Elem_828B8018 *last;
  Elem_828B8018 *end;
  Tag_828B8018 alloc;
} Vec_828B8018;

typedef struct Outer_828B8018 {
  int pad0;
  Vec_828B8018 v;
} Outer_828B8018;

extern float fn_828B9180(int key);
extern Elem_828B8018 *fn_828B6DD0(Elem_828B8018 *src, Elem_828B8018 *srcEnd,
                                  Elem_828B8018 *dst, Tag_828B8018 tag);
extern void fn_82231540(Elem_828B8018 *first, Elem_828B8018 *last,
                        Tag_828B8018 *alloc, Tag_828B8018 tag);

static __forceinline unsigned char isDead_828B8018(Elem_828B8018 *e)
{
  unsigned char dead = 0;
  if (fn_828B9180(e->key) <= 0.0f) {
    dead = 1;
  }
  return dead;
}

static __forceinline Elem_828B8018 *erase_828B8018(Vec_828B8018 *v, Elem_828B8018 *it)
{
  Tag_828B8018 t1;
  Tag_828B8018 t2;
  fn_828B6DD0(it + 1, v->last, it, t1);
  fn_82231540(v->last - 1, v->last, &v->alloc, t2);
  v->last--;
  return it;
}

void fn_828B8018(Outer_828B8018 *o)
{
  Elem_828B8018 *it;

  it = o->v.first;
  while (it != o->v.last) {
    if (isDead_828B8018(it)) {
      it = erase_828B8018(&o->v, it);
    } else {
      it++;
    }
  }
}
