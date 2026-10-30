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


typedef struct S_82E8D418 {
  char pad0[0x7814];
  int f7814;
  int f7818;
  int f781c;
  int f7820;
  int f7824;
  int f7828;
  int f782c;
  char pad7830[0x10];
  int f7840;
  int f7844;
  int f7848;
  int f784c;
} S_82E8D418;

void fn_82E8D418(S_82E8D418 *s)
{
  int v;
  int t[3];

  if (s->f7848 == s->f7840 && s->f784c == s->f7844) {
    s->f7814 = 0;
  } else {
    s->f7814 = 1;
    s->f7818 = 1;
  }
  s->f7848 = s->f7840;
  s->f7828 = s->f7820;
  s->f782c = s->f7824;
  s->f784c = s->f7844;
}
