extern unsigned int *auStack_3c;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_82F63108();
extern unsigned int iStack_38;
extern unsigned int uStack_40;


unsigned int * fn_823BC978(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,int *param_4)

{
  unsigned int *puVar1;
  int *piVar2;
  char cVar3;
  unsigned int *puVar4;
  unsigned int uStack_40;
  unsigned char auStack_3c [4];
  int iStack_38;
  
  while (param_2 != param_3) {
    uStack_40 = param_2[3];
    fn_82365BD8(auStack_3c,param_2 + 4);
    piVar2 = (int *)param_4[4];
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    cVar3 = (**(int (***)())(*piVar2 + 4))(piVar2,&uStack_40);
    if (iStack_38 != 0) {
      fn_822315A0(iStack_38);
    }
    if (cVar3 != '\0') break;
    if (*(char *)((int)param_2 + 0x19) == '\0') {
      puVar1 = (unsigned int *)param_2[2];
      if (*(char *)((int)puVar1 + 0x19) == '\0') {
        puVar4 = (unsigned int *)*puVar1;
        param_2 = puVar1;
        while (puVar1 = puVar4, *(char *)((int)puVar1 + 0x19) == '\0') {
          param_2 = puVar1;
          puVar4 = (unsigned int *)*puVar1;
        }
      }
      else {
        puVar1 = (unsigned int *)param_2[1];
        puVar4 = param_2;
        while ((param_2 = puVar1, *(char *)((int)param_2 + 0x19) == '\0' &&
               (puVar4 == (unsigned int *)param_2[2]))) {
          puVar4 = param_2;
          puVar1 = (unsigned int *)param_2[1];
        }
      }
    }
  }
  piVar2 = (int *)param_4[4];
  *param_1 = param_2;
  if (piVar2 != (int *)0x0) {
    (**(int (***)())(*piVar2 + 0xc))(piVar2,param_4 != piVar2);
    param_4[4] = 0;
  }
  return param_1;
}

