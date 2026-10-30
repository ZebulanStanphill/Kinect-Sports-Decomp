typedef struct Str_82867210 { int v[8]; } Str_82867210;
typedef struct Obj_82867210 { char pad[0x64]; int sub; char pad2[0x44c]; int tree; unsigned end; } Obj_82867210;
extern void fn_828648B8(Str_82867210 *);
extern Str_82867210 *fn_8223B688(Str_82867210 *, Str_82867210 *);
extern void fn_82230300(Str_82867210 *, int, int);
extern unsigned fn_828647D8(void *);
extern unsigned *fn_8286A2D0(void *, void *, unsigned *);
extern int fn_8286A080(void *, unsigned);
extern void fn_82230110(Str_82867210 *, const char *);
extern void *fn_82868378(void);
extern void fn_8286DA10(void *, Str_82867210 *, int);

unsigned fn_82867210(Obj_82867210 *o, void *name)
{
  Str_82867210 d, b, c, a;
  unsigned itbuf;
  unsigned key;
  unsigned *it;
  unsigned v;
  int r;
  unsigned res;
  Str_82867210 *p;
  void *q;
  fn_828648B8(&a);
  fn_8223B688(&b, &a);
  fn_82230300(&a, 1, 0);
  key = fn_828647D8(name);
  it = fn_8286A2D0(&itbuf, &o->tree, &key);
  if (*it != o->end) {
    v = fn_828647D8((char *)*it + 0x10);
    r = fn_8286A080(&o->sub, v);
    if (r != 1) {
      fn_82230110(&c, "m_lowLevelIOSystem.UnloadFilePackage(...)");
      p = fn_8223B688(&d, &c);
      fn_8286DA10(fn_82868378(), p, r);
      fn_82230300(&c, 1, 0);
    } else {
      goto done;
    }
  }
  res = 0xa00a0000;
  goto out;
done:
  res = 0x200a0000;
out:
  fn_82230300(&b, 1, 0);
  return res;
}
