extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_82569C38();
extern int fn_8265BF48();
extern int fn_827D5070();


void fn_8260C000(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned int auStack_70 [4];
  unsigned char auStack_60 [96];
  
  iVar4 = fn_827D5070(*param_1);
  piVar3 = *(int **)(iVar4 + 0x24);
  uVar7 = 0;
  if (piVar3[1] != 0) {
    iVar8 = 0;
    do {
      pcVar6 = *(char **)(iVar8 + *piVar3 + 4);
      pcVar5 = "R1::shaderTextureInstance";
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        auStack_70[0] =
             fn_8265BF48((unsigned __int64)*(unsigned int *)(iVar8 + *piVar3 + 0xc) +
                               (unsigned __int64)*(unsigned int *)(iVar4 + 0x28),0);
        fn_82569C38(auStack_70,auStack_60,param_3);
      }
      piVar3 = *(int **)(iVar4 + 0x24);
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0x10;
    } while (uVar7 < (unsigned int)piVar3[1]);
  }
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

