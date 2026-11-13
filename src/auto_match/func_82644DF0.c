typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82643B08();
extern int fn_82643C30();
extern int fn_82644568();
extern int fn_8264F3F0();
extern int fn_82F68CC0();
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


int fn_82644DF0(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5,
                 unsigned __int64 param_6,__int64 param_7)

{
  bool bVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  
  bVar1 = false;
  uVar3 = (unsigned int)param_3;
  uVar7 = (unsigned int)param_4;
  iVar6 = param_2;
  uStack_5c = uVar3;
  if (*(int *)(param_1 + 0x3460) == 0) {
    if (*(int *)(param_1 + 0x2b04) != 0) {
      uVar2 = KfAcquireSpinLock(param_1 + 0x2b08);
      if (*(int *)(param_1 + 0x2b04) != 0) {
        uVar4 = 0x8f000000;
        if ((int)param_7 == 0) {
          uVar4 = 0x81000000;
        }
        *(unsigned int *)(param_2 + 4) = uVar4 | uVar7;
        *(unsigned int *)(param_2 + 8) = uVar3;
        *(unsigned int *)(param_2 + 0xc) = 0xc0000000;
        iVar6 = param_2 + 0x10;
        fn_82643C30(param_6,param_2,iVar6);
        bVar1 = true;
        *(int *)(param_1 + 0x2b04) = *(int *)(param_1 + 0x2b04) + param_5;
      }
      KfReleaseSpinLock(param_1 + 0x2b08,uVar2);
      if (bVar1) {
        return iVar6;
      }
    }
    if ((*(int *)(param_1 + 0x54f4) != 0) || (bVar1 = false, *(int *)(param_1 + 0x5c18) != 0)) {
      bVar1 = true;
    }
    if ((((~*(unsigned int *)(param_1 + 0x5e88) & 0x100) == 0) || ((int)param_7 == 0)) || (!bVar1)) {
      *(int *)(param_1 + 0x2b04) = *(int *)(param_1 + 0x2b04) + param_5;
      uStack_60 = ((-(unsigned int)(param_7 != 0) & 0xe) - 0x7f) * 0x1000000 | uVar7 & 0xffffff;
      fn_82644568(param_1,&uStack_60,1);
    }
    else {
      *(int *)(param_1 + 0x2b04) = *(int *)(param_1 + 0x2b04) + param_5 + 1;
      fn_8264F3F0(param_1,param_3,param_4,param_6,0xffffffff8f000000);
    }
  }
  else {
    puVar5 = &uStack_60;
    uVar4 = 2;
    uStack_60 = ((-(unsigned int)(param_7 != 0) & 0xe) - 0x7f) * 0x1000000 | uVar7 & 0xffffff;
    while( true ) {
      uVar7 = *(int *)(param_1 + 0x3510) - *(int *)(param_1 + 0x350c) >> 2 & 0xfffffffe;
      if (uVar4 < uVar7) {
        uVar7 = uVar4;
      }
      fn_82F68CC0(*(int *)(param_1 + 0x350c),puVar5,uVar7 * 4);
      uVar4 = uVar4 - uVar7;
      puVar5 = puVar5 + uVar7;
      *(unsigned int *)(param_1 + 0x350c) = *(int *)(param_1 + 0x350c) + uVar7 * 4;
      if (uVar4 == 0) break;
      fn_82643B08(param_1 + 0x3500);
    }
  }
  return iVar6;
}

