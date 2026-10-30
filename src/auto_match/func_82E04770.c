typedef struct Obj_82E04770 Obj_82E04770;
typedef struct Pair_82E04770 { int first; int second; } Pair_82E04770;
typedef struct Entry_82E04770 { int d[4]; } Entry_82E04770;
typedef struct Array_82E04770 {
  int pad0[2];
  Entry_82E04770 *entries;
  int count;
} Array_82E04770;

extern void fn_82CE4040(Obj_82E04770 *o);
extern void fn_82CE4118(Obj_82E04770 *o);
extern void fn_82E077A0(Obj_82E04770 **out, Entry_82E04770 *e, unsigned int key);
extern void fn_83082568(Obj_82E04770 **out, Pair_82E04770 *p);

Obj_82E04770 **fn_82E04770(Obj_82E04770 **out, Array_82E04770 *a, unsigned int key)
{
  Obj_82E04770 *found;
  Pair_82E04770 pair;
  int i;
  if (key != 0) {
    for (i = 0; i < a->count; i++) {
      fn_82E077A0(&found, a->entries + i, key);
      if (found != 0) {
        fn_82CE4040(found);
        *out = found;
        if (found != 0) {
          fn_82CE4118(found);
        }
        return out;
      }
      found = 0;
    }
  }
  pair.first = 0;
  pair.second = 0;
  fn_83082568(out, &pair);
  return out;
}
