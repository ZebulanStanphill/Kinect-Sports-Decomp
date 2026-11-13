/* Resets two floats and clears the vector<Pair> at +8 (erase(begin(), end()) inlined). */
typedef struct Pair_824E0A60 { int a; int b; } Pair_824E0A60;
typedef struct Vec_824E0A60 { Pair_824E0A60 *first; Pair_824E0A60 *last; } Vec_824E0A60;
typedef struct Obj_824E0A60 {
  char pad0[8];
  Vec_824E0A60 items;
  char pad10[8];
  float f18;
  float f1c;
} Obj_824E0A60;

static __forceinline Pair_824E0A60 *copy_824E0A60(Pair_824E0A60 *s, Pair_824E0A60 *e, Pair_824E0A60 *d)
{
  for (; s != e; s++, d++) {
    *d = *s;
  }
  return d;
}

static __forceinline void destroy_824E0A60(Pair_824E0A60 *p, Pair_824E0A60 *e)
{
  for (; p != e; p++)
    ;
}

static __forceinline void erase_824E0A60(Vec_824E0A60 *v, Pair_824E0A60 *first, Pair_824E0A60 *last)
{
  if (first != last) {
    Pair_824E0A60 *p = copy_824E0A60(last, v->last, first);
    destroy_824E0A60(p, v->last);
    v->last = p;
  }
}

static __forceinline void clear_824E0A60(Vec_824E0A60 *v) { erase_824E0A60(v, v->first, v->last); }
void fn_824E0A60(Obj_824E0A60 *o)
{
  o->f1c = 0.0f;
  o->f18 = 0.0f;
  clear_824E0A60(&o->items);
}
