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
typedef struct Item_82C5E340 {
  int kind;      /* +0x0 */
  int src;       /* +0x4 */
  int f08;
  int f0c;
  int f10;
  int f14;
  int f18;
  char pad[0x28];
} Item_82C5E340;
typedef struct Dst_82C5E340 {
  char pad0[0x30];
  Item_82C5E340 items[8];
  int count;
  char pad1[0x8];
  int f25c;
  int f260;
  int f264;
  int f268;
  char pad2[0x4];
} Dst_82C5E340;
typedef struct Src_82C5E340 {
  char pad0[0x25c];
  int f25c;
  int f260;
  int f264;
  int f268;
  char pad1[0x4];
} Src_82C5E340;
typedef struct Ctx_82C5E340 {
  char pad0[0xd78];
  int started;
  char pad1[0xb4];
  long long l30;
  char pad2[0x70];
  Src_82C5E340 * src;
  char pad3[0x8];
  Dst_82C5E340 * dst;
  char pad4[0x14];
  void * s0;
  void * s1;
  void * s2;
  char pad5[0x2c];
  void * d0;
  void * d1;
  void * d2;
  char pad6[0x2ae4];
  int f39f4;
  char pad7[0x60];
  int f3a58;
  char pad8[0x8];
  int f3a64;
  int f3a68;
  int f3a6c;
  int f3a70;
  int f3a74;
  int f3a78;
  char pad9[0x290];
  int f3d0c;
  char pad10[0x14c];
  int f3e5c;
  char pad11[0x1150];
  int f4fb0;
  int f4fb4;
  char pad12[0x8];
  int f4fc0;
  char pad13[0x5bc];
  int f5580;
  char pad14[0x128];
  int f56ac;
  int f56b0;
  int f56b4;
  int f56b8;
} Ctx_82C5E340;
extern void *memcpy(void *, const void *, unsigned int);

void fn_82C5E340(Ctx_82C5E340 *c)
{
  int w0 = c->f3a64;
  int w1 = c->f3a6c;
  int h0 = c->f3a68;
  int h1 = c->f3a70;

  if (c->started == 0 && c->f3d0c == 0) {
    c->started = 1;
    c->dst->f268 = c->src->f268;
    c->dst->f25c = c->src->f25c;
    c->dst->f260 = c->src->f260;
    c->dst->f264 = c->src->f264;
    if (c->f3e5c == 0 || c->f4fc0 != 0) {
      if (c->f5580 == 1 && c->f39f4 > 0 && c->l30 > 1) {
        w0 = c->f56ac + c->f4fb0 * 2;
        w1 = c->f56b0 + c->f4fb0 * 2;
        h0 = c->f56b4 + c->f4fb4 * 2;
        h1 = c->f56b8 + c->f4fb4 * 2;
      }
      memcpy(c->d0, c->s0, w1 * w0);
      memcpy(c->d1, c->s1, h1 * h0);
      memcpy(c->d2, c->s2, h1 * h0);
    } else {
      Dst_82C5E340 *d = c->dst;
      Item_82C5E340 *e = &d->items[d->count];
      d->count = d->count + 1;
      e->kind = 2;
      e->src = (int)c->src;
      e->f0c = c->f3a64;
      e->f10 = c->f3a68;
      e->f08 = c->f3a58;
      e->f14 = c->f3a74;
      e->f18 = c->f3a78;
    }
  }
}
