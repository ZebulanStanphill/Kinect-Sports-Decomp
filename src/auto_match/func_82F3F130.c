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
extern void fn_82E4FE40(void *);
extern void *fn_82E50BE8(unsigned, int, int, int, int);
extern int fn_82A3F758(void *, unsigned, const unsigned short *);

static int Length(const unsigned short *p, unsigned *out)
{
  int hr = 0;
  unsigned n = 0x7fffffff;
  while (n != 0 && *p != 0) {
    p++;
    n--;
  }
  if (n == 0) {
    hr = 0x80070057;
  } else {
    *out = 0x7fffffff - n;
  }
  return hr;
}

int fn_82F3F130(char *o, const unsigned short *s)
{
  unsigned len = 0;
  unsigned short *buf;
  int hr;
  if (*(void **)(o + 0x54) != 0) {
    fn_82E4FE40(*(void **)(o + 0x54));
  }
  *(void **)(o + 0x54) = 0;
  if (s != 0) {
    hr = Length(s, &len);
    if (hr < 0) return hr;
    len++;
    buf = (unsigned short *)fn_82E50BE8(len <= 0x7fffffff ? len * 2 : 0xffffffff, 0, 0, 0, 0);
    *(unsigned short **)(o + 0x54) = buf;
    if (buf == 0) return 0x8007000e;
    if (len > 0x7fffffff) return 0x80070057;
    hr = fn_82A3F758(buf, len, s);
    if (hr < 0) return hr;
    (*(unsigned short **)(o + 0x54))[len - 1] = 0;
  }
  *(unsigned *)(o + 0x60) = len;
  return 0;
}
