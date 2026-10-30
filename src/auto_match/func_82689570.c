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
extern int fn_82670230(int);


typedef struct VT_82689570 { int pad[12]; void (*f30)(void *, void *); } VT_82689570;
typedef struct Inner_82689570 { VT_82689570 *vt; } Inner_82689570;
typedef struct Obj_82689570 { int pad; int inner; } Obj_82689570;

static Obj_82689570 *sel_(int c, Obj_82689570 *p) { return c ? p : 0; }

void fn_82689570(Obj_82689570 *param_1, void *param_2, int param_3)
{
  int p = param_1->inner;
  if (p != 0 && param_3 == 2) {
    ((Inner_82689570 *)p)->vt->f30((void *)p, sel_((unsigned)param_1 - 8 != 0, param_1));
    if ((unsigned)param_1->inner != 0) {
      fn_82670230(param_1->inner);
    }
    param_1->inner = 0;
  }
}
