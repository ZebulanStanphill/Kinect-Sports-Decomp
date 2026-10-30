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
extern int fn_827C5538();
extern int fn_827C5648();
extern int fn_827C5790();

typedef struct { char pad[0x14]; int a; int b; } Ent_827C5C40;

void fn_827C5C40(int param_1)
{
  int iVar1;
  Ent_827C5C40 *e;
  int iVar5;
  int *piVar6;

  iVar1 = *(int *)(param_1 + 0x14c);
  if (*(char *)(param_1 + 0xb1) == '\0') {
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0xe4)) {
      piVar6 = (int *)(param_1 + 0xe8);
      do {
        e = (Ent_827C5C40 *)*piVar6;
        if (*(char *)(param_1 + 0xd4) != '\0') {
          if (*(int *)(param_1 + 300) != 0) {
            fn_827C5538(param_1, e->b, 1);
          } else if (*(int *)(param_1 + 0x134) == 0) {
            fn_827C5538(param_1, e->a, 0);
          }
        } else {
          fn_827C5538(param_1, e->a, 0);
          fn_827C5538(param_1, e->b, 1);
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar5 < *(int *)(param_1 + 0xe4));
    }
  }
  if (*(unsigned int *)(param_1 + 0xbc) != *(int *)(iVar1 + 0x1c)) {
    fn_827C5648(param_1);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_1 + 0xbc);
  }
  fn_827C5790(param_1);
  return;
}
