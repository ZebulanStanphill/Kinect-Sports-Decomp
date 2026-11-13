extern int fn_82BE1A10();
extern int fn_82BE1FE0();
extern int fn_82BE5100();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BEF650();
extern int fn_82BF0180();
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


unsigned __int64 fn_82BF08E0(int *param_1,int param_2)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  int iVar6;
  int *piVar7;
  unsigned __int64 uStack_60;
  unsigned __int64 uStack_58;
  unsigned __int64 uStack_50;
  unsigned __int64 uStack_48;
  unsigned int uStack_40;
  
  if (param_1[10] == 0) {
    uVar1 = 0;
  }
  else {
    fn_82BE1A10();
    lVar2 = fn_82BE1FE0();
    iVar6 = param_1[0xf];
    if (iVar6 != 0) {
      if ((*(__int64 *)(iVar6 + 0x70) != 0) && (*(__int64 *)(iVar6 + 0x70) != lVar2)) {
        *(unsigned __int64 *)(iVar6 + 0x70) = 0;
      }
      lVar5 = *(__int64 *)(param_1[0xf] + 0xd0);
      if ((lVar5 != 0) && (lVar5 != lVar2)) {
        *(unsigned __int64 *)(param_1[0xf] + 0xd0) = 0;
      }
    }
    piVar7 = param_1 + 7;
    iVar6 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    fn_82BE5340(piVar7);
    while (param_1[9] != 0) {
      iVar3 = fn_82BE5378(piVar7);
      if ((*(char *)((int)param_1 + 0x41) == '\0') || (*(int *)(iVar3 + 0x14) != 0)) {
        iVar4 = fn_82BE5100(iVar3);
        if (iVar4 == 0) {
          iVar3 = (**(int (***)())(*param_1 + 0x20))(param_1,param_1[9],&uStack_60,iVar6);
          if (iVar3 != 0) {
            iVar6 = 1;
          }
        }
        else {
          *(unsigned int *)(iVar3 + 0x60) = 3;
        }
      }
      fn_82BE5350(piVar7);
    }
    if ((param_2 == 0) && (((((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF) != 0 || ((((unsigned __int64)(uStack_48) >> 32) & 0xFFFFFFFF) != 0)))) {
      if (((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) == 0) || (iVar6 == 0)) {
        iVar6 = 1;
      }
      else {
        iVar6 = 2;
      }
    }
    else {
      iVar6 = 3;
    }
    if (iVar6 != param_1[0xe]) {
      fn_82BEF650(param_1);
    }
    uVar1 = fn_82BF0180(param_1,&uStack_60);
  }
  return uVar1;
}

