typedef struct {
  char pad0[0x24];
  int (*query)(void);
} Glob_83276774;

typedef struct { unsigned int busy; int mode; } Glob_832960A0;
typedef struct { int pad0; unsigned char ready; } Sys_832975B0;
typedef struct { char pad0[0x24]; unsigned int handle; } Res_8249BC10;
typedef struct { int a, b, c, d; } Args_8249BC10;

typedef struct {
  int pad0;
  unsigned int state;
  char pad8[0x70 - 0x8];
  void *ctx;
  int pad74;
  int loaded;
  char pad7c[0x84 - 0x7c];
  int started;
  char pad88[0xd4 - 0x88];
  int id;
  char padd8[0xe0 - 0xd8];
  char req[0x110 - 0xe0];
  Res_8249BC10 *res;
} Obj_8249BC10;

extern Glob_83276774 lbl_83276774;
extern Glob_832960A0 lbl_832960A0;
extern Sys_832975B0 *lbl_832975B0;
extern char lbl_832924B0[];
extern char lbl_83296BC0[];
extern char lbl_83296BD0[];

extern Sys_832975B0 *fn_82250A18(void);
extern void fn_8249B9D0(Obj_8249BC10 *, int);
extern int fn_825129C8(int);
extern void fn_8251CDF8(void *, void *, int, Args_8249BC10 *);
extern int fn_825200A8(void *, void *);
extern int fn_82535298(int *, int, void *, void *);
extern void fn_82536288(int *);
extern int fn_828647D8(void);
extern void fn_82864898(void *);
extern void fn_828648F0(void *, void *);

static Sys_832975B0 *getSys(void)
{
  if (lbl_832975B0 != 0)
    return lbl_832975B0;
  return fn_82250A18();
}

static int query(void)
{
  if (lbl_83276774.query != 0)
    return lbl_83276774.query();
  return 0;
}

void fn_8249BC10(Obj_8249BC10 *o)
{
  switch (o->state) {
  case 0:
    break;
  case 1: {
    unsigned char notReady = getSys()->ready == 0;
    if (notReady & 1) {
      char name[40];
      int h;
      int str;
      unsigned int tmp;
      if (o->res->handle != 0)
        return;
      tmp = fn_825129C8(0);
      o->res->handle = tmp;
      fn_828648F0(name, lbl_832924B0);
      str = fn_828647D8();
      h = o->id;
      h = fn_82535298(&h, str, lbl_83296BC0, lbl_83296BD0);
      fn_82864898(name);
      fn_82536288(&h);
      o->loaded = 1;
    }
    break;
  }
  case 2:
    if (o->started == 0) {
      Args_8249BC10 a;
      a.a = 0;
      a.b = 0;
      a.c = 0;
      fn_8251CDF8(o->ctx, o->req, 0, &a);
      o->started = 1;
    }
    if (o->ctx != 0 && fn_825200A8(o->ctx, o->req) != 0 && query() != 0)
      break;
    if (query() == 0)
      return;
    if (lbl_832960A0.mode == 2)
      return;
    if (lbl_832960A0.busy != 0)
      return;
    fn_8249B9D0(o, 3);
    return;
  default:
    return;
  }
  fn_8249B9D0(o, 2);
}
