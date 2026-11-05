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
typedef struct Obj_82C29638 { char pad[0x2c]; Ctx *ctx; } Obj;
typedef struct Rec { Item *item; int cnt; int a, b; } Rec;
extern int fn_82C10AD0(int, int, int, Rec **);
extern void fn_82C10B28(int, int, Rec **);
extern int fn_82C29198(Obj *, Rec *);

int fn_82C29638(Obj *o, Item *it)
{
  Ctx *c = o->ctx;
  Rec *r = 0;
  int hr;
  if (it->id != c->pos)
    return 0x80500007;
  hr = fn_82C10AD0(c->handle, 0x1e, 0x10, &r);
  if (hr >= 0) {
    Rec *q = r;
    q->item = 0;
    q->cnt = 0;
    q->a = 0;
    q->b = 0;
    r->item = it;
    if (c->rem <= it->len)
      r->cnt = r->cnt + 1;
    hr = fn_82C29198(o, r);
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
  if (r != 0)
    fn_82C10B28(c->handle, 0x1e, &r);
  return hr;
}
