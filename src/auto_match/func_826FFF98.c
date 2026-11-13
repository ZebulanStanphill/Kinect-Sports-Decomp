typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_40;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_8268C510();
extern int fn_82696BC8();
extern int fn_826FC2F0();
extern int fn_826FF580();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_826FFF98(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  bool bVar2;
  __int64 lVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int *puVar7;
  int *piVar8;
  char in_RESERVE;
  unsigned int auStack_40 [16];
  
  auStack_40[0] = 0;
  lVar3 = fn_8267B890(*(unsigned int *)(param_1 + 0x14),0x80,0);
  if (lVar3 == 0) {
    iVar4 = 0;
  }
  else {
    fn_8268C510(auStack_40,param_3);
    iVar4 = fn_826FC2F0(lVar3,auStack_40,param_4,1,0);
    lVar3 = ((unsigned __int64)auStack_40[0] & 0xfffffffc) + 4;
    bVar2 = false;
    do {
      puVar7 = (unsigned int *)lVar3;
      uVar6 = (unsigned __int64)*puVar7;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar6 - 1,0,lVar3);
        *puVar7 = uVar1;
        bVar2 = true;
      }
    } while (!bVar2);
    if (uVar6 == 1) {
      fn_8267BE38();
    }
  }
  if (iVar4 != 0) {
    fn_82696BC8(iVar4 + 0x30,param_2);
    iVar5 = (**(int (***)())(*(int *)(param_1 + 8) + 0xc))(param_1 + 8,0x17);
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0xb24) + 1;
      *(int *)(param_1 + 0xb24) = iVar5;
      *(int *)(iVar4 + 0x40) = iVar5;
      piVar8 = *(int **)(param_1 + 0xb20);
      if (piVar8 == (int *)0x0) {
        *(int *)(param_1 + 0xb20) = iVar4;
      }
      else {
        for (; *piVar8 != 0; piVar8 = (int *)*piVar8) {
        }
        *piVar8 = iVar4;
      }
    }
    else {
      fn_8267C4F0();
      fn_826FF580(param_1,iVar4);
    }
  }
  return;
}

