extern int fn_82E3E5A8();
extern int fn_82E50BE8();
extern int fn_82E6FEB8();
extern unsigned int iStack_7c;
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_7e;
extern unsigned int uStack_80;


__int64 fn_82E3ECE0(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned short uVar4;
  unsigned short uStack_80;
  unsigned short uStack_7e;
  int iStack_7c;
  unsigned int *apuStack_78 [2];
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned short uStack_60;
  
  if ((param_2 == (int *)0x0) || ((param_3 & 0xffffffff) == 0)) {
    lVar1 = -0x7fffbffd;
  }
  else {
    uStack_7e = 0;
    puVar3 = (unsigned int *)0x0;
    lVar1 = (**(int (***)())(*param_2 + 0x30))(param_2,&uStack_7e);
    if (-1 < lVar1) {
      uVar4 = 0;
      if (uStack_7e != 0) {
        do {
          puVar3 = (unsigned int *)0x0;
          uStack_80 = 0;
          iStack_7c = 4;
          lVar1 = (**(int (***)())(*param_2 + 0x34))(param_2,uVar4,&uStack_80,&iStack_7c);
          if (lVar1 < 0) {
            return lVar1;
          }
          if (iStack_7c != 3) {
            lVar1 = 1;
            goto LAB_82e3ee68;
          }
          uStack_70 = lbl_8202E618;
          uStack_6c = lbl_8202E61C;
          uStack_68 = lbl_8202E620;
          uStack_64 = lbl_8202E624;
          uStack_60 = uStack_80;
          uVar2 = fn_82E50BE8(0x70,0,0,0,0);
          if ((uVar2 & 0xffffffff) == 0) {
            puVar3 = (unsigned int *)0x0;
          }
          else {
            puVar3 = (unsigned int *)
                     fn_82E6FEB8(uVar2,param_2,uStack_80,param_3,param_4,
                                     *(unsigned int *)(param_1 + 100),*(unsigned int *)(param_1 + 0x44) & 4);
          }
          apuStack_78[0] = puVar3;
          if (puVar3 == (unsigned int *)0x0) {
            lVar1 = -0x7ff8fff2;
            break;
          }
          lVar1 = fn_82E3E5A8(param_1 + 0x1ac,&uStack_70,apuStack_78);
          if (lVar1 < 0) goto LAB_82e3ee74;
          puVar3 = (unsigned int *)0x0;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uStack_7e);
      }
      if (-1 < (int)lVar1) {
LAB_82e3ee68:
        *(unsigned int *)(param_1 + 0x68) = *(unsigned int *)(param_1 + 0x68) | 2;
LAB_82e3ee74:
        if (puVar3 != (unsigned int *)0x0) {
          (**(int (***)())*puVar3)(puVar3,1);
        }
      }
    }
  }
  return lVar1;
}

