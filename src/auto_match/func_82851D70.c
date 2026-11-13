extern void fn_82817C98(int, int *);
extern int fn_82818308(void *, int, int, int *);

typedef struct {
  char pad[0xfc];
  int out;
  void *src;
} Obj_82851D70;

int fn_82851D70(Obj_82851D70 *o, int p2)
{
  int a = 0;
  int b;
  unsigned r = (unsigned)o->src;
  if (r != 0) {
    r = fn_82818308((void *)r, p2, 0, &b);
    if ((int)r == 0) {
      o->out = 0;
    } else {
      fn_82817C98(b, &a);
      r = 1;
      o->out = a;
    }
  }
  return r;
}
