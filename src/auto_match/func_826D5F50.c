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
typedef struct { char pad0[0x40]; void *(*f40)(void *); } VT_826D5F50;
typedef struct { VT_826D5F50 *vt; } Obj_826D5F50;
typedef struct { char pad[0x14]; void *heap; } Ctx_826D5F50;
extern void *fn_8267B890(void *, int, int);
extern void *fn_826D4148(void *, int, int, void *, void *, void *, int);

void *fn_826D5F50(int param_1, Obj_826D5F50 *self, int *param_3, int param_4)
{
  Ctx_826D5F50 *ctx;
  void *mem;
  int arg;

  ctx = (Ctx_826D5F50 *)self->vt->f40(self);
  mem = fn_8267B890(ctx->heap, 0x1d8, 0);
  if (mem != 0) {
    arg = *param_3;
    return fn_826D4148(mem, param_1, param_4, ctx, self, &arg, 0);
  }
  return 0;
}
