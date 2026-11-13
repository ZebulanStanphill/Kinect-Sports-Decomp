typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_4c;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8268C510();
extern int fn_82696BC8();
extern int fn_8269F500();
extern int fn_826BD928();
extern int fn_826FC388();
extern int fn_826FC420();
extern int fn_826FFAD8();
extern unsigned int uStack_50;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_827035B0(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5
                  )

{
  unsigned int uVar1;
  bool bVar2;
  int iVar4;
  __int64 lVar3;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  char in_RESERVE;
  unsigned int uStack_50;
  unsigned int auStack_4c [19];
  
  lVar7 = 0;
  auStack_4c[0] = 0;
  if (param_2 == 0) {
    return;
  }
  uVar8 = 0xffffffffffffffff;
  iVar4 = fn_826BD928(param_2 + 0x68);
  if (iVar4 != 0) {
    uVar8 = (unsigned __int64)*(unsigned int *)(iVar4 + 0x1a8);
    param_2 = -(unsigned int)(uVar8 == 0xffffffffffffffff) & param_2;
  }
  if (param_2 == 0) {
    if ((int)uVar8 == -1) {
      return;
    }
    lVar3 = fn_8267B890(*(unsigned int *)(param_1 + 0x14),0x80,0);
    if (lVar3 == 0) {
      uVar8 = 0;
    }
    else {
      fn_8268C510(auStack_4c,param_3);
      lVar7 = 2;
      uVar8 = fn_826FC420(lVar3,uVar8,auStack_4c,param_4,0,0);
    }
    if (lVar7 == 0) goto LAB_82703748;
    lVar7 = ((unsigned __int64)auStack_4c[0] & 0xfffffffc) + 4;
    bVar2 = false;
    do {
      puVar6 = (unsigned int *)lVar7;
      uVar5 = (unsigned __int64)*puVar6;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,lVar7);
        *puVar6 = uVar1;
        bVar2 = true;
      }
    } while (!bVar2);
  }
  else {
    lVar3 = fn_8267B890(*(unsigned int *)(param_1 + 0x14),0x80,0);
    if (lVar3 == 0) {
      uVar8 = 0;
    }
    else {
      fn_8268C510(&uStack_50,param_3);
      uVar8 = (unsigned __int64)*(unsigned int *)(param_2 + 0x80);
      lVar7 = 1;
      if (*(unsigned int *)(param_2 + 0x80) == 0) {
        uVar8 = fn_8269F500(param_2);
      }
      uVar8 = fn_826FC388(lVar3,uVar8,&uStack_50,param_4,0,0);
    }
    if (lVar7 == 0) goto LAB_82703748;
    lVar7 = ((unsigned __int64)uStack_50 & 0xfffffffc) + 4;
    bVar2 = false;
    do {
      puVar6 = (unsigned int *)lVar7;
      uVar5 = (unsigned __int64)*puVar6;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,lVar7);
        *puVar6 = uVar1;
        bVar2 = true;
      }
    } while (!bVar2);
  }
  if (uVar5 == 1) {
    fn_8267BE38();
  }
LAB_82703748:
  if ((uVar8 & 0xffffffff) != 0) {
    fn_82696BC8(uVar8 + 0x20,param_5);
    fn_826FFAD8(param_1,uVar8);
  }
  return;
}

