typedef struct Ent_82674930 { unsigned int first; unsigned int second; int count; } Ent_82674930;
typedef struct Obj_82674930 { char pad[0x28]; Ent_82674930 *begin; Ent_82674930 *end; } Obj_82674930;
extern unsigned int fn_8251F718(unsigned int *);
extern int fn_825200A8(unsigned int *, Ent_82674930 *);
extern void fn_82835208(void *, Ent_82674930 *);

void fn_82674930(Obj_82674930 *o, unsigned int *key)
{
  Ent_82674930 *e;
  Ent_82674930 tmp;
  for (e = o->begin; e != o->end; e++) {
    if (fn_825200A8(key, e) != 0) {
      e->count++;
      return;
    }
  }
  tmp.first = *key;
  tmp.count = 1;
  tmp.second = fn_8251F718(key);
  fn_82835208(&o->begin, &tmp);
}
