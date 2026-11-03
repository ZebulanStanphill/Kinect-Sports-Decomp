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
typedef struct Sub_824C3380 { unsigned a; unsigned b; } Sub_824C3380;
extern void fn_822315A0(unsigned);
extern void fn_8255BAF8(unsigned *, unsigned);
extern void fn_8265CA20(unsigned);
extern const char lbl_821C082C[];
extern unsigned lbl_832960A0[];

unsigned *fn_824C3380(unsigned *param_1, int param_2)
{
  unsigned *puVar1;
  unsigned *puVar2;
  unsigned iVar3;
  unsigned iVar4;
  unsigned key;
  unsigned *tree;
  Sub_824C3380 *sp;

  param_1[1] = param_2;
  *param_1 = (unsigned)lbl_821C082C;
  if (*(unsigned *)(param_2 + 0x5c) != 0) {
    fn_8265CA20(*(unsigned *)(param_2 + 0x5c));
    *(unsigned *)(param_2 + 0x5c) = 0;
  }
  if (*(int *)(param_1[1] + 0x48) != 0) {
    key = *(unsigned *)(*(int *)(param_1[1] + 0x48) + 4);
    if (lbl_832960A0[0xec / 4] != 0) {
      iVar4 = *(unsigned *)(lbl_832960A0[0xec / 4] + 4);
    } else {
      iVar4 = 0;
    }
    if (iVar4 != 0) {
      tree = *(unsigned **)(iVar4 + 0xd48);
      puVar1 = (unsigned *)tree[1];
      puVar2 = (unsigned *)*puVar1;
      while (puVar2 != puVar1 && *(unsigned *)(puVar2[2] + 4) != key) {
        puVar2 = (unsigned *)*puVar2;
      }
      if (puVar2 != *(unsigned **)(*(unsigned *)(iVar4 + 0xd48) + 4)) {
        fn_8255BAF8(tree, key);
      }
    }
    sp = (Sub_824C3380 *)(param_1[1] + 0x48);
    iVar3 = sp->b;
    sp->b = 0;
    sp->a = 0;
    if (iVar3 != 0) {
      fn_822315A0(iVar3);
    }
  }
  return param_1;
}
