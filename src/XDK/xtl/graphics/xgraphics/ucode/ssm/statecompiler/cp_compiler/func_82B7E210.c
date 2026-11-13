typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AB6EC0();
extern int fn_82AB71F0();
extern int fn_82B69A00();


void fn_82B7E210(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  int iVar1;
  bool bVar2;
  unsigned short uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  
  iVar4 = fn_82AB6EC0(param_2,2);
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar4 == 0) {
LAB_82b7e380:
    *(unsigned int *)(iVar1 + 0xc) = *(unsigned int *)(iVar1 + 0xc) & 0xe000e000 | 0x10001;
  }
  else {
    bVar2 = true;
    iVar4 = fn_82B69A00(*(unsigned int *)(param_1 + 0xc),0xb);
    if (iVar4 != 0) {
      uVar6 = 0;
      do {
        if (3 < (uVar6 & 0xffffffff)) break;
        iVar4 = fn_82AB71F0(param_2,0x21,uVar6);
        if (((iVar4 != 0) && (uVar3 = *(unsigned short *)*param_3 & 0xf, 0x17 < uVar3)) &&
           ((uVar3 < 0x1b || ((0x23 < uVar3 && (uVar3 < 0x27)))))) {
          bVar2 = false;
        }
        uVar6 = uVar6 + 1;
        param_3 = param_3 + 1;
      } while (bVar2);
      if (!bVar2) goto LAB_82b7e380;
    }
    uVar5 = fn_82AB71F0(param_2,0,0);
    *(unsigned int *)(iVar1 + 0xc) = uVar5 & 0x1f | *(unsigned int *)(iVar1 + 0xc) & 0xffffffe0;
    uVar5 = fn_82AB71F0(param_2,2,0);
    *(unsigned int *)(iVar1 + 0xc) = (uVar5 & 0x1f) << 8 | *(unsigned int *)(iVar1 + 0xc) & 0xffffe0ff;
    uVar5 = fn_82AB71F0(param_2,1,0);
    *(unsigned int *)(iVar1 + 0xc) = (uVar5 & 7) << 5 | *(unsigned int *)(iVar1 + 0xc) & 0xffffff1f;
    uVar5 = fn_82AB71F0(param_2,3,0);
    *(unsigned int *)(iVar1 + 0xc) = (uVar5 & 0x1f) << 0x10 | *(unsigned int *)(iVar1 + 0xc) & 0xffe0ffff;
    uVar5 = fn_82AB71F0(param_2,5,0);
    *(unsigned int *)(iVar1 + 0xc) = (uVar5 & 0x1f) << 0x18 | *(unsigned int *)(iVar1 + 0xc) & 0xe0ffffff;
    uVar5 = fn_82AB71F0(param_2,4,0);
    uVar5 = (uVar5 & 7) << 0x15 | *(unsigned int *)(iVar1 + 0xc) & 0xff1fffff;
    *(unsigned int *)(iVar1 + 0xc) = uVar5;
    *(unsigned int *)(iVar1 + 0x2c) = uVar5;
    *(unsigned int *)(iVar1 + 0x30) = uVar5;
    *(unsigned int *)(iVar1 + 0x34) = uVar5;
  }
  return;
}

