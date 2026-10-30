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
typedef struct Rc_8267C5B0 { int cnt; struct Obj_8267C5B0 *owner; } Rc_8267C5B0;
typedef struct Obj_8267C5B0 { char pad[8]; Rc_8267C5B0 *rc; } Obj_8267C5B0;
extern Rc_8267C5B0 *fn_8267BED0(Obj_8267C5B0 *, int, int *);

Rc_8267C5B0 *fn_8267C5B0(Obj_8267C5B0 *param_1)
{
  if (param_1->rc == 0) {
    int a = 2;
    Rc_8267C5B0 *t = fn_8267BED0(param_1, 8, &a);
    Rc_8267C5B0 *n;
    if (t != 0) {
      t->owner = param_1;
      t->cnt = 1;
      n = t;
    } else {
      n = 0;
    }
    param_1->rc = n;
    if (n == 0) {
      return 0;
    }
  }
  param_1->rc->cnt++;
  return param_1->rc;
}
