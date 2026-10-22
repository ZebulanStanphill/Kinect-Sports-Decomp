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
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696AD0();


void fn_826BDC38(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar4;
  int uVar3;
  int *piVar5;
  undefined1 uVar6;
  int lVar7;
  undefined1 *puVar8;
  
  if (1 <= *(int *)(param_1 + 0x1c)) {
    iVar4 = (*(code *)(**(int **)(param_1 + 8) + 8))(*(void **)(param_1 + 8));
    bVar2 = (iVar4 < 2 || iVar4 > 5) ? 0 : 1;
    if (!bVar2) {
      lVar7 = *(void **)(param_1 + 8) ? *(int *)(param_1 + 8) - 0x10 : 0;
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      piVar5 = (int *)fn_82696AD0(uVar3,uVar1);
      if (piVar5 != (int *)0x0) {
        uVar6 = (*(code *)(*piVar5 + 0x48))(piVar5,*(undefined4 *)(param_1 + 0x18),lVar7,0);
        puVar8 = *(undefined1 **)(param_1 + 4);
        fn_826959C8(puVar8);
        puVar8[4] = uVar6;
        puVar8[0] = 2;
        return;
      }
    }
  }
  puVar8 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar8);
  puVar8[4] = false;
  puVar8[0] = 2;
  return;
}

