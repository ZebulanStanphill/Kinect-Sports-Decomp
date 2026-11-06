
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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int fn_8267B890();
extern int fn_82684EC0();
extern void fn_82684F60(void *, unsigned int, unsigned int, unsigned int);
extern int fn_82687270();
extern int fn_826A6A38();
extern int fn_826A9280();
extern int fn_826DDC60();
extern int fn_826E00B8();
extern int fn_826E9248();
extern int fn_82765B58();


void fn_826E1A60(int param_1,undefined4 *param_2)

{
  uint uVar1;
  unsigned int iVar2;
  int *piVar3;
  uint auStack_70 [4];
  undefined1 auStack_60 [48];
  
  uVar1 = fn_826A6A38(param_1);
  fn_826A9280(param_1 + 0x14,"  ShapeLoader: id = %d\n",uVar1 & 0xffff);
  iVar2 = fn_8267B890(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1c),0x60,0);
  if (iVar2 != 0) { piVar3 = (int *)fn_826E00B8(iVar2); } else { piVar3 = 0; }
  iVar2 = *(int *)(param_1 + 0x314);
  if (iVar2 == 0) {
    iVar2 = param_1 + 0x28;
  }
  fn_82765B58(piVar3 + 4,param_1,*param_2,
                    (((unsigned int)*(uint *)(iVar2 + 0x30) - (unsigned int)*(uint *)(iVar2 + 0x34)) -
                    (unsigned int)*(uint *)(iVar2 + 0x2c)) + (unsigned int)(uint)param_2[3] +
                    (unsigned int)(uint)param_2[2],1);
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 8) + 0x20);
  if (iVar2 != 0) {
    fn_82684F60(auStack_60,*(unsigned char *)(iVar2 + 0x10) ? 0x10 : 0,-1,-1);
    (*(void (**)(int *, float, void *))(*piVar3 + 0x2c))(piVar3,*(float *)(iVar2 + 0xc),auStack_60);
    fn_82684EC0(auStack_60);
  }
  fn_826A9280(param_1 + 0x14,"  bound rect:");
  iVar2 = *(int *)(param_1 + 0x314);
  fn_826E9248(iVar2 != 0 ? iVar2 : param_1 + 0x28,piVar3 + 5);
  if (*(int *)(param_1 + 0x2e8) == 0) {
    auStack_70[0] = uVar1 & 0xffff;
    fn_826DDC60(*(undefined4 *)(param_1 + 0x20),auStack_70,piVar3);
  }
  if (piVar3 != (int *)0x0) {
    fn_82687270(piVar3);
  }
  return;
}

