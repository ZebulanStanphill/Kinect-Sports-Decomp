typedef struct Item { void *pad0; unsigned len; unsigned __int64 id; } Item;
typedef struct Ctx {
  char pad[0x20];
  unsigned __int64 pos;
  char pad2[8];
  int handle;
  char pad3[0x10];
  unsigned rem;
  unsigned __int64 limit;
} Ctx;
typedef struct Obj_82C2AB80 { char pad[0x2c]; Ctx *ctx; } Obj;
typedef struct Rec { Item *item; int a, b; } Rec;
extern int fn_82C10AD0(int, int, int, Rec **);
extern void fn_82C10B28(int, int, Rec **);
extern int fn_82C2A750(Obj *, Rec *);

int fn_82C2AB80(Obj *o, Item *it)
{
  Ctx *c = o->ctx;
  Rec *r = 0;
  int hr;
  if (it->id != c->pos) {
    hr = 0x80500007;
  } else {
    hr = fn_82C10AD0(c->handle, 0x1f, 0xc, &r);
    if (hr >= 0) {
      Rec *q = r;
      q->item = 0;
      q->a = 0;
      q->b = 0;
      r->item = it;
      hr = fn_82C2A750(o, r);
      if (hr >= 0) {
        unsigned rem = c->rem;
        unsigned __int64 np = it->len + c->pos;
        c->pos = np;
        if (rem == 0)
          return hr;
        if (np <= c->limit)
          return hr;
        if (rem <= it->len) {
          c->rem = 0;
          c->limit = rem + c->limit;
          return hr;
        }
        c->limit = it->len + c->limit;
        c->rem = rem - it->len;
        return hr;
      }
    }
  }
  fn_82C10B28(c->handle, 0x1f, &r);
  return hr;
}
