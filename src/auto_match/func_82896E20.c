extern unsigned int *auStack_3c;
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_8224ED20();
extern int fn_8224EE50();
extern int fn_8265CA20();
extern int fn_8288C098();
extern int fn_82894B88();
extern int fn_82896BD8();
extern unsigned int uStack_40;


unsigned int * fn_82896E20(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned char auStack_60 [4];
  unsigned int *puStack_5c;
  unsigned char auStack_58 [8];
  unsigned char auStack_50 [4];
  unsigned int *puStack_4c;
  unsigned int uStack_40;
  unsigned char auStack_3c [4];
  unsigned int *puStack_38;
  
  puVar5 = *(unsigned int **)(param_1 + 4);
  if (*(char *)((int)puVar5[1] + 0x21) == '\0') {
    puVar1 = (unsigned int *)puVar5[1];
    do {
      if ((unsigned int)puVar1[3] < *param_2) {
        puVar2 = (unsigned int *)puVar1[2];
      }
      else {
        puVar2 = (unsigned int *)*puVar1;
        puVar5 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  if ((puVar5 == *(unsigned int **)(param_1 + 4)) || (*param_2 < (unsigned int)puVar5[3])) {
    uVar3 = *param_2;
    fn_8224EE50(auStack_50,auStack_60,auStack_60);
    uStack_40 = uVar3;
    fn_82894B88(auStack_3c,auStack_50);
    iVar4 = fn_8288C098(param_1);
    if ((unsigned int *)(iVar4 + 0xc) != (unsigned int *)0x0) {
      *(unsigned int *)(iVar4 + 0xc) = uStack_40;
      fn_82894B88(iVar4 + 0x10,auStack_3c);
    }
    fn_82896BD8(&puStack_5c,param_1,puVar5,iVar4);
    fn_8224ED20(auStack_58,auStack_3c,*puStack_38);
    fn_8265CA20(puStack_38);
    fn_8224ED20(auStack_58,auStack_50,*puStack_4c);
    fn_8265CA20(puStack_4c);
    puVar5 = puStack_5c;
  }
  return puVar5 + 4;
}

