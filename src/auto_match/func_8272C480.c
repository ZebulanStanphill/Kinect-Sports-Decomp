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
typedef int (*Fn_8272C480)();
extern int fn_8267C4F0(void *);

void fn_8272C480(int param_1)
{
  int *obj;
  int *sub;
  unsigned int *r;

  obj = (int *)(param_1 - 0xd8);
  obj = (int *)(*(Fn_8272C480 *)(*obj + 0x40))(obj);
  sub = obj + 2;
  r = (unsigned int *)(*(Fn_8272C480 *)(*sub + 0xc))(sub, 3);
  if (r == 0 || r[3] == 0) {
    *(unsigned char *)(param_1 + 8) = *(unsigned char *)(param_1 + 8) & 0xfe;
  } else {
    *(unsigned char *)(param_1 + 8) = *(unsigned char *)(param_1 + 8) | 1;
  }
  if (r != 0) {
    fn_8267C4F0(r);
  }
}
