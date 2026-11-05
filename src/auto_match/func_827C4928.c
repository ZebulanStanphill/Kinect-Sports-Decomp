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
typedef struct { int w0; int w1; int bits; int cnt; int owner; } Rd_827C4928;
typedef struct { int pad[3]; int bits; int cnt; char pad1[0x14]; unsigned left; } Ctx_827C4928;
typedef struct {
  char pad0[0x18];
  int *state;
  char pad1c[0xe0];
  unsigned f_fc;
  char pad100[0x40];
  int f_140;
  char pad144[0x34];
  int f_178;
  char pad17c[0x1c];
  Ctx_827C4928 *ctx;
} Obj_827C4928;
extern unsigned char fn_827C3A38(Rd_827C4928 *, int, int, int);
extern unsigned char fn_827C43E0();
int fn_827C4928(Obj_827C4928 *p, unsigned short **out)
{
  int sh = p->f_178;
  Ctx_827C4928 *c = p->ctx;
  int mask;
  Rd_827C4928 s;
  int bits, cnt;
  int i;
  mask = 1 << sh;
  if (p->f_fc != 0 && c->left == 0 && fn_827C43E0() == 0) {
    return 0;
  }
  i = 0;
  s.owner = (int)p;
  s.w0 = p->state[0];
  s.w1 = p->state[1];
  bits = c->bits;
  cnt = c->cnt;
  if (p->f_140 > 0) {
    do {
      unsigned short *dst = out[i];
      if (cnt < 1) {
        if (fn_827C3A38(&s, bits, cnt, 1) == 0) {
          return 0;
        }
        bits = s.bits;
        cnt = s.cnt;
      }
      cnt--;
      if (((bits >> cnt) & 1) != 0) {
        *dst = *dst | mask;
      }
      i++;
      
    } while (i < p->f_140);
  }
  p->state[0] = s.w0;
  p->state[1] = s.w1;
  c->bits = bits;
  c->cnt = cnt;
  c->left = c->left - 1;
  return 1;
}
