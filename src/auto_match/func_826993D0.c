extern unsigned int *auStack_50;
extern int fn_82695520();
extern int fn_82696330();
extern int fn_8269F500();


void fn_826993D0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned char auStack_50 [80];
  
  uVar5 = (unsigned __int64)(unsigned int)param_1[1];
  if (uVar5 != 0) {
    iVar6 = 0;
    do {
      piVar2 = *(int **)(iVar6 + *param_1);
      if ((*(unsigned char *)((int)piVar2 + 0x66) & 0x80) != 0) {
        iVar4 = piVar2[0x20];
        if (iVar4 == 0) {
          iVar4 = fn_8269F500(piVar2);
        }
        if (iVar4 == 0) {
          iVar4 = (**(int (***)())(*piVar2 + 0x58))(piVar2);
          iVar4 = *(int *)(iVar4 + 0x78);
        }
        if (*(int *)(*(int *)(iVar4 + 8) + 0x10) != 0) {
          iVar1 = *param_2;
          uVar3 = fn_82695520(auStack_50,piVar2);
          (**(int (***)())(iVar1 + 4))(param_2,(int *)(iVar4 + 8),uVar3,0);
          fn_82696330(auStack_50);
        }
      }
      uVar5 = uVar5 - 1;
      iVar6 = iVar6 + 4;
    } while (uVar5 != 0);
  }
  return;
}

