extern int fn_82275128();
extern int fn_8227EB10();
extern int fn_824BF8A8();
extern unsigned int uStack_4c;


void fn_82274548(int *param_1,unsigned int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piStack_50;
  unsigned int uStack_4c;
  
  iVar2 = fn_82275128();
  piStack_50 = param_1;
  uStack_4c = param_2;
  if (param_3 == 0) {
    if (0 < *(int *)(iVar2 + 0x14)) {
      param_1[0xc] = 0;
      (**(int (***)())(*param_1 + 0xc))(param_1,iVar2,2);
    }
    fn_824BF8A8(iVar2 + 0x34,&piStack_50);
  }
  else {
    if (*(int *)(iVar2 + 0x24) != *(int *)(iVar2 + 0x28)) {
      piVar3 = *(int **)(*(int *)(iVar2 + 0x28) + -8);
      fn_8227EB10(piVar3,0);
      (**(int (***)())(*piVar3 + 0x18))(piVar3);
      piVar3[0xc] = 0;
      (**(int (***)())(*piVar3 + 0xc))(piVar3,iVar2,2);
    }
    fn_824BF8A8(iVar2 + 0x24,&piStack_50);
    if (param_4 != 0) {
      piVar3 = *(int **)(iVar2 + 0x34);
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
      if (piVar3 != *(int **)(iVar2 + 0x38)) {
        do {
          piVar1 = (int *)*piVar3;
          fn_8227EB10(piVar1,0);
          (**(int (***)())(*piVar1 + 0x18))(piVar1);
          piVar1 = (int *)*piVar3;
          piVar1[0xc] = 0;
          (**(int (***)())(*piVar1 + 0xc))(piVar1,iVar2,2);
          piVar3 = piVar3 + 2;
        } while (piVar3 != *(int **)(iVar2 + 0x38));
      }
    }
  }
  *(unsigned int *)(iVar2 + 0x18) = 1;
  return;
}

