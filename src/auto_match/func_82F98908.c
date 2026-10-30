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


struct Q_82F98908;
struct P_82F98908;
typedef struct PVT_82F98908 { void (*dtor)(struct P_82F98908 *, int); } PVT_82F98908;
typedef struct QVT_82F98908 { void *s0, *s4; void (*f8)(struct Q_82F98908 *, void *); } QVT_82F98908;
typedef struct P_82F98908 { PVT_82F98908 *vt; int pad[6]; void *f1c; } P_82F98908;
typedef struct Q_82F98908 { QVT_82F98908 *vt; } Q_82F98908;

int fn_82F98908(P_82F98908 *param_1, Q_82F98908 *param_2)
{
  if (param_1->f1c != 0) {
    param_2->vt->f8(param_2, param_1->f1c);
    param_1->f1c = 0;
  }
  param_1->vt->dtor(param_1, 1);
  param_2->vt->f8(param_2, param_1);
  return 1;
}
