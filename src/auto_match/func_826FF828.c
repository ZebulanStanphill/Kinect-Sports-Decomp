typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_54;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_8268C510();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_8269A418();
extern int fn_8269F500();
extern int fn_826BD928();
extern int fn_826F5BA0();
extern int fn_826F5C10();
extern int fn_826FC388();
extern int fn_826FC420();
extern int fn_826FF580();
extern unsigned int iStack_60;
extern unsigned int uStack_5c;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_826FF828(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  bool bVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  int *piVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  char in_RESERVE;
  int iStack_60;
  unsigned int uStack_5c;
  char *pcStack_58;
  unsigned int auStack_54 [21];
  
  lVar8 = 0;
  auStack_54[0] = 0;
  uVar9 = 0xffffffffffffffff;
  iStack_60 = fn_82694700((unsigned __int64)*(unsigned int *)(param_1 + 0x9e4) + 0x254);
  *(int *)(iStack_60 + 8) = *(int *)(iStack_60 + 8) + 1;
  uVar2 = fn_826F5BA0(param_1,&iStack_60);
  lVar5 = (unsigned __int64)*(unsigned int *)(iStack_60 + 8) - 1;
  *(int *)(iStack_60 + 8) = (int)lVar5;
  if (lVar5 == 0) {
    fn_826944C8(iStack_60);
  }
  if (uVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_826BD928(uVar2 + 0x68);
  }
  if (iVar3 != 0) {
    uVar9 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x1a8);
    uVar2 = -(unsigned int)(uVar9 == 0xffffffffffffffff) & uVar2;
  }
  if (uVar2 == 0) {
    if ((int)uVar9 == -1) {
      pcStack_58 = "";
      uVar9 = fn_8269A418(*(unsigned int *)(param_1 + 0x68));
      uVar9 = fn_826F5C10(param_2,&pcStack_58,-(6 < uVar9) & 1);
      if (*pcStack_58 != '\0') {
        uVar9 = 0xffffffffffffffff;
      }
      if ((int)uVar9 == -1) {
        return;
      }
    }
    lVar5 = fn_8267B890(*(unsigned int *)(param_1 + 0x14),0x80,0);
    if (lVar5 == 0) {
      iVar3 = 0;
    }
    else {
      fn_8268C510(auStack_54,param_3);
      lVar8 = 2;
      iVar3 = fn_826FC420(lVar5,uVar9,auStack_54,param_4,1,0);
    }
    if (lVar8 == 0) goto LAB_826ffa5c;
    lVar5 = ((unsigned __int64)auStack_54[0] & 0xfffffffc) + 4;
    bVar1 = false;
    do {
      puVar6 = (unsigned int *)lVar5;
      uVar9 = (unsigned __int64)*puVar6;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar9 - 1,0,lVar5);
        *puVar6 = uVar2;
        bVar1 = true;
      }
    } while (!bVar1);
  }
  else {
    lVar5 = fn_8267B890(*(unsigned int *)(param_1 + 0x14),0x80,0);
    if (lVar5 == 0) {
      iVar3 = 0;
    }
    else {
      fn_8268C510(&uStack_5c,param_3);
      uVar9 = (unsigned __int64)*(unsigned int *)(uVar2 + 0x80);
      lVar8 = 1;
      if (*(unsigned int *)(uVar2 + 0x80) == 0) {
        uVar9 = fn_8269F500(uVar2);
      }
      iVar3 = fn_826FC388(lVar5,uVar9,&uStack_5c,param_4,1,0);
    }
    if (lVar8 == 0) goto LAB_826ffa5c;
    lVar5 = ((unsigned __int64)uStack_5c & 0xfffffffc) + 4;
    bVar1 = false;
    do {
      puVar6 = (unsigned int *)lVar5;
      uVar9 = (unsigned __int64)*puVar6;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar9 - 1,0,lVar5);
        *puVar6 = uVar2;
        bVar1 = true;
      }
    } while (!bVar1);
  }
  if (uVar9 == 1) {
    fn_8267BE38();
  }
LAB_826ffa5c:
  if (iVar3 != 0) {
    iVar4 = (**(int (***)())(*(int *)(param_1 + 8) + 0xc))(param_1 + 8,0x17);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0xb24) + 1;
      *(int *)(param_1 + 0xb24) = iVar4;
      *(int *)(iVar3 + 0x40) = iVar4;
      piVar7 = *(int **)(param_1 + 0xb20);
      if (piVar7 == (int *)0x0) {
        *(int *)(param_1 + 0xb20) = iVar3;
      }
      else {
        for (; *piVar7 != 0; piVar7 = (int *)*piVar7) {
        }
        *piVar7 = iVar3;
      }
    }
    else {
      fn_8267C4F0();
      fn_826FF580(param_1,iVar3);
    }
  }
  return;
}

