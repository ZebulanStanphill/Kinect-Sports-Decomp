#define true 1
extern int fn_82986F98();
extern int fn_82F69148();


unsigned __int64
fn_829871B0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned __int64 param_7,char *param_8)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  unsigned __int64 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char acStack_270 [624];
  
  acStack_270[0] = '\0';
  pcVar7 = param_8;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  pcVar8 = pcVar7 + (-1 - (int)param_8);
  if (pcVar8 < (char *)0x1fd) {
    pcVar10 = pcVar8;
    if ((pcVar8 != (char *)0x0) && (fn_82F69148(acStack_270,param_8,pcVar8), pcVar8 != (char *)0x0)
       ) {
      acStack_270[(int)pcVar8] = ':';
      pcVar10 = pcVar7 + (1 - (int)param_8);
      acStack_270[(int)(pcVar8 + 1)] = ':';
      acStack_270[(int)pcVar10] = '\0';
    }
    if (pcVar10 < (char *)0x1ff) {
      do {
        if (param_2 == 0) {
          return 0;
        }
        iVar3 = *(int *)(param_2 + 8);
        if ((iVar3 != 0) && (*(int *)(iVar3 + 4) == 6)) {
          pcVar7 = *(char **)(*(int *)(iVar3 + 0x14) + 0x18);
          pcVar8 = pcVar7;
          do {
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          pcVar6 = (char *)0x0;
          pcVar9 = pcVar10;
          do {
            if (pcVar8 + (-1 - (int)pcVar7) <= pcVar6) break;
            pcVar4 = pcVar6 + *(int *)(*(int *)(iVar3 + 0x14) + 0x18);
            pcVar6 = pcVar6 + 1;
            acStack_270[(int)pcVar9] = *pcVar4;
            pcVar9 = pcVar9 + 1;
          } while (pcVar9 < (char *)0x1ff);
          if ((char *)0x1fe < pcVar9) {
            return 0xffffffff80004005;
          }
          acStack_270[(int)pcVar9] = '\0';
          if (*(int *)(iVar3 + 0x10) == 6) {
            uVar5 = fn_829871B0(param_1,*(unsigned int *)(iVar3 + 0x18),param_3,param_4,param_5,
                                  param_6,param_7,acStack_270);
          }
          else {
            pcVar7 = *(char **)(param_4 + 8);
            pcVar8 = acStack_270;
            acStack_270[(int)pcVar9] = '\0';
            do {
              cVar1 = *pcVar7;
              cVar2 = *pcVar8;
              if (cVar1 == '\0') break;
              pcVar7 = pcVar7 + 1;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 == cVar2);
            if (cVar1 != cVar2) goto LAB_829873a8;
            uVar5 = fn_82986F98(param_1,param_2,param_3,param_4,param_5,param_6,0,param_7);
          }
          if ((int)uVar5 < 0) {
            return uVar5;
          }
        }
LAB_829873a8:
        param_2 = *(int *)(param_2 + 0xc);
      } while( true );
    }
  }
  return 0xffffffff80004005;
}

