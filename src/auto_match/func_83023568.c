typedef struct Pair_83023568 { unsigned first; unsigned second; } Pair_83023568;
typedef struct Src_83023568 { void (**vt)(void *, Pair_83023568 *); } Src_83023568;
typedef struct Obj_83023568 { char pad[0x34]; struct Src_83023568_v *src; char pad2[0x14]; unsigned char flag; } Obj_83023568;
struct Src_83023568_v { struct { char p[100]; void (*fn)(struct Src_83023568_v *, Pair_83023568 *); } *vt; };

unsigned char fn_83023568(Obj_83023568 *o)
{
  Pair_83023568 p;
  int f;

  o->src->vt->fn(o->src, &p);
  if (o->flag == 0 && (p.first != 0 || p.second != 0)) {
    f = 0;
  } else {
    f = 1;
  }
  o->flag = f;
  return p.second < 2;
}
