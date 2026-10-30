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
extern unsigned char fn_83032FE8(void *);

typedef struct Vt_8300F7D0 { char pad[0x28]; void (*f28)(void *, void *); } Vt_8300F7D0;
typedef struct Obj_8300F7D0 { Vt_8300F7D0 *vt; char pad[0x10]; unsigned flags; } Obj_8300F7D0;
typedef struct Ctx_8300F7D0 { char pad[8]; Obj_8300F7D0 *obj; } Ctx_8300F7D0;

void fn_8300F7D0(void *param_1, Ctx_8300F7D0 *ctx)
{
  unsigned buf[20];
  int v;
  buf[0] = 0;
  v = ctx->obj->flags >> 8;
  if (v == 0x4011 || (v == 0x5011 && fn_83032FE8(ctx->obj) != 0)) {
    ctx->obj->vt->f28(ctx->obj, buf);
  }
}
