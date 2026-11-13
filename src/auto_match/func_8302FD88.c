typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT13(h,l) ((unsigned int)((((unsigned char)(h)) << 24) | ((unsigned int)(l))))
extern int fn_8302FC98();
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned __int64 fn_8302FD88(int param_1,int *param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  int iVar2;
  bool bVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  unsigned char bVar7;
  int *piVar8;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  
  uVar5 = 1;
  if ((param_2 != (int *)0x0) && (piVar8 = (int *)*param_2, piVar8 != (int *)param_2[1])) {
    bVar7 = (((unsigned __int64)(uStack_48) >> 0) & 0xFF);
    do {
      iVar2 = *piVar8;
      for (puVar1 = *(unsigned int **)(param_1 + 0xe4); puVar1 != (unsigned int *)0x0;
          puVar1 = (unsigned int *)*puVar1) {
        if (puVar1[1] == iVar2) {
          if (puVar1 + 2 != (unsigned int *)0x0) {
            uStack_50 = puVar1[2];
            uStack_4c = puVar1[3];
            uStack_48 = ((((unsigned __int64)(uStack_48)) & (~(((unsigned __int64)0xFF) << 0))) | ((((unsigned __int64)((unsigned char)((unsigned int)puVar1[4] >> 0x18))) & ((unsigned __int64)0xFF)) << 0));
            uVar4 = puVar1[4];
            bVar7 = (((unsigned __int64)(uStack_48) >> 0) & 0xFF);
            goto LAB_8302fe00;
          }
          break;
        }
      }
      uStack_4c = 0;
      uStack_50 = 0;
      uStack_48 = CONCAT13(bVar7,(((unsigned __int64)(uStack_48) >> 8) & 0xFFFFFF)) & 0x7ffffff;
      uVar4 = uStack_48;
      bVar7 = bVar7 & 7;
LAB_8302fe00:
      uStack_48 = uVar4;
      if (((*(unsigned char *)(param_1 + 0x3e) & 0x40) == 0) || ((bVar7 & 8) == 0)) {
LAB_8302fe90:
        uVar5 = fn_8302FC98(param_1,iVar2,&uStack_50,param_4);
        if ((int)uVar5 != 1) {
          return uVar5;
        }
      }
      else {
        bVar3 = false;
        if (param_3 != (unsigned int *)0x0) {
          for (piVar6 = (int *)*param_3; piVar6 != (int *)param_3[1]; piVar6 = piVar6 + 1) {
            if (*piVar6 == iVar2) {
              bVar3 = true;
              break;
            }
          }
        }
        if (!bVar3) goto LAB_8302fe90;
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != (int *)param_2[1]);
  }
  return uVar5;
}

