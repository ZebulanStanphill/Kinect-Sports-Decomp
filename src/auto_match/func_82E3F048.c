extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern int fn_82E3BF28();
extern int fn_82E3E5A8();
extern int fn_82E50BE8();
extern int fn_82E700E0();
extern unsigned int lbl_8214C020;
extern unsigned int lbl_8214C024;
extern unsigned int lbl_8214C028;
extern unsigned int lbl_8214C02C;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_9e;
extern unsigned int uStack_a0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

__int64 fn_82E3F048(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  __int64 lVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int *puVar4;
  unsigned short uVar5;
  unsigned short uStack_a0;
  unsigned short uStack_9e;
  unsigned int *puStack_9c;
  unsigned int auStack_98 [2];
  unsigned char auStack_90 [16];
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned short uStack_70;
  
  if ((param_2 == (int *)0x0) || ((param_3 & 0xffffffff) == 0)) {
    lVar1 = -0x7fffbffd;
  }
  else {
    uStack_9e = 0;
    puVar4 = (unsigned int *)0x0;
    lVar1 = (**(int (***)())(*param_2 + 0x30))(param_2,&uStack_9e);
    if (-1 < lVar1) {
      uVar5 = 0;
      if (uStack_9e != 0) {
        do {
          uStack_a0 = 0;
          auStack_98[0] = 4;
          lVar1 = (**(int (***)())(*param_2 + 0x34))(param_2,uVar5,&uStack_a0,auStack_98);
          if (lVar1 < 0) {
            return lVar1;
          }
          uStack_80 = lbl_8214C020;
          uStack_7c = lbl_8214C024;
          uStack_78 = lbl_8214C028;
          uStack_74 = lbl_8214C02C;
          uStack_70 = uStack_a0;
          iVar3 = fn_82E3BF28(param_1 + 0x1ac,&uStack_80,&puStack_9c,auStack_90);
          if (iVar3 == 0) {
            uVar2 = fn_82E50BE8(0x88,0,0,0,0);
            if ((uVar2 & 0xffffffff) == 0) {
              puVar4 = (unsigned int *)0x0;
            }
            else {
              puVar4 = (unsigned int *)
                       fn_82E700E0(uVar2,param_2,uStack_a0,param_3,param_4,
                                         *(unsigned int *)(param_1 + 100),
                                         *(unsigned int *)(param_1 + 0x44) & 4);
            }
            puStack_9c = puVar4;
            if (puVar4 == (unsigned int *)0x0) {
              lVar1 = -0x7ff8fff2;
              break;
            }
            lVar1 = fn_82E3E5A8(param_1 + 0x1ac,&uStack_80,&puStack_9c);
            if (lVar1 < 0) goto LAB_82e3f1e8;
          }
          puVar4 = (unsigned int *)0x0;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uStack_9e);
      }
      if (-1 < (int)lVar1) {
        *(unsigned int *)(param_1 + 0x68) = *(unsigned int *)(param_1 + 0x68) | 4;
LAB_82e3f1e8:
        if (puVar4 != (unsigned int *)0x0) {
          (**(int (***)())*puVar4)(puVar4,1);
        }
      }
    }
  }
  return lVar1;
}

