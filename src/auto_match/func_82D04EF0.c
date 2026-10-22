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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CF68D0();

typedef struct { char *data; int len; unsigned int cap; } Str;

void fn_82D04EF0(Str *s, int src, int n)
{
  int need = n + 1;
  int heap = *(int *)(fn_82CE5410() + 0xc);
  int cap = s->cap & 0x3fffffff;
  if (cap < need) {
    int nc = cap * 2;
    fn_82CE6310(heap, s, need < nc ? nc : need, 1);
  }
  s->len = need;
  s->data[n] = 0;
  fn_82CF68D0(s->data, src, n);
}
