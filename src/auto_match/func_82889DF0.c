extern int fn_825089A0();


static void clear(unsigned *p) {
 unsigned v = p[0];
 if (v) { int *a = (int *)fn_825089A0(); (*(int (**)())(*a + 0x28))(a,v); }
 p[0]=0; p[1]=0; p[2]=0;
}
void fn_82889DF0(int *param_1)

{
  int *piVar1;
  unsigned int iVar2;
  unsigned int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar1 = (int *)*param_1;
  piVar5 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = 0;
  if (piVar5 != (int *)*param_1) {
    do {
      iVar2 = piVar5[2];
      piVar1 = (int *)*piVar5;
      if (iVar2 != 0) {
        clear((unsigned *)(iVar2+0x14));
        clear((unsigned *)(iVar2+4));
        piVar4 = (int *)fn_825089A0();
        (*(int (**)())(*piVar4 + 0x28))(piVar4,iVar2);
      }
      piVar4 = (int *)fn_825089A0();
      (*(int (**)())(*piVar4 + 0x28))(piVar4,piVar5);
      piVar5 = piVar1;
    } while (piVar1 != (int *)*param_1);
  }
  return;
}

