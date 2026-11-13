extern unsigned int *auStack_170;
extern unsigned int *auStack_4c;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E7C870();
extern int fn_82EF0F88();
extern int fn_82EF1830();
extern int fn_82EF19C0();
extern int fn_82EF1A70();
extern int fn_82EF1AA8();
extern int fn_82EF1CA0();
extern int fn_82EF27F0();
extern unsigned int uStack_178;
extern unsigned int uStack_180;
extern unsigned int uStack_188;
extern unsigned int uStack_18c;
extern unsigned int uStack_190;
extern unsigned int uStack_40;
extern unsigned int uStack_48;


__int64 fn_82E7D348(unsigned __int64 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  struct { unsigned int first; unsigned int second; } stack_pair_190;

  unsigned int uStack_188;
  int *piStack_184;
  unsigned __int64 uStack_180;
  unsigned __int64 uStack_178;
  unsigned char auStack_170 [292];
  unsigned char auStack_4c [4];
  unsigned int uStack_48;
  unsigned int uStack_40;
  
  stack_pair_190.second = 0;
  stack_pair_190.first = 0;
  uStack_180 = 0;
  lVar5 = 0;
  uStack_178 = 0;
  uVar4 = 0;
  uStack_188 = 0;
  piStack_184 = (int *)0x0;
  fn_82EF19C0(auStack_170);
  iVar2 = fn_82E7C870(param_1,&piStack_184);
  piVar1 = piStack_184;
  if (-1 < iVar2) {
    lVar5 = fn_82EF1CA0(piStack_184,&stack_pair_190.second);
    if (-1 < lVar5) {
      lVar5 = fn_82EF1A70(auStack_4c,stack_pair_190.second);
      if (-1 < lVar5) {
        uVar3 = 0;
        if (stack_pair_190.second != 0) {
          do {
            stack_pair_190.first = 0;
            lVar5 = fn_82EF27F0(piVar1,uVar3,&uStack_180,&uStack_178,&uStack_188,0,&stack_pair_190.first
                                     );
            if (lVar5 < 0) goto LAB_82e7d51c;
            if ((uVar4 & 0xffffffff) != 0) {
              fn_82E4FE40(uVar4);
            }
            lVar5 = ((unsigned __int64)stack_pair_190.first & 0x7fffffff) << 1;
            if (0x7fffffff < stack_pair_190.first) {
              lVar5 = -1;
            }
            uVar4 = fn_82E50BE8(lVar5,0,0,0,0);
            if (uVar4 == 0) {
              lVar5 = -0x7ff8fff2;
              goto LAB_82e7d51c;
            }
            lVar5 = fn_82EF27F0(piVar1,uVar3,&uStack_180,&uStack_178,&uStack_188,uVar4,
                                      &stack_pair_190.first);
            if (lVar5 < 0) goto LAB_82e7d51c;
            lVar5 = fn_82EF1A70(auStack_4c,stack_pair_190.first << 1);
            if (lVar5 < 0) goto LAB_82e7d51c;
            lVar5 = fn_82EF0F88(auStack_4c,uVar4,stack_pair_190.first << 1);
            if (lVar5 < 0) goto LAB_82e7d51c;
            lVar5 = fn_82EF1AA8(auStack_4c,uStack_178);
            if (lVar5 < 0) goto LAB_82e7d51c;
            lVar5 = fn_82EF1AA8(auStack_4c,uStack_188);
            if (lVar5 < 0) goto LAB_82e7d51c;
            lVar5 = fn_82EF1AA8(auStack_4c,uStack_180);
            if (lVar5 < 0) goto LAB_82e7d51c;
            uVar3 = uVar3 + 1;
          } while ((uVar3 & 0xffffffff) < (unsigned __int64)stack_pair_190.second);
        }
        lVar5 = (**(int (***)())(*param_2 + 0x68))(param_2,0xffffffff8214c140,uStack_48,uStack_40);
      }
    }
  }
LAB_82e7d51c:
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 8))(piVar1);
  }
  if ((uVar4 & 0xffffffff) != 0) {
    fn_82E4FE40(uVar4);
  }
  fn_82EF1830(auStack_170);
  return lVar5;
}

