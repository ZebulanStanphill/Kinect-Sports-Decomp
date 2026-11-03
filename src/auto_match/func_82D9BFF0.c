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
extern int fn_82CFF8D0(int, int);
extern void fn_82D9A4A8(int, int *, void *);
extern char lbl_8323E170[];

void fn_82D9BFF0(int param_1x, int *param_2)
{
  int param_1 = param_1x;
  int h;
  int i;
  int off;

  fn_82D9A4A8(param_1, param_2, lbl_8323E170);
  if ((*(int *)(param_1 + 0x168) & (int)0x80000000) == 0) {
    h = fn_82CFF8D0(*(int *)(param_1 + 0x160), *(int *)(param_1 + 0x168) << 3);
    (*(void (**)(int *, int, const char *, int, int, int))(*param_2 + 0x14))(param_2, 3, "AgentPtr", *(int *)(param_1 + 0x160), *(int *)(param_1 + 0x164) << 3, h);
  }
  (*(void (**)(int *, const char *))(*param_2 + 0x18))(param_2, "agents");
  i = 0;
  if (0 < *(int *)(param_1 + 0x164)) {
    off = 0;
    do {
      (*(void (**)(int *, int, int, int))(*param_2 + 0xc))(param_2, 0, *(int *)(off + *(int *)(param_1 + 0x160)), 0);
      i++;
      off += 8;
    } while (i < *(int *)(param_1 + 0x164));
  }
  (*(void (**)(int *))(*param_2 + 0x1c))(param_2);
}
