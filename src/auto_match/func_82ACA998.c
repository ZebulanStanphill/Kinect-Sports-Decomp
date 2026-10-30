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
typedef struct Rec_82ACA998 {
  char pad[0xc0];
  unsigned int fc0;
} Rec_82ACA998;
typedef struct Host_82ACA998 {
  char pad[0x29c];
  unsigned int count;
  unsigned int f2a0;
  char pad2a4[0x2c4 - 0x2a4];
  void **items;
} Host_82ACA998;
typedef struct A_82ACA998 {
  char pad[0x58];
  unsigned int f58;
} A_82ACA998;
typedef struct B_82ACA998 {
  char pad[0x12];
  unsigned short f12;
} B_82ACA998;
extern unsigned int fn_82ADD198(Host_82ACA998 *, unsigned int);
extern unsigned int fn_82AC8910(unsigned int, unsigned int, unsigned int);
extern Rec_82ACA998 *fn_82ADD600(Host_82ACA998 *, unsigned int);
extern unsigned int fn_82ADD590(Host_82ACA998 *, unsigned int);

unsigned int fn_82ACA998(Host_82ACA998 *h, A_82ACA998 *a, B_82ACA998 *b)
{
  unsigned int r = 0;
  unsigned int i, j, k, n;
  void *e;
  Rec_82ACA998 *rec;

  if (a->f58 != 0 && (i = b->f12) < h->count) {
    do {
      e = h->items[i];
      if (e != 0) {
        if (e != b) {
          return r;
        }
        k = fn_82ADD198(h, i);
        j = fn_82AC8910(a->f58, 0, h->f2a0);
        if (j <= h->count - 1) {
          do {
            if (fn_82ADD198(h, j) == k) {
              rec = fn_82ADD600(h, k);
              n = fn_82ADD590(h, k);
              r = (1 << (((rec->fc0 >> 14) & 0xff) >> (n << 1) & 3)) | r;
              break;
            }
            n = h->count - 1;
            if (j == n) {
              j = (unsigned int)-1;
            } else {
              j = fn_82AC8910(a->f58, j + 1, h->f2a0);
            }
          } while (j <= n);
        }
      }
      i++;
    } while (i < h->count);
  }
  return r;
}
