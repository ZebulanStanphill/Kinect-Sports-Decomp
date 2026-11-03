typedef struct Itf_82D48480 Itf_82D48480;
typedef struct { void *s[11]; int (*f2c)(Itf_82D48480 *); } ItfVT_82D48480;
struct Itf_82D48480 { ItfVT_82D48480 *vt; };
typedef struct Obj_82D48480 { char pad[0x44]; Itf_82D48480 **items; int count; } Obj_82D48480;

int fn_82D48480(Obj_82D48480 *o)
{
  int sum = 0;
  int i = 0;
  if (0 < o->count) {
    do {
      sum += o->items[i]->vt->f2c(o->items[i]);
      i++;
    } while (i < o->count);
  }
  return sum;
}
