typedef struct Ent_82FB2380 { unsigned int key; unsigned int val; } Ent_82FB2380;
typedef struct Vec_82FB2380 { Ent_82FB2380 *first; Ent_82FB2380 *last; unsigned int cap; } Vec_82FB2380;
typedef struct Obj_82FB2380 { char pad[0xb8]; Vec_82FB2380 v; } Obj_82FB2380;
extern unsigned char fn_83037EB8(Vec_82FB2380 *, int);

static unsigned int *get(Ent_82FB2380 *it, Ent_82FB2380 *end) { int f = it != end; return f ? &it->val : 0; }

int fn_82FB2380(Obj_82FB2380 *param_1, unsigned int param_2, Ent_82FB2380 *param_3)
{
  unsigned int *pi;
  unsigned int i = 0;
  Vec_82FB2380 *v = &param_1->v;
  unsigned int *slot;
  unsigned int key;
  unsigned int idx;
  Ent_82FB2380 *n;
  Ent_82FB2380 *first;
  Ent_82FB2380 *last;

  v->last = v->first;
  if (param_2 != 0) {
    pi = (unsigned int *)param_3 - 1;
    do {
      first = v->first;
      last = v->last;
      key = pi[1];
      {
        Ent_82FB2380 *e;
        for (e = first; e != last && e->key != key; e++) {
        }
        slot = get(e, last);
      }
      if (slot == 0) {
        idx = last - first;
        if ((!(idx < v->cap) && fn_83037EB8(v, 8) == 0) || !(idx < v->cap)) {
          return 2;
        }
        n = v->last;
        v->last = n + 1;
        if (n == 0) {
          return 2;
        }
        slot = &n->val;
        n->key = key;
        if (slot == 0) {
          return 2;
        }
      }
      pi += 2;
      i++;
      *slot = *pi;
    } while (i < param_2);
  }
  return 1;
}
