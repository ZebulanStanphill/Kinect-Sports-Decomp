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
extern void fn_82AC8CE8(unsigned int *, unsigned int);
extern void fn_82AE9DE0(unsigned int *, unsigned int);

typedef struct Link_82AEA3B0 {
  unsigned int prev;
  unsigned int next;
} Link_82AEA3B0;
#define LINK_82AEA3B0(n) ((Link_82AEA3B0 *)(((n) & ~1u) + 0x24))

void fn_82AEA3B0(unsigned int *param_1, unsigned int param_2)
{
  unsigned int a = *param_1;
  Link_82AEA3B0 *x;
  Link_82AEA3B0 *y;

  param_1 = param_1 + 1;
  fn_82AE9DE0(param_1, a);
  fn_82AC8CE8(param_1, param_2);
  fn_82AC8CE8(param_1, a);
  x = LINK_82AEA3B0(a);
  y = LINK_82AEA3B0(param_2);
  y->next = x->next;
  LINK_82AEA3B0(x->next)->prev = (unsigned int)&y->next;
  y->prev = (unsigned int)&x->next;
  x->next = (unsigned int)y - 0x24;
}
