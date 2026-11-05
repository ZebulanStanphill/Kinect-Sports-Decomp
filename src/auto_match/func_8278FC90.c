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
extern void *memmove(void *, const void *, unsigned int);

typedef struct WStr_8278FC90 {
  unsigned short *p;
  unsigned int size;
} WStr_8278FC90;

void fn_8278FC90(WStr_8278FC90 *s, unsigned int pos, unsigned int n)
{
  if (pos < s->size) {
    if (pos + n >= s->size) {
      s->size = pos;
    } else {
      memmove(s->p + pos, s->p + (pos + n), (s->size - pos - n) * 2);
      s->size = s->size - n;
    }
  }
}
