extern int fn_82E2DF38();
extern int fn_82E2E188();
extern int fn_82E2F3F8();
extern int fn_82E2F460();
extern int fn_82E50CB8();
extern int fn_82E50F10();


unsigned __int64 fn_82E30238(int param_1,int *param_2)

{
  int *piVar1;
  unsigned short uVar4;
  int iVar2;
  unsigned short uVar5;
  int iVar3;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int * apiStack_60;
  
  uVar7 = 0;
  apiStack_60 = (int *)0x0;
  uVar6 = 0;
  fn_82E50CB8(param_1 + 0x54);
  uVar4 = (**(int (***)())(*param_2 + 0x88))(param_2);
  if (*(int *)(param_1 + 0xfc) != 0) {
    iVar3 = param_1 + 0x94;
    do {
      iVar2 = fn_82E2F3F8(iVar3,uVar7,&apiStack_60);
      piVar1 = apiStack_60;
      if (iVar2 == 0) goto LAB_82e3031c;
      if (apiStack_60 == (int *)0x0) {
        uVar6 = 0xffffffffc00d36bb;
        goto LAB_82e30324;
      }
      uVar5 = (**(int (***)())(*apiStack_60 + 0x88))(apiStack_60);
      iVar2 = *piVar1;
      if (uVar5 == uVar4) {
        (**(int (***)())(iVar2 + 8))(piVar1);
        if ((unsigned __int64)*(unsigned int *)(param_1 + 0xfc) <= (uVar7 & 0xffffffff)) goto LAB_82e3031c;
        iVar3 = fn_82E2E188(iVar3,uVar7,param_2);
        goto LAB_82e30314;
      }
      uVar5 = (**(int (***)())(iVar2 + 0x88))();
      if (uVar4 < uVar5) {
        iVar3 = fn_82E2F460(iVar3,uVar7,param_2);
        goto LAB_82e30314;
      }
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0xfc));
  }
  iVar3 = fn_82E2DF38(param_1 + 0x94,param_2,&apiStack_60);
LAB_82e30314:
  if (iVar3 == 0) {
LAB_82e3031c:
    uVar6 = 0xffffffff8007000e;
  }
LAB_82e30324:
  fn_82E50F10(param_1 + 0x54);
  return uVar6;
}

