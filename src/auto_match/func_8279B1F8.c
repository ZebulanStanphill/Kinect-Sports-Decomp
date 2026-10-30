extern void fn_826C6368(void *);
extern void fn_8267BE38(void *);
typedef struct Ref { int count; } Ref;
typedef struct Pair { void *value; Ref *ref; } Pair;
Pair *fn_8279B1F8(Pair *a, Pair *b) {
  Ref *old; int p;
  a->value = b->value;
  p = (int)b->ref;
  if (p) ++((Ref *)p)->count;
  old = a->ref;
  if (old && --old->count == 0) { fn_826C6368(old); fn_8267BE38(old); }
  a->ref = b->ref;
  return a;
}
