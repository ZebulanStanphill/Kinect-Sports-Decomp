extern unsigned int *auStack_5c;
extern int fn_8268CC00();
extern int fn_8275B490();
extern unsigned int iStack_60;


void fn_8275BA90(unsigned __int64 param_1,char *param_2,int *param_3)

{
  int *piVar1;
  int (**pcVar2)();
  int *piVar3;
  int aiStack_70 [4];
  int iStack_60;
  unsigned char auStack_5c [28];
  
  piVar1 = *(int **)(*param_3 + 0xc);
  if (*param_2 == '\0') {
    aiStack_70[0] = *(int *)(param_2 + 4);
    piVar3 = aiStack_70;
    pcVar2 = *(int (***)())(*piVar1 + 0x5c);
  }
  else {
    fn_8268CC00(auStack_5c);
    iStack_60 = 0;
    fn_8275B490(param_1,param_2,&iStack_60,param_3);
    if (iStack_60 == 0) {
      return;
    }
    piVar3 = &iStack_60;
    pcVar2 = *(int (***)())(*piVar1 + 0x60);
  }
  (*pcVar2)(piVar1,piVar3);
  return;
}

