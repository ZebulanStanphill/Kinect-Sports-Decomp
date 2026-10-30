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
typedef struct Host_82EE1B38 {
  char pad[0x48];
  char sub[0x254 - 0x48];
  unsigned int count;
} Host_82EE1B38;
extern int fn_82EE1048(void *, unsigned int, unsigned int *);
extern int fn_82EE17C8(Host_82EE1B38 *, unsigned int, unsigned int);

int fn_82EE1B38(Host_82EE1B38 *h, unsigned short *a, unsigned short *b, unsigned short n, unsigned int out)
{
  unsigned short seen;
  unsigned int i;
  unsigned int tmp;
  int hr;
  unsigned short *e;

  if (out != 0) {
    seen = 0;
    i = 0;
    if (h->count > 0) {
      do {
        hr = fn_82EE1048(h->sub, i, &tmp);
        e = (hr >= 0) ? (unsigned short *)tmp : 0;
        if (e == 0) {
          return (int)0xc00d36bb;
        }
        if ((a == 0 || *a == e[1]) && (b == 0 || *b == e[0])) {
          if (seen == n) {
            return fn_82EE17C8(h, i & 0xffff, out);
          }
          seen = seen + 1;
        }
        i++;
      } while (i < h->count);
    }
  }
  return (int)0x80070057;
}
