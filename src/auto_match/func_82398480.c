typedef struct Sub_82398480 {
  char pad0[8];
  unsigned int count;
} Sub_82398480;
typedef struct {
  Sub_82398480 **arr;
  char pad4[0x10 - 4];
  int idx;
} Item_82398480;
typedef struct {
  char pad0[0x24];
  int f24;
  char pad28[0x114 - 0x28];
  void *f114;
} Entry_82398480;
typedef struct {
  Item_82398480 **first;
  Item_82398480 **last;
} Vec_82398480;
typedef struct {
  char pad0[8];
  Vec_82398480 *vec;
} Obj_82398480;

extern Entry_82398480 *fn_822ABA88(Sub_82398480 *s, unsigned int j);
extern void fn_822C8C08(void *p, const char *s);
extern void fn_82230110(void *s, const char *text);
extern void fn_82230300(void *s, int a, int b);
extern void fn_822E5340(Entry_82398480 *e, void *s);
extern void fn_822E53F8(Entry_82398480 *e, void *s);

void fn_82398480(Obj_82398480 *o)
{
  Vec_82398480 *v;
  Item_82398480 *it;
  Sub_82398480 *s;
  Entry_82398480 *e;
  unsigned int j;
  int i;
  int off;
  char a[32];
  char b[32];

  v = o->vec;
  i = 0;
  if ((((int)v->last - (int)v->first) & ~3) > 0) {
    off = 0;
    do {
      it = *(Item_82398480 **)((char *)v->first + off);
      j = 0;
      s = it->arr[it->idx];
      if (s->count > 0) {
        do {
          e = fn_822ABA88(s, j);
          if (e->f24 == 0) {
            fn_822C8C08(e->f114, "idle_standing");
            fn_82230110(a, "idle_standing");
            fn_822E5340(e, a);
            fn_82230300(a, 1, 0);
            fn_82230110(b, "locomotion_standing");
            fn_822E53F8(e, b);
            fn_82230300(b, 1, 0);
          }
          j = j + 1;
          s = it->arr[it->idx];
        } while (j < s->count);
      }
      v = o->vec;
      i = i + 1;
      off = off + 4;
    } while (i < (((int)v->last - (int)v->first) >> 2));
  }
}
