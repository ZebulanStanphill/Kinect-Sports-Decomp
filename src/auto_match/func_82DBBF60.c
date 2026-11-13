extern unsigned int *auStack_40;
extern int fn_82D92F30();
extern int fn_82DA0180();
extern unsigned int lbl_82142544;
extern unsigned int uStack_30;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82DBBF60(int param_1,int *param_2,short *param_3)

{
  unsigned short uVar1;
  int iVar2;
  short *psVar3;
  unsigned short *puVar4;
  unsigned char bVar5;
  unsigned short *puVar6;
  unsigned char abStack_60;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned char auStack_40 [16];
  unsigned int uStack_30;
  short sStack_2a;
  
  (**(int (***)())(*param_2 + 0x18))(param_2);
  puVar6 = *(unsigned short **)(param_1 + 0x10);
  if (puVar6 == (unsigned short *)0x0) {
    puVar6 = (unsigned short *)0x0;
  }
  else {
    uVar1 = **(unsigned short **)(puVar6 + 10);
    puVar4 = *(unsigned short **)(puVar6 + 10);
    while (0x16 < uVar1) {
      uVar1 = **(unsigned short **)(puVar4 + 10);
      puVar6 = puVar4;
      puVar4 = *(unsigned short **)(puVar4 + 10);
    }
  }
  iVar2 = *(int *)(param_1 + 0x30);
  if ((*param_3 == 0x1a) && (puVar6 != (unsigned short *)0x0)) {
    *(unsigned int *)(param_3 + 10) = *(unsigned int *)(puVar6 + 10);
    param_3[9] = puVar6[9];
    *(short **)(puVar6 + 10) = param_3;
    puVar6[9] = param_3[8];
  }
  else {
    psVar3 = *(short **)(param_1 + 0x10);
    if ((psVar3 == (short *)0x0) || (*psVar3 != 0x1b)) {
      *(short **)(param_1 + 0x10) = param_3;
      if (iVar2 == 0) {
        (**(int (***)())(**(int **)(param_1 + 0xc) + 0x3c))(*(int **)(param_1 + 0xc),auStack_40);
        param_3[9] = sStack_2a;
        *(unsigned int *)(param_3 + 10) = uStack_30;
        return;
      }
      *(unsigned int *)(param_3 + 10) = *(unsigned int *)(iVar2 + 0xc);
      param_3[9] = *(short *)(iVar2 + 0x10);
      *(short **)(iVar2 + 0xc) = param_3;
      *(short *)(iVar2 + 0x10) = param_3[8];
    }
    else {
      *(unsigned int *)(param_3 + 10) = *(unsigned int *)(psVar3 + 10);
      param_3[9] = *(short *)(*(int *)(param_1 + 0x10) + 0x12);
      *(short **)(*(int *)(param_1 + 0x10) + 0x14) = param_3;
      *(short *)(*(int *)(param_1 + 0x10) + 0x12) = param_3[8];
    }
  }
  if (iVar2 != 0) {
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    abStack_60 = 0;
    bVar5 = fn_82DA0180(param_3,&uStack_50,&abStack_60);
    fn_82D92F30(param_2,param_1,&uStack_50);
    uVar1 = *(unsigned short *)
             (&lbl_82142544 +
             (((*(unsigned char *)(*(int *)(param_1 + 0x18) + 0xd2) |
               *(unsigned char *)(*(int *)(param_1 + 0x14) + 0xd2)) & abStack_60) & 7) * 2);
    param_2[3] = param_2[3] - (unsigned int)uVar1;
    *(unsigned short *)(*(int *)(param_1 + 0x30) + 0x14) =
         *(short *)(*(int *)(param_1 + 0x30) + 0x14) - uVar1;
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar2 != 0) {
      *(unsigned char *)(iVar2 + 0x12) = *(unsigned char *)(iVar2 + 0x12) | bVar5;
    }
  }
  return;
}

