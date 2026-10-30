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
typedef struct Ctx_827C73F8 { char pad[0xe4]; int count; char pad2[0x44]; int flag; } Ctx_827C73F8;
typedef struct Obj_827C73F8 {
  int p0, p1, p2;
  unsigned char started;
  unsigned char *next;
  unsigned free;
  int f18;
  int f1c;
  Ctx_827C73F8 *ctx;
  int arr[7];
} Obj_827C73F8;
extern void fn_827C70D0(Obj_827C73F8 *);
extern void fn_827C7150(Obj_827C73F8 *, int, int);
extern void fn_827C7348(void);

void fn_827C73F8(Obj_827C73F8 *o, int c)
{
  fn_827C7348();
  if (o->started == 0) {
    fn_827C7150(o, 0x7f, 7);
    o->f18 = 0;
    o->f1c = 0;
    *o->next = 0xff;
    o->next++;
    if (--o->free == 0) fn_827C70D0(o);
    *o->next = (unsigned char)(c - 0x30);
    o->next++;
    if (--o->free == 0) fn_827C70D0(o);
  }
  if (o->ctx->flag == 0) {
    int i;
    for (i = 0; i < o->ctx->count; i++) o->arr[i] = 0;
  } else {
    o->arr[5] = 0;
    o->arr[6] = 0;
  }
}
