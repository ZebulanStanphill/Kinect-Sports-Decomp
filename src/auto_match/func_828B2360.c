typedef unsigned __int64 (*code)();
extern unsigned int *auStack_30;
extern unsigned char fn_828B2D18();


int fn_828B2360(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  unsigned char cVar3;
  unsigned __int64 auStack_30;
  
  piVar1 = (int *)**(int **)(param_1 + 0xc);
  if (piVar1 != *(int **)(param_1 + 0xc)) {
    do {
      iVar2 = piVar1[2];
      auStack_30 = (*(code *)(*param_2 + 0x48))(param_2);
      cVar3 = fn_828B2D18(iVar2,&auStack_30);
      if (cVar3 != '\0') {
        return iVar2;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0xc));
  }
  return 0;
}

