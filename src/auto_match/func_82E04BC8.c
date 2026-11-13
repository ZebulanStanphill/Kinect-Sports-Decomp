typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82D04B20();
extern int fn_82D04C78();
extern int fn_82D056B8();


void fn_82E04BC8(int param_1,unsigned __int64 param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  int iVar9;
  int iVar10;
  
  fn_82D04B20(param_2);
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar9 = 0;
    do {
      puVar8 = (unsigned int *)(iVar9 + *(int *)(param_1 + 8));
      pcVar3 = (char *)(*puVar8 & 0xfffffffe);
      pcVar4 = (char *)(puVar8[1] & 0xfffffffe);
      cVar2 = *pcVar3;
      pcVar1 = pcVar3;
      while (cVar2 != '\0') {
        if (((cVar2 < '!') || (cVar2 == '=')) || (cVar2 == ';')) {
          bVar5 = true;
          goto LAB_82e04c70;
        }
        pcVar1 = pcVar1 + 1;
        cVar2 = *pcVar1;
      }
      bVar5 = false;
LAB_82e04c70:
      uVar6 = 0xffffffff8200c4f8;
      if (!bVar5) {
        uVar6 = 0xffffffff82196582;
      }
      cVar2 = *pcVar4;
      while (cVar2 != '\0') {
        if (((cVar2 < '!') || (cVar2 == '=')) || (cVar2 == ';')) {
          bVar5 = true;
          goto LAB_82e04cc4;
        }
        pcVar4 = pcVar4 + 1;
        cVar2 = *pcVar4;
      }
      bVar5 = false;
LAB_82e04cc4:
      uVar7 = 0xffffffff8200c4f8;
      if (!bVar5) {
        uVar7 = 0xffffffff82196582;
      }
      fn_82D056B8(param_2,0xffffffff82149bb4,uVar6,pcVar3,uVar6,uVar7);
      if (iVar10 < *(int *)(param_1 + 0xc) + -1) {
        fn_82D04C78(param_2,0xffffffff82149bc4);
      }
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 8;
    } while (iVar10 < *(int *)(param_1 + 0xc));
  }
  return;
}

