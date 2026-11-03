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
typedef struct { char pad[0x28]; unsigned f28; } In;
typedef struct { char pad[0x38]; unsigned f38; } G;
typedef struct { char pad[8]; In *in; unsigned char c; char pad2[4]; unsigned char b11; unsigned char b12; char pad3[5]; char sub18[1]; } Obj;
extern int fn_8288A398();
extern int fn_828A0C50(Obj *, int);
extern int fn_828A1B60(In *);
extern int fn_828A1C08(In *);
extern int fn_828A1C10(In *);
extern int fn_828AC808(void *, void *);
extern void fn_828CFBD8(Obj *, int);
extern void fn_828CFC68(Obj *);
extern void fn_828D04D8(Obj *, int, int, unsigned short, void *, unsigned char);
int fn_828D0590(Obj *self, unsigned char flag)
{
  int a, b, h;
  void *q;
  unsigned char changed, t1;
  if (flag == 0) return 1;
  a = fn_828A1C08(self->in);
  b = fn_828A1C10(self->in);
  q = (char *)self->in + 0x60;
  h = fn_828A1B60(self->in);
  if (self->c != 0 && (unsigned char)fn_828A0C50(self, h) != 0) fn_828CFC68(self);
  if (self->c == 0) fn_828CFBD8(self, h);
  if (self->c == 0) return 0;
  t1 = self->b11 != (unsigned char)a || self->b12 != (unsigned char)b;
  changed = t1 || (unsigned char)fn_828AC808(self->sub18, q) != 0;
  if (changed) {
    G *g = (G *)fn_8288A398();
    fn_828D04D8(self, a, b, g->f38, q, self->in->f28);
  }
  return 0;
}
