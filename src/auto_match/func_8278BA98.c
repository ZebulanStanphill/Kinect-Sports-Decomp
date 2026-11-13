typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8268ACE8();
extern int fn_8268AF70();
extern int fn_8278B788();
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


unsigned __int64 fn_8278BA98(unsigned __int64 param_1,int param_2)

{
  bool bVar1;
  unsigned short uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned char bStack_31;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  
  uVar2 = *(unsigned short *)(param_2 + 0x2a);
  uStack_28 = 0;
  uVar5 = 0;
  uStack_24 = 0;
  uVar6 = 0;
  if (((uVar2 & 1) != 0) || ((uVar2 >> 10 & 1) != 0)) {
    uVar5 = *(unsigned int *)(param_2 + 0x20);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    uVar6 = (unsigned int)*(short *)(param_2 + 0x24);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    uVar6 = (unsigned int)*(unsigned short *)(param_2 + 0x26) << 0x10 | uVar6;
  }
  uStack_2c = (unsigned int)uVar2 << 0x18 | uVar6;
  bVar1 = *(int *)(param_2 + 0x1c) != 0;
  uStack_30 = (unsigned int)*(unsigned char *)(param_2 + 0x28) << 0x18 | uVar5;
  if (bVar1) {
    uStack_28 = 1;
  }
  uStack_28 = (unsigned int)bVar1;
  if (((uVar2 >> 9 & 1) != 0) && (*(int *)(param_2 + 0x18) != 0)) {
    uStack_24 = fn_8278B788();
  }
  uVar7 = 0x1505;
  lVar8 = 0x10;
  iVar4 = 0x10;
  do {
    uVar7 = (unsigned __int64)(&bStack_31)[iVar4] + (__int64)(int)uVar7 * 0x1003f;
    lVar8 = lVar8 + -1;
    iVar4 = iVar4 + -1;
  } while (lVar8 != 0);
  if ((*(unsigned short *)(param_2 + 0x2a) >> 2 & 1) != 0) {
    uVar3 = fn_8268AF70(((unsigned __int64)*(unsigned int *)(param_2 + 8) & 0xfffffffc) + 8,
                         *(unsigned int *)(*(unsigned int *)(param_2 + 8) & 0xfffffffc) & 0x7fffffff,0x1505);
    uVar7 = uVar3 ^ uVar7;
  }
  if ((*(unsigned short *)(param_2 + 0x2a) & 0x100) != 0) {
    iVar4 = fn_8268ACE8(param_2 + 0x10);
    bVar1 = true;
    if (iVar4 != 0) goto LAB_8278bbdc;
  }
  bVar1 = false;
LAB_8278bbdc:
  if (bVar1) {
    uVar3 = fn_8268AF70(((unsigned __int64)*(unsigned int *)(param_2 + 0x10) & 0xfffffffc) + 8,
                         *(unsigned int *)(*(unsigned int *)(param_2 + 0x10) & 0xfffffffc) & 0x7fffffff,0x1505);
    uVar7 = uVar3 ^ uVar7;
  }
  return uVar7;
}

