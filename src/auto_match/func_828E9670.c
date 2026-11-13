typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_50;
extern int fn_8289DF30();
extern int fn_828E9410();
extern int fn_828E95E8();
extern unsigned int iStack_48;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned __int64 storeWordConditionalIndexed();


int * fn_828E9670(int *param_1,unsigned int *param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  unsigned int *puVar6;
  unsigned int *puVar8;
  __int64 lVar7;
  char *pcVar9;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int auStack_50 [2];
  int iStack_48;
  int *piStack_44;
  unsigned int uStack_40;
  char cStack_3c;
  unsigned int uStack_38;
  
  fn_828E95E8(&iStack_48);
  cStack_3c = '\0';
  iVar1 = *(int *)*param_2;
  if (param_4 == 0) {
    auStack_50[0] = *(unsigned int *)(iVar1 + 0x10);
    uStack_40 = 2;
  }
  else {
    uStack_40 = 0;
    auStack_50[0] = **(unsigned int **)(iVar1 + 0x10);
  }
  fn_828E9410(iVar1,auStack_50,&uStack_40,&iStack_48);
  pcVar9 = (char *)(iStack_48 + 0x68);
  *(unsigned int *)(iStack_48 + 100) = uStack_40;
  if (*pcVar9 == '\0') {
    if (cStack_3c != '\0') {
      puVar8 = (unsigned int *)(iStack_48 + 0x6c);
      in_cr0 = (puVar8 == (unsigned int *)0x0) << 1;
      if (puVar8 != (unsigned int *)0x0) {
        *puVar8 = uStack_38;
      }
      *pcVar9 = '\x01';
    }
  }
  else if (cStack_3c == '\0') {
    *pcVar9 = '\0';
  }
  else {
    *(unsigned int *)(iStack_48 + 0x6c) = uStack_38;
  }
  uVar4 = ZEXT48(piStack_44);
  piVar5 = (int *)0x0;
  if (uVar4 != 0) {
    do {
      puVar6 = (unsigned int *)(uVar4 + 8);
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar6 + 1,0,uVar4 + 8);
        *puVar6 = uVar2;
        in_cr0 = 2;
      }
      piVar5 = piStack_44;
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  *param_1 = iStack_48;
  param_1[1] = (int)piStack_44;
  if (uVar4 != 0) {
    lVar7 = uVar4 + 8;
    do {
      puVar6 = (unsigned int *)lVar7;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar6 + 1,0,lVar7);
        *puVar6 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    do {
      uVar2 = *puVar6;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((unsigned __int64)uVar2 - 1,0,lVar7);
        *puVar6 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    piVar5 = piStack_44;
    if ((int)((unsigned __int64)uVar2 - 1) == 0) {
      (**(int (***)())(*piStack_44 + 8))(uVar4);
      piVar5 = piStack_44;
    }
  }
  if (piVar5 != (int *)0x0) {
    fn_8289DF30();
  }
  return param_1;
}

