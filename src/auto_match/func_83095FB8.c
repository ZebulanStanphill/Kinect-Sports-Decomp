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





typedef struct { int pad[4]; void *p10; } S_83095FB8;
typedef struct { int pad[2]; int p8; int pc; int *p10; } S_83095FB8b;
typedef struct VT_83095FB8 { int f0; unsigned (*f4)(void *, int); } VT_83095FB8;
typedef struct { VT_83095FB8 *vt; } Obj_83095FB8;
typedef struct { int pad[4]; Obj_83095FB8 *o; } Ctx_83095FB8;

extern Ctx_83095FB8 *fn_82CE5410(void);
extern int fn_82CEFBD0(unsigned, int);
extern void fn_82CEFB30(void *);

void fn_83095FB8(S_83095FB8 *self, int param_2)
{
  Ctx_83095FB8 *c;
  unsigned m;
  if (self->p10 == 0) {
    c = fn_82CE5410();
    m = c->o->vt->f4(c->o, 0x1c);
    self->p10 = m != 0 ? (void *)fn_82CEFBD0(m, param_2) : 0;
    fn_82CEFB30((char *)self + 8);
  }
}
