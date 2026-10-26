extern void fn_823B3D90(int, int);

typedef struct { int key; int val; int pad; } Entry;
typedef struct { Entry *begin; Entry *end; } Vec;

void fn_823B3FE0(Vec *v, int *key)
{
  Entry *p = v->begin;
  Entry *end = v->end;
  for (; p != end; p++) {
    fn_823B3D90(p->val, p->key == *key);
  }
}
