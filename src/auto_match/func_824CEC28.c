typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_30;
extern int fn_82248B90();
extern int fn_8224E928();
extern int fn_8224ED20();
extern int fn_82250A18();
extern int fn_824CD0C0();
extern int fn_8265CA20();
extern int fn_8288F948();
extern int fn_828904D8();
extern int fn_828A12E8();
extern int fn_828ACCE8();
extern int fn_828AD740();
extern unsigned int lbl_832975B0;


void fn_824CEC28(int *param_1)

{
  bool bVar1;
  int iVar4;
  char cVar6;
  int *piVar5;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int * apuStack_40;
  unsigned char auStack_30 [4];
  unsigned int *puStack_2c;
  
  iVar4 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar4 = fn_82250A18();
  }
  if (*(char *)(iVar4 + 4) == '\0') {
    return;
  }
  if (param_1[5] != 0) {
    return;
  }
  cVar6 = fn_828ACCE8(param_1[4]);
  if (cVar6 == '\0') {
    return;
  }
  bVar1 = false;
  cVar6 = fn_828AD740(param_1[4]);
  if (cVar6 == '\0') {
    if (param_1[6] < 1) goto LAB_824ceca4;
  }
  else if (param_1[6] != 0) goto LAB_824ceca4;
  bVar1 = true;
LAB_824ceca4:
  if (bVar1) {
    piVar5 = (int *)(**(int (***)())(*param_1 + 0x1c))(param_1,param_1[4]);
    if (piVar5 != (int *)0x0) {
      fn_824CD0C0(param_1,piVar5);
      (**(int (***)())(*piVar5 + 0x40))(piVar5);
      fn_828904D8(piVar5);
    }
  }
  else {
    iVar4 = param_1[4];
    uVar2 = (**(int (***)())(*param_1 + 0x20))(param_1);
    uVar3 = fn_828A12E8(iVar4);
    uVar2 = fn_8288F948(uVar3,uVar2);
    fn_8224E928(auStack_30,uVar2);
    apuStack_40 = (unsigned int *)*puStack_2c;
    while (apuStack_40 != puStack_2c) {
      piVar5 = (int *)apuStack_40[5];
      iVar4 = (**(int (***)())(*piVar5 + 8))(piVar5);
      iVar4 = (**(int (***)())(*(int *)(iVar4 + 0x978) + 0x3c))();
      if (iVar4 == param_1[6]) {
        iVar4 = (**(int (***)())(*piVar5 + 8))(piVar5);
        iVar4 = (**(int (***)())(*(int *)(iVar4 + 0x924) + 0x3c))();
        if (iVar4 == param_1[7]) {
          fn_824CD0C0(param_1,piVar5);
          (**(int (***)())(*piVar5 + 0x40))(piVar5);
          break;
        }
      }
      fn_82248B90(&apuStack_40);
    }
    fn_8224ED20(&apuStack_40,auStack_30,*puStack_2c);
    fn_8265CA20(puStack_2c);
  }
  return;
}

