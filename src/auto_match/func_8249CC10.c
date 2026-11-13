extern unsigned int *auStack_48;
extern int fn_822AC640();
extern int fn_82381BC0();
extern int fn_824A0AD8();
extern int fn_82829C48();


unsigned int * fn_8249CC10(unsigned int *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  int *apiStack_50 [2];
  unsigned char auStack_48 [72];
  
  apiStack_50[0] = (int *)0x0;
  if (*(int *)(param_2 + 8) == 0) {
    param_3 = *(int **)(param_2 + 4);
  }
  else {
    piVar2 = *(int **)(param_2 + 4);
    if (param_3 != (int *)*piVar2) {
      if (param_3 == piVar2) {
        param_3 = (int *)piVar2[2];
        if (*(int *)(param_4 + 0xc) <= param_3[3]) goto LAB_8249cd5c;
        uVar7 = 0;
      }
      else {
        iVar3 = *(int *)(param_4 + 0xc);
        iVar4 = param_3[3];
        if ((iVar3 < iVar4) &&
           (apiStack_50[0] = param_3, piVar5 = (int *)fn_82829C48(apiStack_50),
           *(int *)(*piVar5 + 0xc) < iVar3)) {
          cVar1 = *(char *)(apiStack_50[0][2] + 0x15);
          piVar2 = apiStack_50[0];
        }
        else {
          if ((iVar3 <= iVar4) ||
             ((apiStack_50[0] = param_3, puVar6 = (unsigned int *)fn_82381BC0(apiStack_50),
              (int *)*puVar6 != piVar2 && (apiStack_50[0][3] <= iVar3)))) goto LAB_8249cd5c;
          cVar1 = *(char *)(param_3[2] + 0x15);
          piVar2 = param_3;
          param_3 = apiStack_50[0];
        }
        if (cVar1 == '\0') {
          uVar7 = 1;
        }
        else {
          uVar7 = 0;
          param_3 = piVar2;
        }
      }
      goto LAB_8249cc54;
    }
    if (param_3[3] <= *(int *)(param_4 + 0xc)) {
LAB_8249cd5c:
      puVar6 = (unsigned int *)fn_824A0AD8(auStack_48,param_2,param_4);
      *param_1 = *puVar6;
      return param_1;
    }
  }
  uVar7 = 1;
LAB_8249cc54:
  fn_822AC640(param_1,param_2,uVar7,param_3,param_4);
  return param_1;
}

