#define true 1
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_8c;
extern int fn_82E3ADF0();
extern int fn_82E3BF28();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9e;
extern unsigned int uStack_a0;


__int64 fn_82E3D9C0(__int64 param_1,int *param_2)

{
  __int64 lVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned short uVar4;
  unsigned short uStack_a0;
  unsigned short uStack_9e;
  int *piStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  int *piStack_90;
  unsigned char auStack_8c [4];
  __int64 lStack_88;
  unsigned char auStack_80 [16];
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned char auStack_60 [16];
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned short uStack_40;
  
  if (param_2 == (int *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    piStack_9c = (int *)0x0;
    uStack_a0 = 0;
    lVar1 = (**(int (***)())(*param_2 + 0x30))(param_2,&uStack_a0);
    if ((-1 < lVar1) && (1 < uStack_a0)) {
      uStack_98 = 0;
      lVar1 = (**(int (***)())(*param_2 + 0x3c))(param_2,&uStack_98);
      if ((-1 < lVar1) &&
         (((unsigned __int64)uStack_98 != 0 &&
          (lVar1 = (**(int (***)())(*param_2 + 0x40))(param_2,(unsigned __int64)uStack_98 - 1,&piStack_9c),
          -1 < lVar1)))) {
        lStack_88 = 0;
        lVar1 = (**(int (***)())(*param_2 + 0x50))(param_2,piStack_9c,&lStack_88);
        if (-1 < lVar1) {
          uStack_94 = 0;
          lVar1 = (**(int (***)())(*piStack_9c + 0x24))(piStack_9c,&uStack_94);
          if (-1 < lVar1) {
            lStack_88 = (unsigned __int64)uStack_94 + lStack_88;
            uStack_70 = lbl_8202E618;
            uStack_6c = lbl_8202E61C;
            uStack_68 = lbl_8202E620;
            uStack_64 = lbl_8202E624;
            lVar1 = (**(int (***)())(*param_2 + 0xc))(param_2,&uStack_70);
            if ((-1 < lVar1) && (uVar4 = 0, uStack_a0 != 0)) {
              while( true ) {
                uStack_9e = 0;
                lVar1 = (**(int (***)())(*param_2 + 0x34))(param_2,uVar4,&uStack_9e,auStack_8c);
                if (lVar1 < 0) break;
                puVar2 = (unsigned int *)fn_82E3ADF0(auStack_60,param_1,&uStack_70);
                stack_pair_50.first = *puVar2;
                piStack_90 = (int *)0x0;
                stack_pair_50.second = puVar2[1];
                uStack_48 = puVar2[2];
                uStack_44 = puVar2[3];
                uStack_40 = uStack_9e;
                iVar3 = fn_82E3BF28(param_1 + 0x1ac,&stack_pair_50.first,&piStack_90,auStack_80);
                if (((iVar3 != 0) &&
                    (lVar1 = (**(int (***)())(*piStack_90 + 0x18))(piStack_90,lStack_88), lVar1 < 0)) ||
                   (uVar4 = uVar4 + 1, uStack_a0 <= uVar4)) break;
              }
            }
          }
        }
      }
    }
    if (piStack_9c != (int *)0x0) {
      (**(int (***)())(*piStack_9c + 8))();
    }
  }
  return lVar1;
}

