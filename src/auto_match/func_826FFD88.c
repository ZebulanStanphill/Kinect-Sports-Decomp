typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_4c;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_8268C510();
extern int fn_8269F500();
extern int fn_826BD928();
extern int fn_826FC388();
extern int fn_826FC420();
extern int fn_826FF580();
extern unsigned int uStack_50;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_826FFD88(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  bool bVar2;
  int iVar4;
  __int64 lVar3;
  int iVar5;
  unsigned int *puVar6;
  int *piVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  char in_RESERVE;
  unsigned int uStack_50;
  unsigned int auStack_4c [19];
  
  lVar8 = 0;
  auStack_4c[0] = 0;
  if (param_2 == 0) {
    return;
  }
  uVar9 = 0xffffffffffffffff;
  iVar4 = fn_826BD928(param_2 + 0x68);
  if (iVar4 != 0) {
    uVar9 = (unsigned __int64)*(unsigned int *)(iVar4 + 0x1a8);
    param_2 = -(unsigned int)(uVar9 == 0xffffffffffffffff) & param_2;
  }
  if (param_2 == 0) {
    if ((int)uVar9 == -1) {
      return;
    }
    lVar3 = fn_8267B890(*(unsigned int *)(param_1 + 0x14),0x80,0);
    if (lVar3 == 0) {
      iVar4 = 0;
    }
    else {
      fn_8268C510(auStack_4c,param_3);
      lVar8 = 2;
      iVar4 = fn_826FC420(lVar3,uVar9,auStack_4c,param_4,1,0);
    }
    if (lVar8 == 0) goto LAB_826fff1c;
    lVar8 = ((unsigned __int64)auStack_4c[0] & 0xfffffffc) + 4;
    bVar2 = false;
    do {
      puVar6 = (unsigned int *)lVar8;
      uVar9 = (unsigned __int64)*puVar6;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar9 - 1,0,lVar8);
        *puVar6 = uVar1;
        bVar2 = true;
      }
    } while (!bVar2);
  }
  else {
    lVar3 = fn_8267B890(*(unsigned int *)(param_1 + 0x14),0x80,0);
    if (lVar3 == 0) {
      iVar4 = 0;
    }
    else {
      fn_8268C510(&uStack_50,param_3);
      uVar9 = (unsigned __int64)*(unsigned int *)(param_2 + 0x80);
      lVar8 = 1;
      if (*(unsigned int *)(param_2 + 0x80) == 0) {
        uVar9 = fn_8269F500(param_2);
      }
      iVar4 = fn_826FC388(lVar3,uVar9,&uStack_50,param_4,1,0);
    }
    if (lVar8 == 0) goto LAB_826fff1c;
    lVar8 = ((unsigned __int64)uStack_50 & 0xfffffffc) + 4;
    bVar2 = false;
    do {
      puVar6 = (unsigned int *)lVar8;
      uVar9 = (unsigned __int64)*puVar6;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar9 - 1,0,lVar8);
        *puVar6 = uVar1;
        bVar2 = true;
      }
    } while (!bVar2);
  }
  if (uVar9 == 1) {
    fn_8267BE38();
  }
LAB_826fff1c:
  if (iVar4 != 0) {
    iVar5 = (**(int (***)())(*(int *)(param_1 + 8) + 0xc))(param_1 + 8,0x17);
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0xb24) + 1;
      *(int *)(param_1 + 0xb24) = iVar5;
      *(int *)(iVar4 + 0x40) = iVar5;
      piVar7 = *(int **)(param_1 + 0xb20);
      if (piVar7 == (int *)0x0) {
        *(int *)(param_1 + 0xb20) = iVar4;
      }
      else {
        for (; *piVar7 != 0; piVar7 = (int *)*piVar7) {
        }
        *piVar7 = iVar4;
      }
    }
    else {
      fn_8267C4F0();
      fn_826FF580(param_1,iVar4);
    }
  }
  return;
}

