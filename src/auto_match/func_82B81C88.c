#define true 1
extern int fn_82ABE190();


__int64 fn_82B81C88(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  char cVar3;
  unsigned int uVar4;
  int *piVar5;
  int iVar6;
  __int64 lVar7;
  int *piVar8;
  unsigned int uVar9;
  
  iVar1 = *(int *)(param_2 + 4);
  lVar7 = 0;
  do {
    if (iVar1 == 0) {
LAB_82b81cd0:
      if ((*(unsigned int *)(param_2 + 8) & 0x3f80) == 0x3700) {
        lVar7 = 0;
      }
      else {
        uVar2 = *(unsigned int *)(param_2 + 8) >> 0x13 & 7;
        piVar8 = (int *)(param_2 + 0x2c);
        for (uVar9 = 0; uVar9 < uVar2; uVar9 = uVar9 + 1) {
          iVar1 = *piVar8;
          cVar3 = fn_82ABE190(iVar1);
          if ((cVar3 != '\0') && ((*(unsigned int *)(*(int *)(iVar1 + 0xc) + 8) & 0x3f80) != 0x3e00)) {
            piVar5 = (int *)(param_2 + 0x2c);
            for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 1) {
              iVar6 = *piVar5;
              if (iVar6 == iVar1) goto LAB_82b81d70;
              if (*(int *)(iVar6 + 0xc) == *(int *)(iVar1 + 0xc)) goto LAB_82b81d68;
              piVar5 = piVar5 + 1;
            }
            iVar6 = 0;
LAB_82b81d68:
            if (iVar6 == iVar1) {
LAB_82b81d70:
              lVar7 = lVar7 + 1;
            }
          }
          piVar8 = piVar8 + 1;
        }
      }
      return lVar7;
    }
    if (*(int *)(iVar1 + 0x10) != 0) {
      cVar3 = fn_82ABE190(iVar1);
      if (cVar3 != '\0') {
        lVar7 = -1;
        goto LAB_82b81cd0;
      }
    }
    iVar1 = *(int *)(iVar1 + 8);
  } while( true );
}

