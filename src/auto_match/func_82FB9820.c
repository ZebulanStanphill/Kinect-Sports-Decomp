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


struct Q_82FB9820;
struct P_82FB9820;
typedef struct PVT_82FB9820 { void (*dtor)(struct P_82FB9820 *, int); } PVT_82FB9820;
typedef struct QVT_82FB9820 { void *s0, *s4; void (*f8)(struct Q_82FB9820 *, void *); } QVT_82FB9820;
typedef struct P_82FB9820 { PVT_82FB9820 *vt; int pad[18]; void *f4c; } P_82FB9820;
typedef struct Q_82FB9820 { QVT_82FB9820 *vt; } Q_82FB9820;

int fn_82FB9820(P_82FB9820 *param_1, Q_82FB9820 *param_2)
{
  if (param_1->f4c != 0) {
    param_2->vt->f8(param_2, param_1->f4c);
    param_1->f4c = 0;
  }
  param_1->vt->dtor(param_1, 1);
  param_2->vt->f8(param_2, param_1);
  return 1;
}
