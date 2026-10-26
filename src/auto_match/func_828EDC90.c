typedef struct { unsigned __int64 lo, hi; } V16;
typedef struct { int id; int pad; V16 v; } E;
typedef struct { char pad[0x30]; E e[32]; int n; } Obj;

int fn_828EDC90(Obj *o, int id, V16 *v)
{
  if (o->n < 0x20) {
    o->e[o->n].id = id;
    o->e[o->n].v = *v;
    o->n++;
    return 1;
  }
  return 0;
}
