extern unsigned int *auStack_40;
extern int fn_82820EF8();
extern int fn_82824308();
extern int fn_82824338();
extern int fn_828243A0();
extern int fn_828243B8();
extern int fn_828243D0();
extern int fn_82827750();
extern int fn_82829830();
extern int fn_8282A0E8();
extern int fn_8282A380();
extern int fn_828313D0();
extern unsigned int uStack_34;


unsigned __int64 fn_8282A898(unsigned __int64 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar6;
  int *piVar5;
  unsigned int *puVar7;
  unsigned char auStack_40 [8];
  int *piStack_38;
  unsigned int uStack_34;
  
  iVar1 = *param_4;
  iVar2 = *(int *)(iVar1 + 8);
  cVar6 = fn_828243A0(param_2);
  if (((cVar6 == '\0') || (param_2[6] != 0)) && (cVar6 = fn_828243B8(param_2), cVar6 == '\0')) {
    cVar6 = fn_828243D0(param_2);
    if (cVar6 != '\0') {
      while ((cVar6 = fn_82824308(param_2), cVar6 == '\0' &&
             (cVar6 = fn_82824338(param_2), cVar6 == '\0'))) {
        param_2 = (int *)(**(int **)(iVar2 + 0x388) + *param_2 * 0x20);
      }
    }
    cVar6 = fn_82824338(param_2);
    if (cVar6 == '\0') {
      return 1;
    }
    if ((*param_3 != 0) && (cVar6 = fn_8282A0E8(iVar2,param_3), cVar6 != '\0')) {
      piStack_38 = (int *)*param_3;
      fn_8282A380(&piStack_38,iVar2,iVar1,auStack_40);
      iVar3 = *(int *)(iVar2 + 0x2e4);
      iVar4 = *(int *)(iVar2 + 0x2d8);
      piVar5 = (int *)fn_828313D0(*(unsigned int *)(iVar1 + 0x4c),auStack_40);
      puVar7 = (unsigned int *)(*piVar5 * 4 + iVar3 + iVar4);
      piStack_38 = param_3;
      fn_82829830(iVar1,&piStack_38);
      *puVar7 = uStack_34;
      cVar6 = fn_82827750(iVar2);
      if (cVar6 != '\0') {
        fn_82820EF8(puVar7,4);
      }
      piVar5 = (int *)fn_828313D0(*(unsigned int *)(iVar1 + 0x4c),auStack_40);
      *piVar5 = *piVar5 + 1;
      *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
    }
  }
  return 0;
}

