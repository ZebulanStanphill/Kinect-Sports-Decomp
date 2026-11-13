extern int fn_8277E590();


typedef struct { int a; int b; } Pair_8277F2F0;
typedef struct { char pad[0x104]; int cnt; char pad2[0xc]; int x; int y; } Obj_8277F2F0;

int fn_8277F2F0(Obj_8277F2F0 *o, float *p)
{
  if (p[1] > *(float *)&o->y || p[0] > *(float *)&o->x) {
    o->x = *(int *)&p[0];
    o->y = *(int *)&p[1];
    fn_8277E590(&o->cnt, &o->x);
  }
  return o->cnt - 1;
}
