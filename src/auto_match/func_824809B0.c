extern int fn_8251F720();
extern int fn_8251FA58();


void fn_824809B0(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  char cVar6;
  
  piVar1 = (int *)fn_8251F720(param_2,0);
  piVar1 = (int *)(*piVar1 + (int)piVar1);
  if (piVar1[1] != -1) {
    pcVar2 = (char *)(*(int *)(param_1 + 0x48) + 0x234);
    do {
      piVar3 = piVar1 + 0x22;
      cVar6 = *pcVar2;
      cVar5 = *(char *)piVar3;
      if (cVar5 == cVar6) {
        piVar4 = piVar3;
        do {
          piVar4 = (int *)((int)piVar4 + 1);
          if (cVar5 == '\0') goto code_r0x82480a40;
          cVar5 = *(char *)piVar4;
          cVar6 = pcVar2[(int)piVar4 - (int)piVar3];
        } while (cVar5 == cVar6);
      }
      if (cVar5 == cVar6) {
code_r0x82480a40:
        *(int *)(*(int *)(param_1 + 0x48) + 0x14) = piVar1[0x2a];
        break;
      }
      piVar1 = (int *)(*piVar1 + (int)piVar1);
    } while (piVar1[1] != -1);
  }
  fn_8251FA58();
  return;
}

