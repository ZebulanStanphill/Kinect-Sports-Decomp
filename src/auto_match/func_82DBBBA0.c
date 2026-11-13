extern int fn_82CE5410();
extern int fn_82D8E878();
extern int fn_82DA0180();
extern unsigned int lbl_82142544;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82DBBBA0(int param_1,int *param_2,unsigned int param_3)

{
  unsigned short uVar1;
  unsigned int *puVar2;
  unsigned short *puVar3;
  int iVar4;
  unsigned short *puVar5;
  unsigned char abStack_50 [16];
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  
  (**(int (***)())(*param_2 + 0x18))(param_2);
  puVar5 = *(unsigned short **)(param_1 + 0x10);
  if (puVar5 != (unsigned short *)0x0) {
    puVar2 = *(unsigned int **)(param_1 + 0x30);
    if (*puVar5 == param_3) {
      puVar3 = *(unsigned short **)(puVar5 + 10);
      if (puVar2 != (unsigned int *)0x0) {
        puVar2[3] = puVar3;
        *(unsigned short *)(puVar2 + 4) = puVar5[9];
      }
      *(unsigned int *)(param_1 + 0x10) = 0x17 - ((0x16 < *puVar3) + 0x17) & (unsigned int)puVar3;
LAB_82dbbc6c:
      if (puVar2 != (unsigned int *)0x0) {
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        abStack_50[0] = 0;
        fn_82DA0180(puVar5,&uStack_40,abStack_50);
        abStack_50[0] =
             (*(unsigned char *)(*(int *)(param_1 + 0x18) + 0xd2) |
             *(unsigned char *)(*(int *)(param_1 + 0x14) + 0xd2)) & abStack_50[0];
        uVar1 = *(unsigned short *)(&lbl_82142544 + (abStack_50[0] & 7) * 2);
        param_2[3] = (unsigned int)uVar1 + param_2[3];
        *(unsigned short *)(*(int *)(param_1 + 0x30) + 0x14) =
             *(short *)(*(int *)(param_1 + 0x30) + 0x14) + uVar1;
        fn_82D8E878(param_2,*puVar2,&uStack_40);
      }
      uVar1 = puVar5[8];
      iVar4 = fn_82CE5410();
      (**(int (***)())(**(int **)(iVar4 + 0x10) + 8))(*(int **)(iVar4 + 0x10),puVar5,uVar1);
    }
    else {
      uVar1 = **(unsigned short **)(puVar5 + 10);
      puVar3 = puVar5;
      puVar5 = *(unsigned short **)(puVar5 + 10);
      while (0x16 < uVar1) {
        if (uVar1 == param_3) {
          *(unsigned int *)(puVar3 + 10) = *(unsigned int *)(puVar5 + 10);
          puVar3[9] = puVar5[9];
          goto LAB_82dbbc6c;
        }
        uVar1 = **(unsigned short **)(puVar5 + 10);
        puVar3 = puVar5;
        puVar5 = *(unsigned short **)(puVar5 + 10);
      }
    }
  }
  return;
}

