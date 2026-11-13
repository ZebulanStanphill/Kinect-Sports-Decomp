typedef struct { int type; int pad; __int64 val; } Ent_82CE0BF0;
typedef struct { Ent_82CE0BF0 e[32]; int count; } Obj_82CE0BF0;

int fn_82CE0BF0(Obj_82CE0BF0 *o, int v)
{
  Ent_82CE0BF0 *e = &o->e[o->count];
  e->type = 4;
  e->val = v;
  return o->count++;
}
