extern int fn_82FF2D40();
extern int fn_8300B720();
extern int fn_830177C8();
extern unsigned int lbl_832642FC;
extern unsigned int uStack_50;


unsigned __int64 fn_8300B7E0(unsigned __int64 param_1,int param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int iVar3;
  char cVar4;
  unsigned int in_r7;
  char in_r8;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  double extraout_f1;
  unsigned __int64 uStack_50;
  
  *(short *)(param_2 + 0x18) = *(short *)(param_2 + 0x18) + 1;
  uVar6 = 1;
  if ((in_r8 == '\0') &&
     (((*(unsigned char *)(param_2 + 0x3d) & 0x20) != 0 || (*(int *)(param_2 + 0x14) == 0)))) {
    uVar5 = (unsigned int)*(unsigned short *)(param_2 + 0x32);
    *(short *)(param_2 + 0x9c) = *(short *)(param_2 + 0x9c) + 1;
    iVar3 = param_2;
    if (((*(unsigned int *)(param_2 + 0x40) >> 9 & 1) != 0) && (uVar5 != 0)) {
      iVar3 = fn_830177C8(lbl_832642FC,param_2,9,0);
      uStack_50 = (unsigned __int64)extraout_f1;
      uVar5 = (unsigned int)(((unsigned __int64)(uStack_50) >> 48) & 0xFFFF);
    }
    if ((uVar5 != 0) && ((int)uVar5 < (int)((unsigned int)*(unsigned short *)(param_2 + 0x9c) - (in_r7 & 0xffff))))
    {
      uStack_50 = uStack_50 & 0xffffffff;
      uVar6 = fn_82FF2D40(param_1,iVar3,0,*(unsigned int *)(param_2 + 0xc),
                            *(unsigned char *)(param_2 + 0x3d) >> 7,&uStack_50);
    }
  }
  if ((*(int **)(param_2 + 0x14) != (int *)0x0) &&
     ((cVar4 = (**(int (***)())(**(int **)(param_2 + 0x14) + 0x74))(param_1), cVar4 == '\0' ||
      (uVar2 = uVar6 & 0xff, uVar6 = 1, uVar2 == 0)))) {
    uVar6 = 0;
  }
  if (((*(int *)(param_2 + 0x44) != 0) &&
      (piVar1 = *(int **)(*(int *)(param_2 + 0x44) + 4), piVar1 != (int *)0x0)) &&
     ((cVar4 = (**(int (***)())(*piVar1 + 0x74))(param_1), cVar4 == '\0' ||
      (uVar2 = uVar6 & 0xff, uVar6 = 1, uVar2 == 0)))) {
    uVar6 = 0;
  }
  if (*(short *)(param_2 + 0x18) == 1) {
    *(unsigned char *)(param_2 + 0xa0) = *(unsigned char *)(param_2 + 0xa0) & 0x1f | 0x20;
    fn_8300B720(param_2);
  }
  return uVar6;
}

