extern unsigned int *auStack_30;
extern int fn_82851B40();


void fn_82857CB8(unsigned int *param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int auStack_30;
  
  fn_82851B40(param_1,*(unsigned int *)(param_2 + 0xc),&auStack_30);
  iVar1 = 0;
  if (*(short *)(param_2 + 0x22) != 0) {
    puVar2 = (unsigned int *)(*(int *)(param_2 + 0x10) + 4);
    do {
      if ((int (**)())*puVar2 != (int (**)())0x0) {
        (*(int (**)())*puVar2)(*param_1,auStack_30,*(unsigned short *)(puVar2 + 3),
                           *(unsigned short *)((int)puVar2 + 0xe),puVar2[2]);
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 5;
    } while (iVar1 < (int)(unsigned int)*(unsigned short *)(param_2 + 0x22));
  }
  return;
}

