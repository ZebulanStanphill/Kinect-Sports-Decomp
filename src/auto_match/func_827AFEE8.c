typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_827AFDE0();


void fn_827AFEE8(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned int *puVar9;
  int iVar10;
  
  uVar8 = (unsigned __int64)(unsigned int)param_1[1];
  bVar2 = false;
  uVar3 = param_2[1] + *param_2;
  if (uVar8 != 0) {
    iVar10 = 0;
    do {
      uVar6 = *param_2;
      puVar9 = (unsigned int *)(iVar10 + *param_1);
      uVar1 = *puVar9;
      uVar7 = puVar9[1];
      uVar5 = uVar1 + uVar7;
      if ((uVar6 < uVar1) || (uVar5 < uVar6)) {
        if ((uVar6 < uVar1) && (uVar1 < uVar3)) {
          bVar2 = true;
          uVar4 = *puVar9 - (uVar1 - uVar6);
          uVar7 = uVar7 + (uVar1 - uVar6);
          *puVar9 = uVar4;
          puVar9[3] = uVar4;
          puVar9[1] = uVar7;
          puVar9[4] = uVar7;
          *(unsigned char *)(param_1 + 6) = 0;
          *(unsigned char *)((int)param_1 + 0x19) = 0;
          if (uVar5 <= uVar3) {
            uVar6 = (puVar9[1] - uVar5) + uVar3;
            puVar9[1] = uVar6;
            puVar9[4] = uVar6;
          }
        }
      }
      else if (uVar5 < uVar3) {
        bVar2 = true;
        uVar6 = (uVar7 - uVar5) + uVar3;
        puVar9[1] = uVar6;
        puVar9[4] = uVar6;
        *(unsigned char *)(param_1 + 6) = 0;
        *(unsigned char *)((int)param_1 + 0x19) = 0;
      }
      iVar10 = iVar10 + 0x28;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (!bVar2) {
    fn_827AFDE0();
  }
  return;
}

