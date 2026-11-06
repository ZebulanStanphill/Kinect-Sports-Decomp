int memcmp(const void *, const void *, unsigned int);
void *memcpy(void *, const void *, unsigned int);
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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82B63F30(int *);



int fn_82B64678(int *param_1)

{
  byte bVar1;
  byte bVar2;
  int uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  int lVar11;
  int lVar12;
  uint uVar13;
  
  iVar9 = param_1[1];
  iVar7 = *param_1;
  uVar10 = *(uint *)(iVar9 + 4) ^ *(uint *)(iVar7 + 4);
  if (((((uVar10 & ~0x100U) == 0) && (*(int *)(iVar7 + 0x18) == 0)) &&
      (*(unsigned *)(iVar9 + 0x68) == *(unsigned *)(iVar7 + 0x68))) &&
     (((*(unsigned *)(iVar9 + 0x6c) == *(unsigned *)(iVar7 + 0x6c) &&
       (*(unsigned *)(iVar9 + 0x70) == *(unsigned *)(iVar7 + 0x70))) &&
      (*(int *)(iVar9 + 0x10) == *(int *)(iVar7 + 0x10))))) {
    if (*(int *)(iVar9 + 0xc) == 0) {
      uVar3 = fn_82B63F30(param_1);
      return uVar3;
    }
    if (*(int *)(iVar9 + 0x1c) != 0) {
      pbVar8 = *(byte **)(iVar9 + 0x38);
      pbVar6 = *(byte **)(iVar7 + 0x38);
      if (pbVar8!=pbVar6 && memcmp(pbVar8,pbVar6,0x400)!=0) goto LAB_82b647f8;
    }
    *(undefined4 *)(iVar9 + 0x10) = 0;
    uVar10 = 0;
    *(undefined4 *)(*param_1 + 0x10) = 0;
    iVar7 = param_1[1];
    if (*(unsigned *)(iVar7 + 0x70) > 0) {
      iVar9 = *param_1;
      uVar5 = *(uint *)(iVar7 + 0x6c);
      do {
        uVar13 = 0;
        { int sourceStride=*(int *)(iVar9+100);unsigned sourceBase=*(unsigned *)(iVar9+0x20);
          int destStride=*(int *)(param_1[1]+100);unsigned destBase=*(unsigned *)(param_1[1]+0x20);
          lVar12=destStride*uVar10+destBase;lVar11=sourceStride*uVar10+sourceBase; }
        if (uVar5 != 0) {
          do {
            memcpy((void *)lVar12,(void *)lVar11,*(undefined4 *)(iVar7 + 0x74));
            iVar7 = param_1[1];
            iVar9 = *param_1;
            uVar13 = uVar13 + 1;
            lVar12 = (unsigned)*(uint *)(iVar7 + 0x60) + lVar12;
            lVar11 = (unsigned)*(uint *)(iVar9 + 0x60) + lVar11;
            uVar5 = *(uint *)(iVar7 + 0x6c);
          } while (uVar13 < uVar5);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(iVar7 + 0x70));
    }
    return 0;
  }
  else {
LAB_82b647f8:
    uVar3 = 0x80004005;
  }
  return uVar3;
}

