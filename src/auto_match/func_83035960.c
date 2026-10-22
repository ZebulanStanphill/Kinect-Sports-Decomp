typedef struct Res Res;
typedef struct ResVtbl { void *f0; void *f4; void (*release)(Res *); } ResVtbl;
struct Res { ResVtbl *vtbl; int x4; int x8; int xc; int x10; };
typedef struct Info { char p0[0x20]; unsigned int x20; } Info;
typedef struct Obj { void *x0; Res *x4; } Obj;

extern Res *fn_82FAB9C0(void *, void *);
extern int fn_83003300(Res *, Info *);
extern char *lbl_832642E0;

static int Compare(Res *res, Info *info)
{
  int r = 2;
  if (info->x20 == 0 || res->x10 == 0) {
    r = 3;
  }
  else if (res->x10 == info->x20) {
    r = 1;
  }
  return r;
}

int fn_83035960(Obj *o, Info *info)
{
  int r;
  Res *res;

  if (o->x4 != 0) {
    return 1;
  }
  r = 1;
  res = fn_82FAB9C0(lbl_832642E0 + 4, o->x0);
  if (res != 0) {
    r = Compare(res, info);
    if (r == 1) {
      o->x4 = res;
      r = fn_83003300(res, info);
      if (r != 1) {
        o->x4 = 0;
      }
    }
    else if (r == 3) {
      r = 1;
    }
    res->vtbl->release(res);
  }
  return r;
}
