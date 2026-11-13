extern int fn_82882E60();
extern int fn_82886C80();
extern int fn_8289F160();
extern unsigned int lbl_83212A00[];
extern unsigned int uStack_30;


void fn_82883B00(unsigned int *param_1)

{
  unsigned short uVar1;
  int *piVar2;
  unsigned int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  int *links;
  unsigned int uStack_30;
  int aiStack_2c;
  
  uStack_30 = *param_1;
  fn_8289F160(&aiStack_2c,lbl_83212A00,&uStack_30);
  if ((unsigned)aiStack_2c != lbl_83212A00[1]) {
    iVar6=*(int *)(aiStack_2c+0x10);
  } else iVar6=0;
  piVar2 = (int *)param_1[1];
  if (*(unsigned char *)(piVar2 + 9) != '\0') {
    uVar1 = *(unsigned short *)((int)piVar2 + 0x26);
    uVar4 = (*(int (**)())(*piVar2 + 4))(piVar2);
    fn_82886C80(*(unsigned int *)(iVar6 + 0xb4),uVar4,uVar1);
  }
  uVar5 = fn_82882E60(param_1,*(unsigned int *)(param_1[1] + 0x30));
  iVar3 = param_1[1];
  links=(int *)(iVar6+0xa4);
  if (*(unsigned *)(iVar3 + 0x30) != 0) {
    *(unsigned int *)(*(int *)(iVar3 + 0x30) + 0x34) = *(unsigned int *)(iVar3 + 0x34);
  }
  if (*(unsigned *)(iVar3 + 0x34) != 0) {
    *(unsigned int *)(*(int *)(iVar3 + 0x34) + 0x30) = *(unsigned int *)(iVar3 + 0x30);
  }
  if (links[0] == iVar3) {
    links[0] = *(int *)(iVar3 + 0x30);
  }
  if (links[1] == iVar3) {
    links[1] = *(unsigned int *)(iVar3 + 0x34);
  }
  *(unsigned int *)(iVar3 + 0x30) = 0;
  *(unsigned int *)(iVar3 + 0x34) = 0;
  links[2] = links[2] + -1;
  *(unsigned int *)(iVar3 + 0x2c) = 0;
  param_1[1] = uVar5;
  *(unsigned char *)((int)param_1 + 0x11) = 1;
  return;
}

