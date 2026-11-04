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
extern int fn_82E50CB8();
extern int fn_82E50F10();
typedef struct I I;
typedef struct { int f0; void (*AddRef)(I *); void (*Release)(I *); } IVT;
struct I { IVT *vt; };
typedef struct { char pad[0x60]; I *obj; } S;
int fn_82E513A0(S *param_1, I *param_2)
{
  I *o;
  fn_82E50CB8((char *)param_1 + 100);
  o = param_1->obj;
  if (o != 0) {
    o->vt->Release(o);
    param_1->obj = 0;
  }
  if (param_2 != 0) {
    param_1->obj = param_2;
    param_2->vt->AddRef(param_2);
  } else {
    param_1->obj = 0;
  }
  fn_82E50F10((char *)param_1 + 100);
  return 0;
}
