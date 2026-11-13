extern int fn_82FDF660();
extern int fn_82FE4408();
extern unsigned int lbl_8217510C;
extern unsigned int lbl_82175110;
extern unsigned int lbl_82175114;
extern unsigned int lbl_82175118;


unsigned __int64 fn_82FE05A8(int param_1,int *param_2)

{
  unsigned __int64 uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int iVar4;
  
  uVar1 = 1;
  iVar4 = *(int *)(param_1 + 0x134);
  if (*(char *)(param_1 + 0xd0) != '\0') {
    iVar3 = (**(int (***)())(*param_2 + 4))(param_2,0x314);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_82FDF660();
    }
    *(int *)(param_1 + 0xdc) = (int)uVar2;
    if ((uVar2 & 0xffffffff) == 0) {
      uVar1 = 0x34;
    }
    else {
      iVar4 = iVar4 * 0x14;
      uVar1 = fn_82FE4408((double)*(float *)(param_1 + 0x13c),uVar2,param_2,0xffffffff82175114
                                ,*(unsigned int *)(&lbl_82175110 + iVar4),
                                *(unsigned int *)(&lbl_82175118 + iVar4),
                                *(unsigned int *)(&lbl_8217510C + iVar4),
                                *(unsigned int *)(&lbl_82175114 + iVar4),
                                *(unsigned int *)(param_1 + 200));
    }
  }
  return uVar1;
}

