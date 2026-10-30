extern void fn_822673B0(void *);
extern void fn_82267218(void *);
extern void fn_82267750(int, int);
struct O_82267308 { char p0[0x474]; int cnt474; int cnt478; char p1[0x144]; int f5c0; char p2[0x14]; int f5d8; };
void fn_82267308(struct O_82267308 *o, unsigned n)
{
  int old, cur, i;
  if (n >= 4) {
    if (n == 4) {
      old = o->f5d8;
      i = 0;
      cur = o->cnt478 + old;
      o->f5d8 = cur;
      if (cur >= o->cnt474) o->f5d8 = 0;
      if (o->f5d8 != old) {
        if (o->cnt478 > 0) {
          do {
            fn_82267750(o->f5c0, i);
            i++;
          } while (i < o->cnt478);
        }
        fn_82267218(o);
      }
    }
  } else {
    fn_822673B0(o);
  }
}
