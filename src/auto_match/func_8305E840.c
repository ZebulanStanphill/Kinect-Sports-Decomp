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
typedef struct Vec_8305E840 { char pad[0x2c]; int *data; int count; } Vec_8305E840;
extern void fn_8305E3E8(Vec_8305E840 *, int);

void fn_8305E840(Vec_8305E840 *v, int pos)
{
  int i;

  for (i = pos; i < v->count; i++) {
    v->data[i] = v->data[i + 1];
  }
  fn_8305E3E8(v, v->count - 1);
}
