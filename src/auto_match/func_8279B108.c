extern void fn_826C6368(void *);
extern void fn_8267BE38(void *);
typedef struct Ref { int count; } Ref;
typedef struct Pair { void *value; Ref *ref; } Pair;
typedef struct Source { void **value; int *ref; } Source;
void fn_8279B108(Pair *a, Source *b) {
  Ref *old;
  int *p;
  int v;
  *(&a->value) = *b->value;
  p = b->ref;
  v = *p;
  if (v) ++*(int *)v;
  old = a->ref;
  if (old && --old->count == 0) { fn_826C6368(old); fn_8267BE38(old); }
  a->ref = (Ref *)*p;
}
