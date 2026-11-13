extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_82824308();
extern int fn_82824338();
extern int fn_828243A0();
extern int fn_828243B8();
extern int fn_828243D0();
extern int fn_828299A8();
extern int fn_8282A0E8();
extern int fn_828313D0();


unsigned __int64 fn_8282A748(unsigned __int64 param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar6;
  int *piVar5;
  int iVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  unsigned char auStack_60 [8];
  unsigned int auStack_58 [22];
  
  iVar1 = *param_4;
  iVar2 = param_4[1];
  iVar3 = *(int *)(iVar1 + 8);
  iVar4 = **(int **)(iVar3 + 0x388);
  cVar6 = fn_828243A0(param_2);
  if (((cVar6 == '\0') || (param_2[6] != 0)) && (cVar6 = fn_828243B8(param_2), cVar6 == '\0')) {
    cVar6 = fn_828243D0(param_2);
    if (cVar6 != '\0') {
      while ((cVar6 = fn_82824308(param_2), cVar6 == '\0' &&
             (cVar6 = fn_82824338(param_2), cVar6 == '\0'))) {
        param_2 = (int *)(*param_2 * 0x20 + **(int **)(iVar3 + 0x388));
      }
    }
    cVar6 = fn_82824338(param_2);
    if (cVar6 == '\0') {
      return 1;
    }
    uVar8 = 0;
    if (param_4[3] != 0) {
      do {
        iVar7 = *(int *)(iVar2 * 0x20 + iVar4 + 0x10) * uVar8;
        puVar9 = (unsigned int *)(iVar7 + param_3);
        if ((*(int *)(iVar7 + param_3) != 0) && (cVar6 = fn_8282A0E8(iVar3,puVar9), cVar6 != '\0')
           ) {
          auStack_58[0] = *puVar9;
          fn_828299A8(auStack_58,iVar3,auStack_60);
          piVar5 = (int *)fn_828313D0(*(unsigned int *)(iVar1 + 0x4c),auStack_60);
          *piVar5 = *piVar5 + 1;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (unsigned int)param_4[3]);
    }
  }
  return 0;
}

