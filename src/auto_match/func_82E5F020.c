#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E5B380();
extern int fn_82E5B578();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_5e;
extern unsigned int uStack_60;


__int64 fn_82E5F020(int *param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned short uVar4;
  unsigned short uStack_60;
  unsigned short uStack_5e;
  int aiStack_5c [3];
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  
  if ((param_1 == (int *)0x0) || ((param_2 & 0xffffffff) == 0)) {
    lVar1 = -0x7fffbffd;
  }
  else {
    uStack_5e = 0;
    uStack_50 = lbl_8202E618;
    uStack_60 = 0xffff;
    uStack_4c = lbl_8202E61C;
    uStack_48 = lbl_8202E620;
    uStack_44 = lbl_8202E624;
    lVar1 = fn_82E5B578(param_2);
    if (((-1 < lVar1) && (lVar1 = (**(int (***)())(*param_1 + 0x98))(param_1,&uStack_5e), -1 < lVar1))
       && (uVar4 = 0, uStack_5e != 0)) {
      while( true ) {
        aiStack_5c[0] = 0;
        lVar1 = (**(int (***)())(*param_1 + 0x9c))(param_1,uVar4,&uStack_50,&uStack_60,0,aiStack_5c);
        if ((lVar1 < 0) && ((int)lVar1 != -0x3ff2c94f)) {
          return lVar1;
        }
        if (aiStack_5c[0] != 0) break;
        uVar2 = 0;
        iVar3 = 0;
LAB_82e5f168:
        lVar1 = fn_82E5B380(param_2,CONCAT44(uStack_50,uStack_4c),CONCAT44(uStack_48,uStack_44),
                                uStack_60,iVar3,uVar2);
        if ((uVar2 & 0xffffffff) != 0) {
          fn_82E4FE40(uVar2);
        }
        if ((int)lVar1 < 0) {
          return lVar1;
        }
        uVar4 = uVar4 + 1;
        if (uStack_5e <= uVar4) {
          return lVar1;
        }
      }
      uVar2 = fn_82E50BE8(aiStack_5c[0],0,0,0,0);
      if (uVar2 == 0) {
        lVar1 = -0x7ff8fff2;
      }
      else {
        lVar1 = (**(int (***)())(*param_1 + 0x9c))(param_1,uVar4,&uStack_50,&uStack_60,uVar2,aiStack_5c)
        ;
        iVar3 = aiStack_5c[0];
        if (-1 < lVar1) goto LAB_82e5f168;
      }
      if ((uVar2 & 0xffffffff) != 0) {
        fn_82E4FE40(uVar2);
      }
    }
  }
  return lVar1;
}

