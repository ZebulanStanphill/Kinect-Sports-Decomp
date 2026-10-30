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
extern int fn_82374078();
extern int fn_823970D0();
extern int fn_82399218();
extern int fn_82399BA0();
extern int fn_8239B410();
extern int fn_8239BD90();
extern int fn_8239C4D8();
extern int fn_8239CE98();
extern int fn_823A1C50();
extern int fn_823A2098();
extern int fn_823A5108();
extern int fn_8248F9F8();
extern int fn_82536590();
extern int fn_82A1E1A8();
extern float lbl_821916FC;
extern float lbl_82193AD8[];
extern float lbl_821CC160;

typedef struct Ctx_823A19F0 Ctx_823A19F0;
typedef struct Self_823A19F0 { char pad0[8]; Ctx_823A19F0 *ctx; float f0c; } Self_823A19F0;
void fn_823A19F0(Self_823A19F0 *self, float delta)
{
  int *obj;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  int uVar5;
  unsigned int n;
  float fVar1;

#define OBJ(s) (*(int *)((char *)(*(int *)((char *)(s) + 8)) + 8))
  if (*(int *)(OBJ(self) + 0x178) == 1) {
    fVar1 = self->f0c - delta;
    self->f0c = fVar1;
    if (fVar1 <= lbl_821CC160) {
      fn_82A1E1A8(2000);
      self->f0c = lbl_821916FC;
    }
  }
  iVar2 = *(int *)(OBJ(self) + 0x1e4);
  if (fn_823970D0(OBJ(self), iVar2) != 0) {
    fn_82399218(OBJ(self), *(int *)(OBJ(self) + 0x1e4));
    fn_8239BD90(OBJ(self), *(int *)(OBJ(self) + 0x1e4));
    puVar3 = *(unsigned int **)(OBJ(self) + 0x94);
    if (puVar3 != 0 && puVar3[7] != 0) {
      n = 0;
      if (*puVar3 != 0) n = *puVar3 - 1;
      fn_8248F9F8(puVar3[7], n, 0);
    }
    fn_8239B410(OBJ(self));
    fn_8239C4D8(OBJ(self));
    fn_823A5108(*(int *)((char *)self + 8), 5);
    if (*(int *)(OBJ(self) + 0x1e4) != 0 && fn_8239CE98(OBJ(self)) == 0) {
      iVar4 = *(int *)(OBJ(self) + 0x1e4);
      *(float *)(iVar4 + 0x13c) = *(float *)(iVar4 + 0x13c) - lbl_82193AD8[6];
    }
    if (fn_82399BA0(OBJ(self)) != 0) {
      if (*(int *)(iVar2 + 0x188) != 0) {
        iVar4 = (*(code *)(**(int **)(OBJ(self) + 0x2e0) + 0x18))(*(int **)(OBJ(self) + 0x2e0));
        iVar4 = iVar4 == 0;
        uVar5 = (*(code *)(**(int **)(OBJ(self) + 0x2e0) + 0x34))(*(int **)(OBJ(self) + 0x2e0));
        if (iVar4 == uVar5) {
          fn_82374078(OBJ(self), iVar4, 0x24);
        }
      }
      iVar4 = *(int *)(OBJ(self) + 0x178);
      if (iVar4 == 0) {
        fn_823A1C50(self);
      }
      else if (iVar4 == 1) {
        fn_823A2098(self);
        iVar4 = OBJ(self);
        if ((*(int *)(iVar4 + 0xa0) == 0 || *(unsigned int *)(*(int *)(iVar4 + 0xa0) + 0x40) != 1) && *(int *)(iVar4 + 0xbd4) != 0) {
          fn_82536590(iVar4 + 0xbcc, 0);
          *(int *)(iVar4 + 0xbd4) = 0;
        }
      }
    }
  }
}

