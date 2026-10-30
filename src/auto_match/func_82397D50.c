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
typedef struct { char pad[4]; unsigned type; char pad2[0x18]; unsigned kind; } O_82397D50;
typedef struct { O_82397D50 *first; void *second; } P_82397D50;
extern void fn_822315A0(void *);
extern void fn_82359DB8(P_82397D50 *, void *, unsigned);
extern void fn_82522588(P_82397D50 *, P_82397D50 *);

int fn_82397D50(int param_1)
{
  P_82397D50 a, b;
  fn_82359DB8(&a, (void *)(param_1 + 0x40), *(unsigned *)(param_1 + 0x54));
  if (a.first != 0 && a.first->type == 5) {
    fn_82522588(&b, &a);
    if (b.first->kind == 1 || b.first->kind == 2) {
      if (b.second != 0) fn_822315A0(b.second);
      if (a.second != 0) fn_822315A0(a.second);
      return 1;
    }
    if (b.second != 0) fn_822315A0(b.second);
  }
  if (a.second != 0) fn_822315A0(a.second);
  return 0;
}
