extern unsigned int *auStack_40;
extern int fn_827DC9B8();
extern int fn_827DE0B0();
extern int fn_827DE488();
extern int fn_827E0250();
extern int fn_827E8720();


int * fn_827DE600(int *param_1,int param_2,unsigned int *param_3,int *param_4)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  unsigned char uVar5;
  unsigned int *puVar6;
  unsigned char auStack_40 [1];
  
  iVar2 = fn_827E0250(param_2,param_3);
  puVar6 = *(unsigned int **)(param_2 + 4);
  iVar3 = param_2 + 4;
  piVar4 = (int *)(iVar2 * 8 + *(int *)(param_2 + 0x44));
  puVar1 = (unsigned int *)*piVar4;
  if ((puVar6 != puVar1) && (puVar6 = *(unsigned int **)piVar4[1], puVar6 != puVar1)) {
    do {
      puVar6 = (unsigned int *)puVar6[1];
      if ((unsigned int)puVar6[2] <= *param_3) {
        if (*param_3 <= (unsigned int)puVar6[2]) {
          fn_827E8720(auStack_40,iVar3,param_4);
          uVar5 = 0;
          *param_1 = (int)puVar6;
          goto LAB_827de6bc;
        }
        puVar6 = (unsigned int *)*puVar6;
        break;
      }
    } while (puVar6 != puVar1);
  }
  if (puVar6 != (unsigned int *)*param_4) {
    fn_827DE0B0(iVar3,puVar6,iVar3,param_4,(unsigned int *)*param_4,1);
  }
  fn_827DC9B8(param_2,param_4,puVar6,iVar2);
  fn_827DE488(param_2);
  uVar5 = 1;
  *param_1 = (int)param_4;
LAB_827de6bc:
  *(unsigned char *)(param_1 + 1) = uVar5;
  return param_1;
}

