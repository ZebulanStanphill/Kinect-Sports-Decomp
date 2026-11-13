extern int fn_82FA5190();
extern int fn_82FF29A8();
extern int fn_82FF2B48();
extern int fn_82FF2E78();
extern int fn_82FF3ED8();
extern unsigned int lbl_831BC768;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


unsigned __int64 fn_82FF3150(int *param_1,unsigned __int64 param_2,int *param_3)

{
  int (**pcVar1)();
  unsigned int uVar2;
  char cVar5;
  int *piVar3;
  int iVar4;
  unsigned int *puVar7;
  __int64 lVar6;
  unsigned __int64 uVar8;
  int aiStack_50 [2];
  unsigned int uStack_48;
  unsigned int uStack_44;
  float afStack_40 [4];

  uVar8 = 2;
  fn_82FF29A8(afStack_40,param_1,param_3[2],aiStack_50);
  cVar5 = fn_82FF2E78((double)afStack_40[0]);
  if (cVar5 == '\0') {
    uVar8 = 3;
    lVar6 = (-(unsigned __int64)(*(char *)((int)param_3 + 0x81) != '\0') & 0xfffffffe) + 0x22;
  }
  else {
    cVar5 = (**(int (***)())(*param_1 + 0x74))((double)afStack_40[0],param_1);
    if (cVar5 == '\0') {
      fn_82FF3ED8(param_1,(-(unsigned __int64)(*(char *)((int)param_3 + 0x81) != '\0') & 0xfffffffe) +
                           0x21,*(unsigned int *)(param_3[2] + 0x58),param_3 + 4,param_3 + 10);
      (**(int (***)())(*param_1 + 0x78))(param_1,param_3[2],3,0);
      return 3;
    }
    piVar3 = (int *)(**(int (***)())(*(int *)param_3[1] + 0x10))
                              ((int *)param_3[1],param_1,param_2,param_3,afStack_40);
    if (piVar3 == (int *)0x0) {
      (**(int (***)())(*param_1 + 0x78))(param_1,param_3[2],3,0);
    }
    else {
      if (*param_3 == 0) {
        puVar7 = &uStack_48;
        uStack_48 = 0;
        uStack_44 = 0;
        pcVar1 = *(int (***)())(*piVar3 + 4);
      }
      else {
        pcVar1 = *(int (***)())(*piVar3 + 4);
        puVar7 = *(unsigned int **)(param_3[0x1e] + 8);
      }
      iVar4 = (*pcVar1)(piVar3,puVar7);
      if (iVar4 == 1) {
        piVar3[0x50] = aiStack_50[0];
        piVar3[0x4d] = param_3[0x1d];
        fn_82FF2B48(piVar3,param_3[3],param_3[0x1c]);
        return 1;
      }
      (**(int (***)())(*piVar3 + 8))(piVar3,1);
      uVar2 = lbl_831BC768;
      (**(int (***)())*piVar3)(piVar3,0);
      fn_82FA5190(uVar2,piVar3);
    }
    lVar6 = (unsigned __int64)(*(char *)((int)param_3 + 0x81) == '\0') + 0x1d;
  }
  fn_82FF3ED8(param_1,lVar6,*(unsigned int *)(param_3[2] + 0x58),param_3 + 4,param_3 + 10);
  return uVar8;
}
