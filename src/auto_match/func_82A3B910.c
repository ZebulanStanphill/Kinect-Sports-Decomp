#define true 1
typedef struct { unsigned __int64 lo, hi; } V16;
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int *auStack_40;
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern V16 vectorCompareEqualToUnsignedByte();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82A3B910(int param_1,unsigned __int64 param_2,__int64 param_3)

{
  char cVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned char *puVar5;
  __int64 lVar6;
  __int64 lVar7;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned char auStack_40 [64];
  
  if ((int)param_3 < 7) {
    *(int *)(param_1 + 0x2ec0) = *(int *)(param_1 + 0x2ec0) + (int)param_3;
  }
  else {
    lVar6 = param_2 + param_3;
    lVar7 = lVar6 + -6;
    fn_82F68CC0(auStack_40,lVar7,6);
    fn_82F691F0(lVar7,0xe8,6);
    param_3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2ec0) + param_3;
    while( true ) {
      lVar7 = 0;
      uVar4 = param_2 + 0xf & 0xfffffff0;
      for (; ((param_2 & 0xffffffff) < uVar4 && (*(char *)param_2 != -0x18)); param_2 = param_2 + 1)
      {
        lVar7 = lVar7 + 1;
      }
      if ((param_2 & 0xffffffff) == uVar4) {
        do {{ V16 _vt0 = vectorCompareEqualToUnsignedByte(in_vs45,in_vs32); memcpy(in_vs45, &_vt0, 16); }
        } while( true );
      }
      cVar1 = *(char *)param_2;
      while (cVar1 != -0x18) {
        param_2 = param_2 + 1;
        lVar7 = lVar7 + 1;
        cVar1 = *(char *)param_2;
      }
      iVar2 = (int)param_2;
      puVar5 = (unsigned char *)(iVar2 + 1);
      uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2ec0) + lVar7;
      *(int *)(param_1 + 0x2ec0) = (int)uVar4;
      if ((param_3 - 10U & 0xffffffff) <= (uVar4 & 0xffffffff)) break;
      uVar3 = (unsigned __int64)
              CONCAT31(CONCAT21(CONCAT11(*(unsigned char *)(iVar2 + 4),*(unsigned char *)(iVar2 + 3)),
                                *(unsigned char *)(iVar2 + 2)),*puVar5);
      if (uVar3 < *(unsigned int *)(param_1 + 0x2ebc)) {
        lVar7 = uVar3 - uVar4;
        *puVar5 = (char)lVar7;
LAB_82a3ba5c:
        *(char *)(iVar2 + 2) = (char)((unsigned __int64)lVar7 >> 8);
        *(char *)(iVar2 + 3) = (char)((unsigned __int64)lVar7 >> 0x10);
        *(char *)(iVar2 + 4) = (char)((unsigned __int64)lVar7 >> 0x18);
      }
      else if ((-uVar3 & 0xffffffff) <= (uVar4 & 0xffffffff)) {
        lVar7 = *(unsigned int *)(param_1 + 0x2ebc) + uVar3;
        *puVar5 = (char)lVar7;
        goto LAB_82a3ba5c;
      }
      param_2 = param_2 + 5;
      *(int *)(param_1 + 0x2ec0) = (int)uVar4 + 5;
    }
    *(int *)(param_1 + 0x2ec0) = (int)param_3;
    fn_82F68CC0(lVar6 + -6,auStack_40,6);
  }
  return;
}

