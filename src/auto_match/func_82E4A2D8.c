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
extern int fn_82E49FA8();
extern void *memcpy(void *, const void *, unsigned int);

typedef struct {
  char pad0[0x20];
  uint total;      /* 0x20 */
  char pad24[0x18];
  char *dst;       /* 0x3c */
  uint max;        /* 0x40 */
  int pad44;
  char *src;       /* 0x48 */
  int pad4c;
  int pad50;
  uint offset;     /* 0x54 */
} Buf;

int fn_82E4A2D8(char *param_1, uint *out, Buf *b)
{
  int hr;
  uint n;

  hr = 0;
  if (out == 0 || b == 0) {
    hr = 0x80070057;
  }
  else {
    *out = b->total;
    if (b->src != b->dst) {
      if (b->total > b->offset) {
        n = b->total - b->offset;
        memcpy(b->dst, b->src + b->offset, n < b->max ? n : b->max);
        if (*(void **)(param_1 + 0xb8) == 0) {
          hr = 0xc00d36bb;
          goto done;
        }
        fn_82E49FA8(*(void **)(param_1 + 0xb8), b->src);
        n = b->total - b->offset;
        *out = n < b->max ? n : b->max;
      }
      else {
        *out = 0;
      }
    }
    b->src = 0;
  }
done:
  return hr;
}
