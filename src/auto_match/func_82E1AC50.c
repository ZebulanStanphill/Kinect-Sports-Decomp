typedef struct Ent { int *ptr; int next; } Ent;
typedef struct Obj { Ent *ents; int pad[2]; int hash; } Obj;
extern int fn_82CEA280(int *h, int key, int start);
extern void fn_82E17300(Obj *o, int key);

void fn_82E1AC50(Obj *o, int key, int val)
{
  int i;
  for (i = fn_82CEA280(&o->hash, key, -1); i != -1; i = o->ents[i].next) {
    *o->ents[i].ptr = val;
  }
  fn_82E17300(o, key);
}
