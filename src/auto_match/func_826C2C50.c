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
extern int fn_8267B890(int, int, int);
extern int fn_82695FA0(void *, int);
extern int fn_826BF5B8(void *);
extern int fn_826C2BA8(void *, int, void *, int);
extern int fn_826C3768(void *, int);

typedef struct S1_826C2C50 {
  int a;
  int b;
  unsigned char c;
} S1_826C2C50;

typedef struct Obj_826C2C50 {
  char pad[0x18];
  int *m18;
} Obj_826C2C50;

typedef struct Ctx_826C2C50 {
  char *p;
  unsigned char m4;
} Ctx_826C2C50;

int fn_826C2C50(Obj_826C2C50 *self, Ctx_826C2C50 *ctx, int p3, int p4, int p5)
{
  S1_826C2C50 s;
  unsigned char buf[16];
  int *p;
  int *r;

  s.c = 0;
  s.a = 0;
  s.b = 0;
  buf[0] = 0;
  fn_826C3768(&s, p4);
  fn_82695FA0(buf, p5);
  if (self->m18 == 0) {
    p = (int *)fn_8267B890(*(int *)(ctx->p + 0x288), 4, 0);
    if (p != 0) {
      *p = 0;
      r = p;
    } else {
      r = 0;
    }
    self->m18 = r;
  }
  fn_826C2BA8(self->m18, p3, &s, 6 < ctx->m4);
  fn_826BF5B8(&s);
  return 1;
}
