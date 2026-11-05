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
extern void fn_82FA5190(unsigned, void *);
extern unsigned int lbl_8216CBE4;
extern unsigned int lbl_8217BB44;
extern unsigned int lbl_8217BB48;
extern unsigned int lbl_8217BB50;
extern unsigned int lbl_8217D040;
extern unsigned int lbl_8217D264;
extern unsigned int lbl_831BC768;


typedef struct { unsigned vt; void *p; short n; } Sub_82FEFE60;
typedef struct { unsigned vt0, vt1; int pad; unsigned vt3; char pad2[0x144-0x10]; Sub_82FEFE60 sub; } Obj_82FEFE60;
void fn_82FEFE60(Obj_82FEFE60 *self) { Sub_82FEFE60 *s = &self->sub; self->vt0 = (unsigned)&lbl_8217BB50; self->vt1 = (unsigned)&lbl_8217BB48; self->vt3 = (unsigned)&lbl_8217D264; s->vt = (unsigned)&lbl_8217BB44; if (s->p != 0) { fn_82FA5190(lbl_831BC768, s->p); s->p = 0; s->n = 0; } self->vt1 = (unsigned)&lbl_8216CBE4; self->vt0 = (unsigned)&lbl_8217D040; }