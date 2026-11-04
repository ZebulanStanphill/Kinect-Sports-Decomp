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
extern int fn_82BE5340(int);
extern int fn_82BE5350(int);
extern int fn_82BE5378(int);
extern int fn_82BF1318(int, unsigned int);

void fn_82BF1430(int param_1, unsigned int param_2)
{
  int it;

  it = param_1 + 0x3c;
  fn_82BE5340(it);
  while (*(int *)(param_1 + 0x44) != 0) {
    if (*(unsigned int *)(fn_82BE5378(it) + 0x18) == param_2) {
      int n = fn_82BE5378(it);
      *(int *)(n + 0x50) = 0;
      *(int *)(n + 0xb0) = 0;
      break;
    }
    fn_82BE5350(it);
  }
  fn_82BF1318(param_1, param_2);
}
