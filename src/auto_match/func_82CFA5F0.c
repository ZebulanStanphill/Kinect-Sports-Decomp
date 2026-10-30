struct Dev_82CFA5F0;
struct VT_82CFA5F0 { int p0[3]; char *(*f0c)(void *, struct Dev_82CFA5F0 *); int (*f10)(struct Dev_82CFA5F0 *, unsigned, int); };
struct Dev_82CFA5F0 { struct VT_82CFA5F0 *vt; };
struct O_82CFA5F0 { char p0[8]; struct Dev_82CFA5F0 *dev; unsigned f0c; unsigned f10; int f14; int f18; };
extern void fn_82CFA528(void *);
int fn_82CFA5F0(struct O_82CFA5F0 *o)
{
  char buf[1];
  int total, n, done;
  struct Dev_82CFA5F0 *d;
  if (*o->dev->vt->f0c(buf, o->dev) == 0) return 1;
  fn_82CFA528(o);
  done = 0;
  total = o->f18 - o->f14;
  if (total > 0) {
    do {
      d = o->dev;
      n = d->vt->f10(d, o->f10 + o->f0c, total);
      done = n + done;
      o->f14 = o->f14 + n;
      if (n != total) return done == 0;
    } while (done < total);
  }
  return 0;
}
