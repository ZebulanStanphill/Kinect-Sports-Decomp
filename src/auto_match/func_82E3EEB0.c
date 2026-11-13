extern unsigned int *auStack_68;
extern int fn_82E3BF28();
extern int fn_82E3C5F8();
extern int fn_82E3E5A8();
extern int fn_82E50BE8();
extern int fn_82E6F550();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


__int64 fn_82E3EEB0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  int iVar5;
  __int64 lVar6;
  int *piStack_70;
  unsigned int *puStack_6c;
  unsigned char auStack_68 [8];
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned short uStack_50;
  
  if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
    lVar6 = -0x7fffbffd;
  }
  else {
    uVar1 = *(unsigned short *)(param_1 + 0xbc);
    if ((unsigned int)uVar1 < *(unsigned int *)(param_1 + 0xb8)) {
      *(unsigned short *)(param_1 + 0xbc) = uVar1 + 1;
      fn_82E3C5F8(param_1 + 0x78,(unsigned int)uVar1,&puStack_6c);
      uVar2 = *(unsigned short *)puStack_6c;
      stack_pair_60.second = lbl_8202E61C;
      uStack_58 = lbl_8202E620;
      stack_pair_60.first = lbl_8202E618;
      uStack_54 = lbl_8202E624;
      uStack_50 = uVar2;
      uVar3 = fn_82E50BE8(0x70,0,0,0,0);
      if ((uVar3 & 0xffffffff) == 0) {
        puVar4 = (unsigned int *)0x0;
      }
      else {
        puVar4 = (unsigned int *)
                 fn_82E6F550(uVar3,param_2,uVar2,param_3,param_4,*(unsigned int *)(param_1 + 0x54)
                                 ,*(unsigned int *)(param_1 + 0x44) & 4);
      }
      if (puVar4 == (unsigned int *)0x0) {
        lVar6 = -0x7ff8fff2;
      }
      else {
        piStack_70 = (int *)0x0;
        puStack_6c = puVar4;
        iVar5 = fn_82E3BF28(param_1 + 0x1ac,&stack_pair_60.first,&piStack_70,auStack_68);
        if (iVar5 == 0) {
          lVar6 = fn_82E3E5A8(param_1 + 0x1ac,&stack_pair_60.first,&puStack_6c);
        }
        else {
          lVar6 = (**(int (***)())(*piStack_70 + 0x1c))(piStack_70,puVar4);
        }
        if (-1 < lVar6) {
          puVar4 = (unsigned int *)0x0;
          *(unsigned int *)(param_1 + 0x68) = *(unsigned int *)(param_1 + 0x68) | 1;
        }
        if (puVar4 != (unsigned int *)0x0) {
          (**(int (***)())*puVar4)(puVar4,1);
        }
      }
    }
    else {
      lVar6 = 0;
    }
  }
  return lVar6;
}

