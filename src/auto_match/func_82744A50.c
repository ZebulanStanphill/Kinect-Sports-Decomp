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
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826957D0();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_82696BC8();
extern int fn_82743808();
extern int fn_82744378();


void fn_82744A50(int param_1)

{
  int type;unsigned iVar3;unsigned retained;
  unsigned char cVar4;
  unsigned uVar1;
  unsigned uVar2;
  undefined1 *puVar5;
  int lVar6;
  undefined1 items[2][16];
  if (((*(int **)(param_1 + 8) == (int *)0x0) ||
      (type = (*(code *)(**(int **)(param_1 + 8) + 8))(*(void**)(param_1+8)), type != 0x10)) ||
     (cVar4 = (*(code *)(**(int **)(param_1 + 8) + 0x40))(*(void**)(param_1+8)), cVar4 != '\0')) {
    uVar1 = fn_8267B890(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                              0x30,0);
    uVar2 = uVar1 ? fn_82744378(uVar1,*(undefined4 *)(param_1+0x18)):0;
    iVar3=uVar2;
  }
  else {
    retained = *(unsigned *)(param_1+8) != 0 ? *(unsigned *)(param_1+8)-0x10 : 0;
    if (retained != 0) {
      *(uint *)(retained + 8) = *(int *)(retained + 8) + 1U & 0x8fffffff;
    }
    iVar3=retained;
  }
  fn_82696BC8(*(undefined4 *)(param_1 + 4),iVar3);
  if (0 < *(int *)(param_1 + 0x1c)) {
    puVar5 = &items[0][0]-16;
    lVar6 = 2;
    do {
      puVar5 = puVar5 + 0x10;
      *puVar5 = 0;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    uVar2 = fn_826957D0(param_1,0);
    fn_82695FA0(items[0],uVar2);
    if (1 < *(int *)(param_1 + 0x1c)) {
      uVar2 = fn_826957D0(param_1,1);
      fn_82695FA0(items[1],uVar2);
    }
    fn_82743808(iVar3,(unsigned)*(uint *)(param_1 + 0x18) + 0x78,items[0]);
    puVar5 = &items[0][0]+32;
    lVar6 = 1;
    do {
      puVar5 = puVar5 + -0x10;
      fn_82696330(puVar5);
      lVar6 = lVar6 + -1;
    } while (lVar6 >= 0);
  }
  if (iVar3 != 0) {
    fn_826824B0(iVar3);
  }
  return;
}

