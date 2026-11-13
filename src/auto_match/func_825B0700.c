extern unsigned int *auStack_4c;
extern int fn_8284D780();
extern int fn_82850A70();
extern int fn_82850A78();
extern int fn_82850D08();
extern unsigned int lbl_8218E900;
extern unsigned int lbl_8218EA00;
extern unsigned int lbl_8218EB00;
extern unsigned int uStack_50;


void fn_825B0700(unsigned int *param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int iVar6;
  __int64 lVar7;
  unsigned int uStack_50;
  unsigned int auStack_4c [19];
  
  if (param_1[4] != 0) {
    fn_8284D780(*param_1,&uStack_50);
    lVar2 = fn_82850A70(uStack_50);
    lVar7 = 0;
    if (0 < lVar2) {
      iVar6 = 0;
      do {
        uVar5 = 1;
        uVar1 = *(unsigned int *)(iVar6 + param_1[4]);
        if (uVar1 != 0) {
          iVar3 = 0;
          iVar4 = 0;
          do {
            if (((*(unsigned int *)(&lbl_8218E900 + iVar4) & uVar1) != 0) &&
               ((*(unsigned char *)(*(int *)(&lbl_8218EA00 + iVar4) + param_2) >>
                 (*(unsigned int *)(&lbl_8218EB00 + iVar4) & 0x3f) & 0xf) !=
                *(unsigned char *)(iVar6 + param_1[4] + iVar3 + 4))) {
              uVar5 = 0;
              break;
            }
            iVar4 = iVar4 + 4;
            iVar3 = iVar3 + 1;
          } while (iVar4 < 0x100);
        }
        fn_82850A78(uStack_50,lVar7,auStack_4c);
        fn_82850D08(auStack_4c[0],uVar5,param_1[1],param_3);
        lVar7 = lVar7 + 1;
        iVar6 = iVar6 + 0x44;
      } while ((int)lVar7 < (int)lVar2);
    }
  }
  return;
}

