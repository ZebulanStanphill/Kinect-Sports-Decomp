extern unsigned int *auStack_40;
extern int fn_82880A10();
extern int fn_8289EE00();


void fn_8289F710(__int64 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned char auStack_40 [16];
  
  iVar1 = param_2[3];
  if (*(char *)((int)param_2 + 0x26) == '\0') {
    uVar3 = (**(int (***)())(*param_2 + 0xc))(param_2);
    iVar2 = fn_8289EE00(param_1 + 0x1fc);
    if ((int *)(iVar2 + 0xc) != (int *)0x0) {
      *(int *)(iVar2 + 0xc) = iVar1;
      *(int **)(iVar2 + 0x10) = param_2;
    }
    fn_82880A10(auStack_40,param_1 + 0x1fc,iVar2,0);
    iVar2 = fn_8289EE00(param_1 + 0x20c);
    if ((int *)(iVar2 + 0xc) != (int *)0x0) {
      *(int *)(iVar2 + 0xc) = iVar1;
      *(unsigned int *)(iVar2 + 0x10) = uVar3;
    }
    fn_82880A10(auStack_40,param_1 + 0x20c,iVar2,0);
  }
  else {
    iVar2 = fn_8289EE00(param_1 + 0x1fc);
    if ((int *)(iVar2 + 0xc) != (int *)0x0) {
      *(int *)(iVar2 + 0xc) = iVar1;
      *(int **)(iVar2 + 0x10) = param_2;
    }
    fn_82880A10(auStack_40,param_1 + 0x1fc,iVar2,0);
  }
  return;
}

