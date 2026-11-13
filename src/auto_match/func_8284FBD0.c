extern int fn_8284D780();
extern int fn_8284F908();
extern int fn_8284F9B8();
extern int fn_82850D08();
extern int fn_8285A808();
extern int fn_8285A8F8();
extern int fn_8285AE70();
extern int fn_82F691F0();
extern unsigned int iStack_4c;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


void fn_8284FBD0(int param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  unsigned char *pbVar1;
  int iVar2;
  char *pcVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned int uVar6;
  unsigned int *apuStack_60 [4];
  int (**pcStack_50)();
  int iStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  
  iVar2 = fn_8285AE70();
  if (iVar2 == 0) {
    iVar2 = fn_8285A808(param_1,param_2);
    if (*(char *)(iVar2 + 0x99) == '\0') {
      if (*(char *)(iVar2 + 0x98) == '\0') {
        uStack_48 = 0;
        uStack_44 = 0;
        pcStack_50 = fn_8284F9B8;
        iStack_4c = param_3;
        fn_8285A8F8(param_1,param_2,&pcStack_50);
      }
      fn_8284F908(param_1,param_2,param_3,param_4);
      *(unsigned char *)(iVar2 + 0x99) = 1;
    }
    else {
      uVar6 = 0;
      if (*(int *)(param_3 + 0x34) != 0) {
        pbVar4 = (unsigned char *)(*(int *)(param_4 + 0x18) + -1);
        pbVar5 = (unsigned char *)(*(int *)(param_4 + 8) + -1);
        do {
          pbVar4 = pbVar4 + 1;
          uVar6 = uVar6 + 1;
          pbVar1 = pbVar5 + 1;
          pbVar5 = pbVar5 + 1;
          *pbVar5 = *pbVar4 & *pbVar1;
        } while (uVar6 < *(unsigned int *)(param_3 + 0x34));
      }
    }
  }
  else {
    fn_8284D780(param_3,apuStack_60);
    if ((apuStack_60[0] != (unsigned int *)0x0) && (uVar6 = 0, *apuStack_60[0] != 0)) {
      iVar2 = 0;
      do {
        pcVar3 = strstr(*(char **)(apuStack_60[0][1] + iVar2 + 4),"_PART_VisibilityCell_");
        if (pcVar3 != (char *)0x0) {
          fn_82850D08(apuStack_60[0][1] + iVar2,0,param_4,0);
        }
        uVar6 = uVar6 + 1;
        iVar2 = iVar2 + 0x50;
      } while (uVar6 < *apuStack_60[0]);
    }
  }
  if (*(short *)(param_1 + 0x4c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(*(unsigned int *)(param_4 + 0x1c),0,*(unsigned int *)(param_3 + 0x94));
}

