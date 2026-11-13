#define true 1
extern int fn_822507E0();
extern int fn_823B9060();
extern int fn_8265CA20();
extern int fn_828696A0();
extern int fn_82F622A8();


unsigned int *
fn_823B9D10(unsigned int *param_1,int param_2,char param_3,unsigned int *param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if (0x6666664 < *(unsigned int *)(param_2 + 8)) {
    fn_823B9060(param_5 + 6);
    fn_8265CA20(param_5[6]);
    param_5[6] = 0;
    fn_8265CA20(param_5);
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82197e58);
  }
  *(unsigned int *)(param_2 + 8) = *(unsigned int *)(param_2 + 8) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *(unsigned int **)(param_2 + 4)) {
    (*(unsigned int **)(param_2 + 4))[1] = param_5;
    **(unsigned int **)(param_2 + 4) = param_5;
    iVar2 = *(int *)(param_2 + 4);
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_5;
      if (param_4 == (unsigned int *)**(int **)(param_2 + 4)) {
        **(int **)(param_2 + 4) = (int)param_5;
      }
      goto LAB_823b9dd0;
    }
    param_4[2] = param_5;
    iVar2 = *(int *)(param_2 + 4);
    if (param_4 != *(unsigned int **)(iVar2 + 8)) goto LAB_823b9dd0;
  }
  *(int **)(iVar2 + 8) = param_5;
LAB_823b9dd0:
  cVar1 = *(char *)(param_5[1] + 0x34);
  piVar5 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *(int *)(param_2 + 4);
      *param_1 = param_5;
      *(unsigned char *)(*(int *)(iVar2 + 4) + 0x34) = 1;
      return param_1;
    }
    piVar3 = (int *)piVar5[1];
    piVar4 = (int *)piVar3[1];
    if (piVar3 == (int *)*piVar4) {
      iVar2 = piVar4[2];
      if (*(char *)(iVar2 + 0x34) == '\0') {
LAB_823b9e60:
        *(unsigned char *)(piVar5[1] + 0x34) = 1;
        *(unsigned char *)(iVar2 + 0x34) = 1;
        *(unsigned char *)(*(int *)(piVar5[1] + 4) + 0x34) = 0;
        piVar5 = *(int **)(piVar5[1] + 4);
      }
      else {
        if (piVar5 == (int *)piVar3[2]) {
          fn_828696A0(param_2);
          piVar5 = piVar3;
        }
        *(unsigned char *)(piVar5[1] + 0x34) = 1;
        *(unsigned char *)(*(int *)(piVar5[1] + 4) + 0x34) = 0;
        fn_822507E0(param_2,*(unsigned int *)(piVar5[1] + 4));
      }
    }
    else {
      iVar2 = *piVar4;
      if (*(char *)(iVar2 + 0x34) == '\0') goto LAB_823b9e60;
      if (piVar5 == (int *)*piVar3) {
        fn_822507E0(param_2);
        piVar5 = piVar3;
      }
      *(unsigned char *)(piVar5[1] + 0x34) = 1;
      *(unsigned char *)(*(int *)(piVar5[1] + 4) + 0x34) = 0;
      fn_828696A0(param_2,*(unsigned int *)(piVar5[1] + 4));
    }
    cVar1 = *(char *)(piVar5[1] + 0x34);
  } while( true );
}

