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
typedef struct It_82687628 { int **t; int idx; } It_82687628;
typedef struct Loc_82687628 { int e0, e1; It_82687628 it; } Loc_82687628;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void fn_82687270(int);
extern unsigned char fn_826A8E58(It_82687628 *, void *);
extern void fn_82766D88(It_82687628 *);
extern void fn_82768DE0(It_82687628 *, unsigned);
extern void fn_82768F38(unsigned);

void fn_82687628(char *param_1)
{
  Loc_82687628 L;
  RtlEnterCriticalSection(param_1 + 0xc);
  if (*(unsigned *)(param_1 + 8) != 0) {
    fn_82768DE0(&L.it, *(unsigned *)(param_1 + 8) + 0xc);
    L.e0 = 0;
    L.e1 = 0;
    if (!fn_826A8E58(&L.it, &L)) {
      L.e0 = 0;
      L.e1 = 0;
      do {
        fn_82687270(*(int *)((char *)*L.it.t + L.it.idx * 8 + 0xc));
        fn_82766D88(&L.it);
      } while (!fn_826A8E58(&L.it, &L));
    }
    fn_82768F38(*(unsigned *)(param_1 + 8) + 0xc);
  }
  RtlLeaveCriticalSection(param_1 + 0xc);
}
