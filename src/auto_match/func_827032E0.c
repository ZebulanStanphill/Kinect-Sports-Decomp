typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_60;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8268C510();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82696BC8();
extern int fn_8269A418();
extern int fn_8269F500();
extern int fn_826A98D8();
extern int fn_826BD928();
extern int fn_826F5BA0();
extern int fn_826F5C10();
extern int fn_826FC388();
extern int fn_826FC420();
extern int fn_826FFAD8();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int uStack_68;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_827032E0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  bool bVar1;
  __int64 lVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  char in_RESERVE;
  int iStack_70;
  int iStack_6c;
  unsigned int uStack_68;
  char *pcStack_64;
  unsigned int auStack_60 [24];
  
  uVar7 = 0xffffffffffffffff;
  bVar1 = (param_4 & 0xffffffff) == 0;
  lVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x9e4) + 0x254;
  if (bVar1) {
    iStack_70 = fn_82694700(lVar2);
    *(int *)(iStack_70 + 8) = *(int *)(iStack_70 + 8) + 1;
    uVar3 = fn_826F5BA0(param_1,&iStack_70);
  }
  else {
    iStack_6c = fn_82694700(lVar2);
    *(int *)(iStack_6c + 8) = *(int *)(iStack_6c + 8) + 1;
    uVar3 = fn_826A98D8(param_4,&iStack_6c,0);
  }
  if ((bVar1) &&
     (lVar2 = (unsigned __int64)*(unsigned int *)(iStack_70 + 8) - 1, *(int *)(iStack_70 + 8) = (int)lVar2,
     lVar2 == 0)) {
    fn_826944C8(iStack_70);
  }
  if ((!bVar1) &&
     (lVar2 = (unsigned __int64)*(unsigned int *)(iStack_6c + 8) - 1, *(int *)(iStack_6c + 8) = (int)lVar2,
     lVar2 == 0)) {
    fn_826944C8(iStack_6c);
  }
  bVar1 = false;
  if (uVar3 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = fn_826BD928(uVar3 + 0x68);
  }
  if (iVar4 != 0) {
    uVar7 = (unsigned __int64)*(unsigned int *)(iVar4 + 0x1a8);
    uVar3 = -(unsigned int)(uVar7 == 0xffffffffffffffff) & uVar3;
  }
  if (uVar3 == 0) {
    if ((int)uVar7 == -1) {
      pcStack_64 = "";
      uVar7 = fn_8269A418(*(unsigned int *)(param_1 + 0x68));
      uVar7 = fn_826F5C10(param_2,&pcStack_64,-(6 < uVar7) & 1);
      if (*pcStack_64 != '\0') {
        uVar7 = 0xffffffffffffffff;
      }
      if ((int)uVar7 == -1) {
        return;
      }
    }
    lVar2 = fn_8267B890(*(unsigned int *)(param_1 + 0x14),0x80,0);
    if (lVar2 == 0) {
      uVar7 = 0;
      goto LAB_82703588;
    }
    fn_8268C510(auStack_60,param_3);
    uVar7 = fn_826FC420(lVar2,uVar7,auStack_60,param_5,0,0);
    lVar2 = ((unsigned __int64)auStack_60[0] & 0xfffffffc) + 4;
    bVar1 = false;
    do {
      puVar6 = (unsigned int *)lVar2;
      uVar5 = (unsigned __int64)*puVar6;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar5 - 1,0,lVar2);
        *puVar6 = uVar3;
        bVar1 = true;
      }
    } while (!bVar1);
  }
  else {
    lVar2 = fn_8267B890(*(unsigned int *)(param_1 + 0x14),0x80,0);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      fn_8268C510(&uStack_68,param_3);
      uVar7 = (unsigned __int64)*(unsigned int *)(uVar3 + 0x80);
      bVar1 = true;
      if (*(unsigned int *)(uVar3 + 0x80) == 0) {
        uVar7 = fn_8269F500(uVar3);
      }
      uVar7 = fn_826FC388(lVar2,uVar7,&uStack_68,param_5,0,0);
    }
    if (!bVar1) goto LAB_82703588;
    lVar2 = ((unsigned __int64)uStack_68 & 0xfffffffc) + 4;
    bVar1 = false;
    do {
      puVar6 = (unsigned int *)lVar2;
      uVar5 = (unsigned __int64)*puVar6;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar5 - 1,0,lVar2);
        *puVar6 = uVar3;
        bVar1 = true;
      }
    } while (!bVar1);
  }
  if (uVar5 == 1) {
    fn_8267BE38();
  }
LAB_82703588:
  if ((uVar7 & 0xffffffff) != 0) {
    fn_82696BC8(uVar7 + 0x20,param_6);
    fn_826FFAD8(param_1,uVar7);
  }
  return;
}

