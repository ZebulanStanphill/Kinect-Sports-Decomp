#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
extern int fn_827B18F8();
extern int fn_827B2C80();
extern unsigned int uStack_40;


void fn_827B2D60(int param_1,short param_2,short param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  short sVar1;
  short sVar2;
  unsigned int uVar4;
  __int64 lVar3;
  int iVar5;
  unsigned int uStack_40;
  
  uVar4 = *(int *)(param_1 + 0x28) - 1;
  sVar1 = (short)param_4;
  sVar2 = (short)param_5;
  if (*(int *)(*(int *)((uVar4 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x34)) + (uVar4 * 8 & 0x1f8) +
              4) != 0) {
    uVar4 = *(int *)(param_1 + 0x18) - 1;
    uStack_40 = *(unsigned int *)
                 (*(int *)((uVar4 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x24)) + (uVar4 * 4 & 0xfc)
                 );
    lVar3 = (__int64)((int)param_2 - (int)sVar1) * (__int64)((int)sVar2 - (int)(((unsigned __int64)(uStack_40) >> 16) & 0xFFFF)) -
            (__int64)((int)param_3 - (int)sVar2) *
            (__int64)((int)sVar1 - (int)(short)((int)uStack_40 >> 0x11));
    if (lVar3 < 0) {
      lVar3 = -lVar3;
    }
    if ((int)lVar3 < 6) {
      fn_827B2C80(param_1,param_4,param_5);
      return;
    }
  }
  uStack_40 = CONCAT22(param_2 << 1,param_3) | 0x10000;
  fn_827B18F8(param_1 + 0x18,&uStack_40);
  uStack_40 = CONCAT22(sVar1 << 1,sVar2) | 0x10000;
  fn_827B18F8(param_1 + 0x18,&uStack_40);
  uVar4 = *(int *)(param_1 + 0x28) - 1;
  iVar5 = *(int *)((uVar4 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x34)) + (uVar4 * 8 & 0x1f8);
  *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 2;
  return;
}

