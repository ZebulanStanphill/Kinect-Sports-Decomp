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
extern int fn_82CE4040();


typedef struct O { char pad[0x14]; unsigned s[2]; } O;
void fn_82D96238(O *o)
{
  int i;
  for (i = 0; i < 2; i++) {
    if (o->s[i] == 0) {
      unsigned u = o->s[1] ^ o->s[0] ^ o->s[i];
      if (u != 0) {
        int t = *(int *)(u + 8);
        if (t != 0) {
          o->s[i] = *(unsigned *)(t + 0x24);
          fn_82CE4040(o->s[i]);
        }
      }
    }
  }
}
