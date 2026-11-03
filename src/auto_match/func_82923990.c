struct Dev_82923990;
typedef struct VT_82923990 { void (*del)(struct Dev_82923990 *, int); } VT_82923990;
typedef struct Dev_82923990 { VT_82923990 *vt; } Dev_82923990;
typedef struct Ctx_82923990 { Dev_82923990 *a; Dev_82923990 *b; unsigned flags; } Ctx_82923990;
typedef struct Cfg_82923990 { char pad[0x40]; unsigned f40; unsigned f44; unsigned f48; } Cfg_82923990;
extern int fn_82920CF0(Ctx_82923990 *);
extern int fn_82920E80(Ctx_82923990 *);
extern int fn_82920FB8(Ctx_82923990 *);
extern int fn_82921208(Ctx_82923990 *);
extern int fn_82921428(Ctx_82923990 *);
extern int fn_829218D0(Ctx_82923990 *);
extern int fn_82921E70(Ctx_82923990 *);
extern int fn_829221D0(Ctx_82923990 *);
extern int fn_82922A88(Ctx_82923990 *);
extern int fn_82923268(Ctx_82923990 *);
extern int fn_82924FA0(Dev_82923990 *, Dev_82923990 *);
extern Dev_82923990 *fn_8292F660(Cfg_82923990 *);

int fn_82923990(Ctx_82923990 *c, Cfg_82923990 *x, Cfg_82923990 *y, unsigned flags)
{
  int hr;
  Dev_82923990 *na;
  c->flags = flags;
  c->a = 0;
  c->b = 0;
  if ((flags & 0xffff) == 0 || (flags & 0xffff) > 5 || (flags & 0xff800000) != 0) {
    return 0x8876086c;
  }
  y->f48 = flags & 0x200000;
  x->f48 = flags & 0x400000;
  x->f40 = flags & 0x80000;
  x->f44 = flags & 0x100000;
  c->b = fn_8292F660(x);
  if (c->b != 0) {
    na = fn_8292F660(y);
    c->a = na;
    if (na != 0) {
      hr = fn_82924FA0(c->b, na);
      if (hr < 0) goto done;
      if (fn_82920CF0(c) >= 0 || fn_82920E80(c) >= 0 || fn_82920FB8(c) >= 0 || fn_82921208(c) >= 0 ||
          fn_82921428(c) >= 0 || fn_829218D0(c) >= 0 || fn_82921E70(c) >= 0 || fn_829221D0(c) >= 0 ||
          fn_82923268(c) >= 0 || fn_82922A88(c) >= 0) {
        hr = 0;
        goto done;
      }
    }
  }
  hr = 0x80004005;
done:
  if (c->b != 0) {
    c->b->vt->del(c->b, 1);
    c->b = 0;
  }
  if (c->a != 0) {
    c->a->vt->del(c->a, 1);
    c->a = 0;
  }
  return hr;
}
