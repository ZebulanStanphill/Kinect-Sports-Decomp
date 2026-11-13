extern unsigned int *auStack_60;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D0BB70();
extern int fn_82D0D770();
extern int fn_82D127A0();
extern int fn_82D1A660();


void fn_82D0F878(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3,int *param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar4;
  int iVar5;
  unsigned __int64 uVar3;
  int iVar6;
  unsigned int *puVar7;
  int iVar8;
  int iVar9;
  unsigned int *puStack_70;
  unsigned int *apuStack_6c [3];
  unsigned char auStack_60 [96];
  
  param_4[1] = 0;
  uVar4 = fn_82D0D770();
  iVar5 = fn_82CE5410();
  if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar5 + 0x10),param_4,4);
  }
  *(unsigned int *)(param_4[1] * 4 + *param_4) = uVar4;
  param_4[1] = param_4[1] + 1;
  if (0 < (int)param_3) {
    do {
      iVar5 = param_4[1];
      iVar8 = 0;
      if (0 < iVar5) {
        iVar9 = 0;
        do {
          puVar2 = *(unsigned int **)(iVar9 + *param_4);
          fn_82D127A0(puVar2[2]);
          uVar3 = fn_82D0BB70(auStack_60,puVar2);
          iVar6 = fn_82D1A660(param_1,puVar2[2],uVar3,&puStack_70,apuStack_6c);
          puVar7 = apuStack_6c[0];
          puVar1 = puStack_70;
          if (iVar6 == 3) {
            if (puStack_70 == (unsigned int *)0x0) {
LAB_82d0fa1c:
              if (puVar7 == (unsigned int *)0x0) goto LAB_82d0fa3c;
              puVar1 = (unsigned int *)*puVar7;
            }
            else {
              if (apuStack_6c[0] == (unsigned int *)0x0) {
                (**(int (***)())*puStack_70)(puStack_70,1);
                goto LAB_82d0fa1c;
              }
              iVar6 = fn_82CE5410();
              if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(unsigned int *)(iVar6 + 0x10),param_4,4);
              }
              *(unsigned int **)(param_4[1] * 4 + *param_4) = puVar1;
              param_4[1] = param_4[1] + 1;
              iVar6 = fn_82CE5410();
              if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(unsigned int *)(iVar6 + 0x10),param_4,4);
              }
              *(unsigned int **)(param_4[1] * 4 + *param_4) = puVar7;
              iVar6 = param_4[1];
              param_4[1] = iVar6;
              if (iVar6 != iVar8) {
                *(unsigned int *)(iVar9 + *param_4) = *(unsigned int *)(iVar6 * 4 + *param_4);
              }
              puVar1 = (unsigned int *)*puVar2;
              puVar7 = puVar2;
            }
            (*(int (**)())*puVar1)(puVar7,1);
          }
LAB_82d0fa3c:
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 4;
        } while (iVar8 < iVar5);
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

