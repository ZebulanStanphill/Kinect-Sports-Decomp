typedef struct Find_82E16040 {
  int f0, f4, f8;
  unsigned int *list;
  int f10;
  int init;
} Find_82E16040;
extern int fn_82CEAC20(unsigned int);
extern int fn_82CFBBF0(int, int);
extern void fn_82E0F0E0(unsigned int *, int);

unsigned int fn_82E16040(Find_82E16040 *o, int key)
{
  int i;
  if (o->init == 0) {
    fn_82E0F0E0(o->list, o->f10);
    o->init = 1;
  }
  for (i = 0; o->list[i] != 0; i++) {
    if (fn_82CFBBF0(key, fn_82CEAC20(o->list[i])) == 0) {
      return o->list[i];
    }
  }
  return 0;
}
