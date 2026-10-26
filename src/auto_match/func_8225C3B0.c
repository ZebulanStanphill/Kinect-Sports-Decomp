extern void *memmove(void *, const void *, unsigned int);
extern unsigned int fn_823AB478(void *);

typedef struct { void **first; void **last; } Vec;
typedef struct { int pad; Vec *vec; } Obj;

void fn_8225C3B0(Obj *o, unsigned int id)
{
  Vec *v = o->vec;
  void **it;

  for (it = v->first; it != v->last; it++) {
    if (fn_823AB478(*it) == id) {
      void **next = it + 1;
      memmove(it, next, (v->last - next) * sizeof(void *));
      v->last--;
      return;
    }
  }
}
