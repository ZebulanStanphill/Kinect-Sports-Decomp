extern unsigned int *auStack_38;
extern unsigned int *auStack_50;
extern unsigned int fStack_48;
extern int fn_83050008();
extern unsigned int uStack_34;
extern unsigned int uStack_40;
extern unsigned int uStack_44;


void fn_83054FF0(double param_1,int param_2,int *param_3,unsigned __int64 param_4)

{
  int iVar1;
  int (**pcVar2)();
  int iVar3;
  char cVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned int auStack_50;
  float fStack_48;
  unsigned char uStack_44;
  unsigned __int64 uStack_40;
  unsigned char auStack_38 [4];
  unsigned int uStack_34;
  
  iVar3 = fn_83050008(param_3);
  iVar1 = *param_3;
  if (iVar3 == 1) {
    cVar4 = (**(int (***)())(iVar1 + 0x18))(param_3,&auStack_50,&uStack_40,auStack_38);
    if (cVar4 == '\0') {
      uVar7 = 0x35;
      uStack_40 = 0;
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
      fStack_48 = (float)param_1;
      uStack_34 = 0;
      *(unsigned __int64 *)(param_2 + 0x98) = uStack_40;
      uStack_44 = *(unsigned char *)(param_3 + 0x1c);
      iVar1 = **(int **)(param_2 + 0x80);
      if (((unsigned int)param_3[0x1d] >> 0x1d & 1) == 0) {
        pcVar2 = *(int (***)())(iVar1 + 0x10);
      }
      else {
        pcVar2 = *(int (***)())(iVar1 + 0x14);
      }
      uVar7 = (*pcVar2)(*(int **)(param_2 + 0x80),auStack_50,&fStack_48,param_4,&uStack_40);
      uVar5 = 1;
      uVar6 = uStack_34;
    }
    iVar1 = *param_3;
  }
  else {
    uVar7 = 2;
    uVar6 = 0;
    uStack_40 = 0;
    uVar5 = 0;
  }
  (**(int (***)())(iVar1 + 0x1c))(param_3,uVar5,uStack_40,param_4,uVar6,uVar7);
  return;
}

