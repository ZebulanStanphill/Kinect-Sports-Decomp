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
typedef struct Ent_82F70678 {
  int key;
  int val;
} Ent_82F70678;
extern Ent_82F70678 lbl_82169498[];

int fn_82F70678(int param_1)
{
  unsigned int i;

  for (i = 0; i < 0x16; i++) {
    if (param_1 == lbl_82169498[i].key) {
      return lbl_82169498[i].val;
    }
  }
  return 0;
}
