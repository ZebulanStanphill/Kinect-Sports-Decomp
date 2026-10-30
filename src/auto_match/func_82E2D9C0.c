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
extern void fn_82A28E60(unsigned int, int, unsigned int);
extern unsigned int fn_82A2A360(void);
typedef struct { int pad; unsigned int *head; unsigned int cnt; unsigned int inl; } L_82E2D9C0;
void fn_82E2D9C0(L_82E2D9C0 *p)
{
  unsigned int heap = fn_82A2A360();
  unsigned int next;
  while (p->head != 0) {
      next = *p->head;
      if (p->head != &p->inl) {
        unsigned int i;
        for (i = 0; i < p->cnt; i++) {
        }
        fn_82A28E60(heap, 0, (unsigned int)p->head);
      }
      p->head = (unsigned int *)next;
  }
}
