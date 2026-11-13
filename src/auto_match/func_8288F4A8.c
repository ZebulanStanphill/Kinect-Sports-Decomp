typedef struct VtObj { int *vt; } VtObj;
typedef struct Node_8288F4A8 { int pad[5]; VtObj *obj; } Node_8288F4A8;
typedef struct Sub_8288F4A8 { int head; unsigned end; } Sub_8288F4A8;
typedef struct Map_8288F4A8 { int pad; Sub_8288F4A8 sub; } Map_8288F4A8;
typedef struct Ctx_8288F4A8 { char pad[0x50]; int key; } Ctx_8288F4A8;
typedef struct Pair_8288F4A8 { unsigned *begin; unsigned *end; } Pair_8288F4A8;
extern Map_8288F4A8 *fn_828A12E8(int);
extern Node_8288F4A8 *fn_8288B8B0(int *, void *);
extern int fn_82897620(int, int);
extern void fn_8289B290(int, Ctx_8288F4A8 *, int, int, void *);
extern unsigned char fn_828B5650(void *, void *);

void fn_8288F4A8(int *param_1, Ctx_8288F4A8 *param_2)
{
  char *it = (char *)*param_1;
  char *end = (char *)param_1[1];
  for (; it != end; it += 0x20) {
    Map_8288F4A8 *m = fn_828A12E8(param_2->key);
    Sub_8288F4A8 *s = &m->sub;
    Node_8288F4A8 *lb = fn_8288B8B0(&s->head, it);
    Node_8288F4A8 *tmp[2];
    Node_8288F4A8 **pp;
    tmp[0] = lb;
    if ((unsigned)lb == s->end || fn_828B5650(it, (char *)lb + 0xc) != 0) {
      tmp[1] = (Node_8288F4A8 *)s->end;
      pp = &tmp[1];
    } else {
      pp = &tmp[0];
    }
    if ((unsigned)*pp != m->sub.end) {
      VtObj *o = (*pp)->obj;
      if (o != 0) {
        unsigned r = (*(unsigned (**)(VtObj *))(*(int *)o + 8))(o);
        if (r != 0) {
          int v = fn_82897620(r, *(int *)(it + 8));
          fn_8289B290(v, param_2, 0, 0, it + 0xc);
        }
      }
    }
  }
}
