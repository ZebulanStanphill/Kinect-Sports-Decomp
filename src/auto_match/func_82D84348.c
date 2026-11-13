extern unsigned int *auStack_30;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D82418();
extern int fn_82D82548();
extern int fn_82D82710();
extern int fn_82D827B8();
extern int fn_82D828D0();
extern int fn_82D94B58();


void fn_82D84348(unsigned __int64 param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  unsigned char auStack_30 [1];
  
  iVar1 = fn_82CE5410();
  iVar1 = (**(int (***)())(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x44);
  *(unsigned short *)(iVar1 + 4) = 0x44;
  iVar1 = fn_82D94B58();
  pcVar2 = (char *)fn_82D82418(auStack_30,param_1,iVar1);
  if (*pcVar2 == '\0') {
    if (iVar1 != 0) goto LAB_82d84424;
  }
  else {
    *(unsigned char *)(iVar1 + 0x40) = 0;
    iVar3 = fn_82CE5410();
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(unsigned int *)(iVar3 + 0x10),param_2,4);
    }
    *(int *)(param_2[1] * 4 + *param_2) = iVar1;
    param_2[1] = param_2[1] + 1;
  }
  iVar1 = fn_82CE5410();
  iVar1 = (**(int (***)())(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x44);
  *(unsigned short *)(iVar1 + 4) = 0x44;
  iVar1 = fn_82D94B58();
LAB_82d84424:
  iVar3 = fn_82CE5410();
  if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar3 + 0x10),param_2,4);
  }
  *(int *)(param_2[1] * 4 + *param_2) = iVar1;
  param_2[1] = param_2[1] + 1;
  fn_82D82548(auStack_30,param_1,iVar1);
  fn_82D828D0(param_1,iVar1);
  fn_82D82710(param_1,iVar1);
  fn_82D827B8(param_1,iVar1);
  return;
}

