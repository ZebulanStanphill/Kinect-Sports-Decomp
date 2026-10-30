typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;

typedef unsigned __int64 u64;
typedef struct Req_82C27F48 { int p0; unsigned len; u64 pos; } Req_82C27F48;
typedef struct Blk_82C27F48 { Req_82C27F48 *req; int cnt; int a, b; } Blk_82C27F48;
typedef struct Ctx_82C27F48 { char p0[0x20]; u64 pos20; char pq[8]; u64 pos30; int f38; char p1[0x48-0x3c]; void *h48; char p2[0x5c-0x4c]; unsigned rem; u64 pos60; } Ctx_82C27F48;
typedef struct Obj_82C27F48 { char p0[0x2c]; Ctx_82C27F48 *ctx; } Obj_82C27F48;
extern int fn_82C10AD0(void *, int, int, Blk_82C27F48 **);
extern int fn_82C10B28(void *, int, Blk_82C27F48 **);
extern int fn_82C27AC8(Obj_82C27F48 *, Blk_82C27F48 *);
extern int fn_82C27B90(Obj_82C27F48 *, Blk_82C27F48 *);

int fn_82C27F48(Obj_82C27F48 *o, Req_82C27F48 *req)
{
  Ctx_82C27F48 *c = o->ctx;
  Blk_82C27F48 *b = 0;
  int hr;
  if (req->pos != c->pos20 && c->f38 != 0 && req->pos != c->pos30) return 0x80500007;
  hr = fn_82C10AD0(c->h48, 0x1d, 0x10, &b);
  if (hr >= 0) {
    { Blk_82C27F48 *q = b; q->req = 0; q->cnt = 0; q->a = 0; q->b = 0; }
    b->req = req;
    if (c->rem <= req->len) b->cnt++;
    if (req->pos == c->pos20) {
      hr = fn_82C27AC8(o, b);
      if (hr >= 0) {
        unsigned rem = c->rem;
        u64 np = req->len + c->pos20;
        c->pos20 = np;
        if (rem == 0) return hr;
        if (np <= c->pos60) return hr;
        if (rem <= req->len) { c->rem = 0; c->pos60 = rem + c->pos60; return hr; }
        c->pos60 = req->len + c->pos60;
        c->rem = rem - req->len;
        return hr;
      }
    } else {
      hr = fn_82C27B90(o, b);
      if (hr >= 0) { c->pos30 = req->len + c->pos30; return hr; }
    }
  }
  if (b != 0) fn_82C10B28(c->h48, 0x1d, &b);
  return hr;
}
