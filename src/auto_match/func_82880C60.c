#define true 1
extern int fn_82880818();
extern int fn_828EA790();
extern unsigned int *lbl_83212A04;


unsigned __int64 fn_82880C60(int *param_1,unsigned char *param_2,unsigned __int64 param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char cVar7;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  unsigned __int64 uVar10;
  int *apiStack_50 [20];
  
  piVar6 = lbl_83212A04;
  uVar10 = 0xffffffffffffffff;
  piVar3 = (int *)*lbl_83212A04;
  piVar5 = piVar3;
  do {
    if (piVar5 == piVar6) {
LAB_82880d0c:
      if ((param_1 != (int *)0x0) && (iVar4 = *param_1, apiStack_50[0] = piVar3, iVar4 != 0)) {
        while (apiStack_50[0] != piVar6) {
          if (*(int *)(apiStack_50[0][4] + 0x28) == iVar4) {
            return (unsigned __int64)(unsigned int)apiStack_50[0][3];
          }
          fn_828EA790(apiStack_50);
        }
      }
      return uVar10;
    }
    pbVar8 = (unsigned char *)(piVar5[4] + 0x34);
    pbVar9 = param_2;
    do {
      bVar1 = *pbVar9;
      bVar2 = *pbVar8;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar9 = pbVar9 + 1;
      pbVar8 = pbVar8 + 1;
    } while (pbVar9 != param_2 + 0x24);
    apiStack_50[0] = piVar5;
    if (((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) &&
       (cVar7 = fn_82880818(piVar5[4],param_3), cVar7 != '\0')) {
      uVar10 = (unsigned __int64)(unsigned int)piVar5[3];
      if (piVar5[3] != 0xffffffff) {
        return uVar10;
      }
      goto LAB_82880d0c;
    }
    fn_828EA790(apiStack_50);
    piVar5 = apiStack_50[0];
  } while( true );
}

