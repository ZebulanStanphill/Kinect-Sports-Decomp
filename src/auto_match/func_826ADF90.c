extern int fn_826AACB0();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack_128;
extern unsigned int uStack_130;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_826ADF90(int param_1,char *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  char *pcStack_138;
  char *pcStack_134;
  unsigned int uStack_130;
  char *pcStack_12c;
  unsigned int uStack_128;
  char acStack_120 [272];
  
  iVar2 = *(int *)(param_1 + 0xa0);
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  if (iVar2 == 0) {
    iVar2 = (**(int (***)())(**(int **)(param_1 + 0x74) + 0x94))();
    if (iVar2 == 0) {
      return;
    }
    piVar3 = (int *)(**(int (***)())(**(int **)(param_1 + 0x74) + 0x94))();
  }
  else {
    if (*(int *)(iVar2 + 4) == 0) {
      return;
    }
    pcVar4 = param_2;
    if (*(char *)(iVar2 + 10) == '\0') {
      piVar3 = *(int **)(iVar2 + 4);
    }
    else {
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      pcStack_134 = pcVar4 + (-1 - (int)param_2);
      if (param_2[(int)(pcStack_134 + -1)] == '\n') {
        pcStack_134 = pcVar4 + (-2 - (int)param_2);
      }
      pcStack_12c = acStack_120;
      uStack_130 = 2;
      uStack_128 = 0x100;
      pcStack_138 = param_2;
      fn_826AACB0(&uStack_130,0xffffffff82007394,&pcStack_138,iVar2 + 0xc);
      piVar3 = *(int **)(iVar2 + 4);
      param_2 = acStack_120;
    }
  }
  (**(int (***)())(*piVar3 + 4))(piVar3,0x21,param_2,&stack0x00000020);
  return;
}

