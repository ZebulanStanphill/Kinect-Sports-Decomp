typedef struct Item_83082708 { char pad[0xc]; unsigned c; } Item_83082708;
typedef struct Obj_83082708 Obj_83082708;
typedef struct { void *f0, *f4, *f8; void (*fc)(Obj_83082708 *, unsigned, Item_83082708 *); } VT_83082708;
struct Obj_83082708 { VT_83082708 *vt; };

void fn_83082708(Obj_83082708 *o, Item_83082708 **a, Item_83082708 **b)
{
  int d;
  if (*a != 0) {
    d = (char *)b - (char *)a;
    do {
      Item_83082708 *x = *(Item_83082708 **)((char *)a + d);
      if (x == 0) return;
      if ((*a)->c != 0) o->vt->fc(o, (*a)->c, x);
      a++;
    } while (*a != 0);
  }
}
