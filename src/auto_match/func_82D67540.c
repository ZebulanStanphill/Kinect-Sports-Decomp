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
typedef struct { void *pad[5]; void (*f14)(void *, int, int); } VtA_82D67540;
typedef struct { VtA_82D67540 *vt; } ObjA_82D67540;
typedef struct { void (*f0)(void *, int); } VtB_82D67540;
typedef struct {
  VtB_82D67540 *vt;
  int f4;
  ObjA_82D67540 *owner;
  unsigned short id;
} ObjB_82D67540;

void fn_82D67540(ObjB_82D67540 *param_1, int param_2)
{
  if (param_1->id != 0xffff) {
    param_1->owner->vt->f14(param_1->owner, param_1->id, param_2);
    param_1->id = 0xffff;
  }
  param_1->vt->f0(param_1, 1);
}
