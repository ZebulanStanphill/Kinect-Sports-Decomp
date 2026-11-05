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
extern int fn_82AC88B8(void *, void *);
extern int fn_82AC8C90(void *, void *, void *, void *);
extern int fn_82ACA698(void *, void *, int);
extern unsigned char fn_82ACB0F8(void *, void *);
static int notNull(unsigned *p) { if (p != 0) return 1; return 0; }
static int lt9(unsigned x) { if (x < 9) return 1; return 0; }
static int notNullI(unsigned p) { if (p != 0) return 1; return 0; }

void fn_82AE9DE0(unsigned *param_1, int *param_2)
{
  unsigned *puVar1;
  unsigned uVar2;
  int *piVar3;
  unsigned iVar4;
  unsigned char bVar5;
  unsigned uVar7;
  unsigned *puVar8;

  puVar1 = (unsigned *)*param_2;
  while (notNull(puVar1)) {
    bVar5 = (*puVar1 & 0x40000000) != 0 && (*puVar1 & 0xe000000) == 0;
    if (bVar5) {
      uVar2 = puVar1[3];
      for (puVar8 = *(unsigned **)(uVar2 + 4); notNull(puVar8); puVar8 = (unsigned *)puVar8[2]) {
        piVar3 = (int *)puVar8[4];
        if (piVar3 != 0) {
          bVar5 = (*puVar8 & 0x40000000) != 0 && (*puVar8 & 0xe000000) == 0;
          if (bVar5 && piVar3 != param_2 && (*(unsigned char *)(piVar3 + 4) & 1) != 0) {
            if (fn_82ACB0F8(param_2, piVar3) != 0) goto next;
          }
        }
      }
      uVar7 = 0;
      puVar8 = param_1 + 1;
      do {
        if (uVar2 == *puVar8) {
          *puVar8 = 0;
        }
        uVar7 = uVar7 + 1;
        puVar8 = puVar8 + 1;
      } while (lt9(uVar7));
    }
next:
    puVar1 = (unsigned *)puVar1[1];
  }
  fn_82AC88B8(param_1, param_2);
  for (iVar4 = param_2[1]; notNullI(iVar4); iVar4 = *(unsigned *)(iVar4 + 8)) {
    if (*(unsigned *)(iVar4 + 0x10) != 0) {
      fn_82AC8C90(param_1, (void *)iVar4, (void *)*(unsigned *)(iVar4 + 0x10), param_2);
    }
  }
  fn_82ACA698(param_1, param_2, 0);
}
