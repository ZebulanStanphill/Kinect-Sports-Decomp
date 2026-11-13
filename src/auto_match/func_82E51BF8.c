#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E5A4E0();
extern int fn_82E5B290();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_6e;
extern unsigned int uStack_70;


__int64 fn_82E51BF8(int *param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  int iVar2;
  unsigned short uVar3;
  unsigned __int64 uVar4;
  unsigned short uStack_70;
  unsigned short uStack_6e;
  int aiStack_6c;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned int uStack_54;
  
  if ((param_2 & 0xffffffff) == 0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    uVar4 = 0;
    uStack_6e = 0;
    stack_pair_60.first = lbl_8202E618;
    stack_pair_60.second = lbl_8202E61C;
    aiStack_6c = 0;
    uStack_58 = lbl_8202E620;
    uStack_70 = 0xffff;
    uStack_54 = lbl_8202E624;
    lVar1 = (**(int (***)())(*param_1 + 0xa4))(param_1);
    if (((-1 < lVar1) && (lVar1 = fn_82E5A4E0(param_2,&uStack_6e), -1 < lVar1)) &&
       (uVar3 = 0, uStack_6e != 0)) {
      do {
        uStack_70 = 0xffff;
        aiStack_6c = 0;
        stack_pair_60.first = lbl_8202E618;
        stack_pair_60.second = lbl_8202E61C;
        uStack_58 = lbl_8202E620;
        uStack_54 = lbl_8202E624;
        if ((uVar4 & 0xffffffff) != 0) {
          fn_82E4FE40(uVar4);
        }
        lVar1 = fn_82E5B290(param_2,uVar3,&stack_pair_60.first,&uStack_70,&aiStack_6c,0);
        if ((lVar1 < 0) && ((int)lVar1 != -0x3ff2c94f)) {
          return lVar1;
        }
        if (aiStack_6c == 0) {
          uVar4 = 0;
          iVar2 = 0;
        }
        else {
          uVar4 = fn_82E50BE8(aiStack_6c,0,0,0,0);
          if (uVar4 == 0) {
            lVar1 = -0x7ff8fff2;
LAB_82e51dcc:
            if ((uVar4 & 0xffffffff) == 0) {
              return lVar1;
            }
            fn_82E4FE40(uVar4);
            return lVar1;
          }
          lVar1 = fn_82E5B290(param_2,uVar3,&stack_pair_60.first,&uStack_70,&aiStack_6c,uVar4);
          iVar2 = aiStack_6c;
          if (lVar1 < 0) goto LAB_82e51dcc;
        }
        lVar1 = (**(int (***)())(*param_1 + 0xa0))
                          (param_1,CONCAT44(stack_pair_60.first,stack_pair_60.second),CONCAT44(uStack_58,uStack_54),
                           uStack_70,uVar4,iVar2);
        if ((lVar1 < 0) || (uVar3 = uVar3 + 1, uStack_6e <= uVar3)) goto LAB_82e51dcc;
      } while( true );
    }
  }
  return lVar1;
}

