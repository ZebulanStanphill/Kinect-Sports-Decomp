extern int fn_82C10AD0(void *h, int kind, int size, void *out);
extern int fn_82C10B28(void *h, int kind, void *p);
extern int fn_82C2A470(void *o, void *rec);

typedef struct { char pad[4]; unsigned int base; unsigned __int64 size; } Range_82C284D8;
typedef struct { char pad[8]; Range_82C284D8 **rng; } Src_82C284D8;
typedef struct {
  char pad0[0x10];
  Src_82C284D8 *src;
  char pad1[0x2c];
  unsigned __int64 min;
  void *h;
} Ctx_82C284D8;
typedef struct { char pad[0x2c]; Ctx_82C284D8 *ctx; } Obj_82C284D8;

typedef struct Rec_82C284D8 Rec_82C284D8;
typedef struct { unsigned __int64 a; unsigned __int64 b; } Hdr_82C284D8;
struct Rec_82C284D8 {
  Hdr_82C284D8 h;
  char pad[8];
  unsigned int len;
  unsigned int len2;
  Rec_82C284D8 *self;
};

int fn_82C284D8(Obj_82C284D8 *o, unsigned __int64 off, unsigned int len, Rec_82C284D8 **out)
{
  Ctx_82C284D8 *c = o->ctx;
  Rec_82C284D8 *rec = 0;
  int hr;
  unsigned __int64 sz;
  unsigned int bs;
  Range_82C284D8 **rp;
  if (c->min > off) {
    return 0x80500008;
  }
  sz = 0;
  bs = 0;
  rp = c->src->rng;
  if (rp != 0) {
    Range_82C284D8 *r = *rp;
    sz = r->size;
    bs = r->base;
  }
  if (bs + sz < len + off) {
    return 0x805000d4;
  }
  hr = fn_82C10AD0(c->h, 0x1d, 0x30, &rec);
  if (hr >= 0) {
    { Hdr_82C284D8 *h = &rec->h; h->a = 0; h->b = 0; }
    rec->h.a = off;
    rec->len = len;
    rec->len2 = rec->len;
    rec->self = rec;
    hr = fn_82C2A470(o, rec);
    if (hr >= 0) {
      *out = rec;
      return hr;
    }
  }
  if (rec != 0) {
    fn_82C10B28(c->h, 0x1d, &rec);
  }
  return hr;
}
