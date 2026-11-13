typedef struct Node_82FAD390 { int f0; struct Node_82FAD390 *next; int f8; int fc; } Node_82FAD390;
typedef struct Head_82FAD390 { int f0; Node_82FAD390 *first; int f8; } Head_82FAD390;
typedef struct Obj_82FAD390 { int f0; Head_82FAD390 *h; } Obj_82FAD390;

int fn_82FAD390(Obj_82FAD390 *o){ Head_82FAD390 *h = o->h; int acc = 0; int mx = -h->f8; Node_82FAD390 *n = h->first;
  if (n == 0) return mx;
  do {
    int t;
    acc = n->fc + acc;
    t = -(n->f8 + acc);
    if (t > mx) mx = t;
    n = n->next;
  } while (n != 0);
  return mx; }