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
extern int fn_82A1DDC0();


void fn_82C47550(int param_1)

{
  if (*(int *)(param_1 + 0x5580) == 0) {
    if ((*(unsigned int *)(param_1 + 0xec0) != 0) && (*(unsigned int *)(param_1 + 0xecc) != 0)) {
      fn_82A1DDC0(*(unsigned int *)(param_1 + 0xec0),*(unsigned int *)(param_1 + 0xecc),
                        (unsigned int)*(int *)(param_1 + 0xd4) * (unsigned int)*(int *)(param_1 + 0xcc));
    }
    if ((*(unsigned int *)(param_1 + 0xec4) != 0) && (*(unsigned int *)(param_1 + 0xed0) != 0)) {
      fn_82A1DDC0(*(unsigned int *)(param_1 + 0xec4),*(unsigned int *)(param_1 + 0xed0),
                        (unsigned int)*(int *)(param_1 + 0xd8) * (unsigned int)*(int *)(param_1 + 0xd0));
    }
    if ((*(unsigned int *)(param_1 + 0xec8) != 0) && (*(unsigned int *)(param_1 + 0xed4) != 0)) {
      fn_82A1DDC0(*(unsigned int *)(param_1 + 0xec8),*(unsigned int *)(param_1 + 0xed4),
                        (unsigned int)*(int *)(param_1 + 0xd8) * (unsigned int)*(int *)(param_1 + 0xd0));
    }
    if ((*(unsigned int *)(param_1 + 0xef8) != 0) && (*(unsigned int *)(param_1 + 0xecc) != 0)) {
      fn_82A1DDC0(*(unsigned int *)(param_1 + 0xef8),*(unsigned int *)(param_1 + 0xecc),
                        (unsigned int)*(int *)(param_1 + 0xd4) * (unsigned int)*(int *)(param_1 + 0xcc));
    }
    if ((*(unsigned int *)(param_1 + 0xefc) != 0) && (*(unsigned int *)(param_1 + 0xed0) != 0)) {
      fn_82A1DDC0(*(unsigned int *)(param_1 + 0xefc),*(unsigned int *)(param_1 + 0xed0),
                        (unsigned int)*(int *)(param_1 + 0xd8) * (unsigned int)*(int *)(param_1 + 0xd0));
    }
    if ((*(unsigned int *)(param_1 + 0xf00) != 0) && (*(unsigned int *)(param_1 + 0xed4) != 0)) {
      fn_82A1DDC0(*(unsigned int *)(param_1 + 0xf00),*(unsigned int *)(param_1 + 0xed4),
                        (unsigned int)*(int *)(param_1 + 0xd8) * (unsigned int)*(int *)(param_1 + 0xd0));
    }
  }
  return;
}

