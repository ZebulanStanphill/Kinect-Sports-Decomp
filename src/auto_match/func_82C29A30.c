typedef struct Rec_82C29A30 {
  unsigned __int64 off;
  unsigned __int64 pad8[2];
  unsigned int size;
  unsigned int size2;
  struct Rec_82C29A30 *self;
  unsigned int pad24[4];
} Rec_82C29A30;
typedef struct Info_82C29A30 { int pad[1]; unsigned int f4; unsigned __int64 f8; } Info_82C29A30;
typedef struct Src_82C29A30 { Info_82C29A30 *info; } Src_82C29A30;
typedef struct Mid_82C29A30 { char pad[8]; Src_82C29A30 *src; } Mid_82C29A30;
typedef struct Dev_82C29A30 {
  char pad[0x10];
  Mid_82C29A30 *mid;
  char pad14[0x14];
  unsigned __int64 limit;
  void *h;
} Dev_82C29A30;
typedef struct Obj_82C29A30 { char pad[0x2c]; Dev_82C29A30 *dev; } Obj_82C29A30;
extern void *memset(void *, int, unsigned int);
extern int fn_82C10AD0(void *, int, int, Rec_82C29A30 **);
extern void fn_82C10B28(void *, int, Rec_82C29A30 **);
extern int fn_82C295B0(Obj_82C29A30 *, unsigned __int64, unsigned int);
extern int fn_82C2A470(Obj_82C29A30 *, Rec_82C29A30 *);

int fn_82C29A30(Obj_82C29A30 *o, unsigned __int64 off, unsigned int size, Rec_82C29A30 **out)
{
  Dev_82C29A30 *d;
  Rec_82C29A30 *r;
  Src_82C29A30 *s;
  unsigned __int64 a;
  unsigned int b;
  int hr;
  int i;

  d = o->dev;
  r = 0;
  if (d->limit > off) {
    return (int)0x80500008;
  }
  a = 0;
  b = 0;
  s = d->mid->src;
  if (s != 0) {
    a = s->info->f8;
    b = s->info->f4;
  }
  if ((unsigned __int64)b + a < (unsigned __int64)size + off) {
    return (int)0x805000d4;
  }
  hr = fn_82C10AD0(d->h, 0x1e, 0x30, &r);
  if (hr >= 0) {
    memset(r, 0, 0x30);
    r->off = off;
    r->size = size;
    r->size2 = r->size;
    r->self = r;
    hr = fn_82C2A470(o, r);
    if (hr >= 0) {
      hr = fn_82C295B0(o, off, size);
      if (hr >= 0) {
        *out = r;
        return hr;
      }
    }
  }
  if (r != 0) {
    fn_82C10B28(d->h, 0x1e, &r);
  }
  return hr;
}
