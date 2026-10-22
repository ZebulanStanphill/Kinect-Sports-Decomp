typedef unsigned int size_t;
void *memmove(void *dst, const void *src, size_t n);

typedef struct Obj Obj;
typedef struct {
  void (*dtor)(Obj *self, int flags);
  void *f4;
  void *f8;
  void *fc;
  void *f10;
  void *f14;
  int (*update)(Obj *self, __int64 a, __int64 b);
} ObjVtbl;
struct Obj { ObjVtbl *vtbl; };

typedef struct {
  int f0;
  Obj **begin;
  Obj **end;
} Vec;

void fn_82494A40(Vec *v, __int64 a, __int64 b)
{
  Obj **it;
  Obj **next;
  Obj *o;

  it = v->begin;
  if (it != v->end) {
    next = it + 1;
    do {
      if ((*it)->vtbl->update(*it, a, b) == 0) {
        o = *it;
        if (o != 0) {
          o->vtbl->dtor(o, 1);
        }
        memmove(it, next, (v->end - next) * sizeof(Obj *));
        v->end--;
      }
      else {
        it++;
        next++;
      }
    } while (it != v->end);
  }
}
