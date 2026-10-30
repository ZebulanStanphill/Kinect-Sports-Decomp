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
extern int fn_828E9D90(void *);
extern int fn_828E9DA8(void *);
extern int fn_828E9FF8(void *, int);

typedef struct Obj_828ABCB8 { char pad[8]; char base; char pad2[3]; int count; } Obj_828ABCB8;

void fn_828ABCB8(Obj_828ABCB8 *param_1, void *param_2, char *param_3)
{
  int n = param_1->count;
  int avail = fn_828E9DA8(param_2);
  int used = fn_828E9D90(param_2);
  int r;
  if (n <= avail - used) {
    r = fn_828E9FF8(param_2, n);
  }
  else {
    r = 0;
  }
  if (param_3 != 0) {
    *param_3 = param_1->base + r;
  }
}
