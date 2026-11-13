typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern int fn_82FFE0F0();
extern int fn_83015B10();
extern int fn_83017108();
extern unsigned int lbl_821AAD20;


double fn_830176A0(__int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  bool bVar1;
  char cVar3;
  float *pfVar2;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  unsigned char auStack_50 [4];
  float afStack_4c [19];
  
  if ((param_4 & 0xffffffff) != 0) {
    cVar3 = fn_83017108(param_1,param_4,param_3,afStack_4c,auStack_50);
    bVar1 = true;
    if (cVar3 != '\0') goto LAB_830176f0;
  }
  bVar1 = false;
LAB_830176f0:
  iVar4 = *(int *)(param_2 + 0x10);
  dVar6 = (double)lbl_821AAD20;
  dVar7 = dVar6;
  if (iVar4 != *(int *)(param_2 + 0x14)) {
    do {
      if (((param_4 & 0xffffffff) == 0) ||
         ((unsigned __int64)*(unsigned int *)(iVar4 + 4) == (param_4 & 0xffffffff))) {
        if (!bVar1) {
          if ((param_4 & 0xffffffff) == 0) {
            cVar3 = fn_83017108(param_1,*(unsigned int *)(iVar4 + 4),param_3,afStack_4c,auStack_50);
            if (cVar3 != '\0') goto LAB_83017794;
            pfVar2 = (float *)fn_82FFE0F0(param_1 + 0x61c,*(unsigned int *)(iVar4 + 4));
            dVar5 = dVar7;
            if (pfVar2 != (float *)0x0) {
              dVar5 = (double)*pfVar2;
            }
          }
          else {
            pfVar2 = (float *)fn_82FFE0F0(param_1 + 0x61c,*(unsigned int *)(iVar4 + 4));
            dVar5 = dVar7;
            if (pfVar2 != (float *)0x0) {
              dVar5 = (double)*pfVar2;
            }
          }
          afStack_4c[0] = (float)dVar5;
        }
LAB_83017794:
        dVar5 = (double)fn_83015B10((double)afStack_4c[0],iVar4 + 8);
        dVar6 = (double)(float)(dVar5 + dVar6);
      }
      iVar4 = iVar4 + 0x14;
    } while (iVar4 != *(int *)(param_2 + 0x14));
  }
  return dVar6;
}

