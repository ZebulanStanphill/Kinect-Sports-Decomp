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
extern void *fn_8265C9E0(unsigned);
extern int lbl_821984AC;

typedef struct B_8225AD50 { void *vt; float v; } B_8225AD50;

static B_8225AD50 *Init(B_8225AD50 *p, float *v)
{
  p->vt = &lbl_821984AC;
  p->v = *v;
  return p;
}

B_8225AD50 **fn_8225AD50(B_8225AD50 **param_1, float *param_2)
{
  B_8225AD50 *mem = (B_8225AD50 *)fn_8265C9E0(8);
  B_8225AD50 *p = mem ? Init(mem, param_2) : 0;
  *param_1 = p;
  return param_1;
}
