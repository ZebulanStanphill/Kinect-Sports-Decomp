extern int fn_82DF43E8();
extern int fn_82DF4648(void *);
typedef struct O_82DF46D0 {
  char pad[0x2c];
  unsigned char **items;
  int count;
} O_82DF46D0;

void fn_82DF46D0(O_82DF46D0 *o)
{
  int i;
  int n;
  fn_82DF43E8();
  n = o->count;
  for (i = 0; i < n; i++) {
    o->items[i][12] &= 0xfd;
  }
  fn_82DF4648(o);
}
