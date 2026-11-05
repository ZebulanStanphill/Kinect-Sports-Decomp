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
extern unsigned int lbl_82005BB4;
extern unsigned int lbl_82005BC0;
extern unsigned int lbl_82005BCC;


typedef struct { int pad; int count; } Rep_82689100;
typedef struct { int count; unsigned *vt; } Sub_82689100;
typedef struct { unsigned *vt; Sub_82689100 sub; Rep_82689100 *rep; int v[4]; } Obj_82689100;
void fn_82689100(Obj_82689100 *self, Rep_82689100 *rep, int *src){ Sub_82689100 *s=&self->sub; int a,b,c,d; self->sub.count = 1; s->vt = &lbl_82005BB4; self->vt = &lbl_82005BCC; self->sub.vt = &lbl_82005BC0; if (rep != 0) rep->count++; self->rep = rep; d=src[3];c=src[2];b=src[1];a=src[0]; self->v[0]=a;self->v[1]=b;self->v[2]=c;self->v[3]=d; }