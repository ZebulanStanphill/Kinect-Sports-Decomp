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


typedef struct { int w[4]; } Q16_828627E0;
typedef struct { float f; Q16_828627E0 *q; unsigned short h; } Rec_828627E0;
typedef struct { char pad[8]; unsigned short n; char pad2[0x28-0xa]; int off; } Cfg_828627E0;
typedef struct { char pad[8]; char *base; } Buf_828627E0;
void fn_828627E0(Cfg_828627E0 *c, Buf_828627E0 *a, Buf_828627E0 *b)
{
  Rec_828627E0 *s = (Rec_828627E0 *)(a->base + c->off);
  Rec_828627E0 *d = (Rec_828627E0 *)(b->base + c->off);
  int i;
  d->f = s->f;
  for (i = 0; i < c->n + 2; i++) {
    d->q[i] = s->q[i];
  }
  d->h = s->h;
}
