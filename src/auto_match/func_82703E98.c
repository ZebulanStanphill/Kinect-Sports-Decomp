extern int fn_8267BE38(void *);
extern int fn_826FD840(void *, int);
extern int fn_82700380(void *);

typedef struct Obj_82703E98 {
  char pad[0xab8];
  void **items;
  unsigned int count;
} Obj_82703E98;

void fn_82703E98(Obj_82703E98 *o)
{
  unsigned int n = o->count;
  if (n != 0) {
    int off = 0;
    unsigned int cnt = n;
    do {
      void *it = *(void **)(off + (int)o->items);
      if (it != 0) {
        fn_82700380(it);
        fn_8267BE38(it);
      }
      cnt--;
      off += 4;
    } while (cnt != 0);
  }
  fn_826FD840(&o->items, 0);
}
