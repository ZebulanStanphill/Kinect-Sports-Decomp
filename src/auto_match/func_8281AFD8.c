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
extern void fn_8281B938(int, int, int, int, int, int);

void fn_8281AFD8(int param_1, int param_2, int param_3)
{
  unsigned short s;
  int base;
  int idx;
  int ent;

  s = *(unsigned short *)(param_1 + 0x108);
  base = *(int *)(param_1 + 0x7c);
  if (s == 0xffff) {
    s = *(unsigned short *)(param_1 + 0x84);
  }
  if ((short)s != -1) {
    do {
      idx = (short)s;
      s = *(unsigned short *)(idx * 0x40 + base + 0x2c);
    } while (s != 0xffff);
    for (; idx != -1; idx = *(short *)(ent + 0x2e)) {
      ent = idx * 0x40 + base;
      if ((*(unsigned char *)(ent + 0x36) & 1) != 0) {
        fn_8281B938(param_2, param_1, *(int *)(ent + 0x3c), *(int *)(ent + 0x28), *(int *)(ent + 0x38), 0);
      } else {
        fn_8281B938(param_3, param_1, *(int *)(ent + 0x20), *(int *)(ent + 0x24), 0, 1);
      }
    }
  }
}
