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
extern int fn_82A1E968(void *);
typedef struct { int v[5]; } Val_82FA7F30;
typedef struct { unsigned int key; int pad; Val_82FA7F30 val; int pad2[3]; } Ent_82FA7F30;
typedef struct { Ent_82FA7F30 *begin; Ent_82FA7F30 *end; int pad; int cs[6]; } Vec_82FA7F30;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

static __forceinline int neq(Ent_82FA7F30 *a, Ent_82FA7F30 *b) { return a != b; }
static __forceinline Val_82FA7F30 *Get(int ok, Ent_82FA7F30 *e) { return ok ? &e->val : 0; }
void fn_82FA7F30(Vec_82FA7F30 *param_1, unsigned int param_2, Val_82FA7F30 *param_3)
{
  Ent_82FA7F30 *e;
  Val_82FA7F30 *d;
  for (e = param_1->begin; e != param_1->end && e->key != param_2; e++) ;
  d = Get(neq(e, param_1->end), e);
  RtlEnterCriticalSection(param_1->cs);
  *d = *param_3;
  fn_82A1E968((char *)d + 0x18);
  RtlLeaveCriticalSection(param_1->cs);
}
