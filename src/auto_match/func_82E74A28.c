extern int fn_82E74598(void *, unsigned __int64 *, void *);
extern int fn_82E730F8(void *);
extern int fn_82E74818(void *, int, int);

typedef struct Item_82E74A28 {
  int pad[6];
  unsigned __int64 stamp;
} Item_82E74A28;
typedef struct Obj_82E74A28 {
  int pad0[4];
  int f10[0x70];
  unsigned __int64 max;
} Obj_82E74A28;

int fn_82E74A28(Obj_82E74A28 *o, Item_82E74A28 **items, unsigned int n)
{
  unsigned int i;
  int v;
  if (n == 0) {
    return 1;
  }
  if (items == 0) {
    return (int)0x80004003;
  }
  for (i = 0; i < n; i++) {
    Item_82E74A28 *it = items[i];
    unsigned __int64 t = it->stamp;
    if (t > o->max) {
      o->max = t;
    }
    if (fn_82E74598(o->f10, &t, &it) == 0) {
      return (int)0x8000ffff;
    }
  }
  v = fn_82E730F8(o);
  return fn_82E74818(o, v, 0);
}
