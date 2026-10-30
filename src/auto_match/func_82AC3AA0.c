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
typedef struct Ent_82AC3AA0 {
  unsigned int a;
  unsigned int b;
  unsigned int c;
} Ent_82AC3AA0;
typedef struct Ctx_82AC3AA0 {
  char pad[0x20];
  unsigned int limit;
} Ctx_82AC3AA0;
extern int fn_82AC39C0(Ent_82AC3AA0 *, int, Ctx_82AC3AA0 *);

int fn_82AC3AA0(Ent_82AC3AA0 *tbl, int idx, int flag, Ctx_82AC3AA0 *ctx)
{
  Ent_82AC3AA0 *e = tbl + idx;
  unsigned int a = e->a;
  unsigned int b;
  unsigned int f[4];
  unsigned int *p;
  int i;
  int r;

  if ((a & 0x40000) == 0 && (a & 0x800) == 0 &&
      ((a >> 12) & 0x3f) <= ctx->limit && ((a >> 5) & 0x3f) <= ctx->limit) {
    b = e->b;
    f[0] = b & 7;
    f[1] = (b >> 3) & 7;
    f[2] = (b >> 6) & 7;
    f[3] = (b >> 9) & 7;
    if ((a & 0x80000) != 0 && ((b = tbl[idx].b) & 0x4000) == 0 && (b & 0xc00000) == 0) {
      for (i = 0, p = f; i < 4; i++, p++) {
        if (*p == 6) {
          return (int)0x80004005;
        }
      }
      if ((a & 0x6000000) != 0x6000000 && ((b & 0x40000000) == 0 || flag != 0)) {
        r = fn_82AC39C0(tbl, idx, ctx);
        return (r >> 31) & r;
      }
    }
  }
  return (int)0x80004005;
}
