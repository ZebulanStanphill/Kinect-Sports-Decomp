extern unsigned int *auStack_90;
extern int fn_82E3BF28();
extern int fn_82E3E5A8();
extern int fn_82E50BE8();
extern int fn_82E70378();
extern unsigned int iStack_9c;
extern unsigned int lbl_8214C030;
extern unsigned int lbl_8214C034;
extern unsigned int lbl_8214C038;
extern unsigned int lbl_8214C03C;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_9e;
extern unsigned int uStack_a0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

__int64 fn_82E3F220(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  __int64 lVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int *puVar4;
  unsigned short uVar5;
  unsigned short uStack_a0;
  unsigned short uStack_9e;
  int iStack_9c;
  unsigned int *apuStack_98 [2];
  unsigned char auStack_90 [16];
  struct { unsigned int first; unsigned int second; } stack_pair_80;

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
          puVar4 = (unsigned int *)0x0;
          uStack_a0 = 0;
          iStack_9c = 4;
          lVar1 = (**(int (***)())(*param_2 + 0x34))(param_2,uVar5,&uStack_a0,&iStack_9c);
          if (lVar1 < 0) {
            return lVar1;
          }
          if (iStack_9c != 2) {
            lVar1 = 1;
            goto LAB_82e3f3c8;
          }
          stack_pair_80.first = lbl_8214C030;
          stack_pair_80.second = lbl_8214C034;
          uStack_78 = lbl_8214C038;
          uStack_74 = lbl_8214C03C;
          uStack_70 = uStack_a0;
          iVar3 = fn_82E3BF28(param_1 + 0x1ac,&stack_pair_80.first,apuStack_98,auStack_90);
          if (iVar3 == 0) {
            uVar2 = fn_82E50BE8(0x70,0,0,0,0);
            if ((uVar2 & 0xffffffff) == 0) {
              puVar4 = (unsigned int *)0x0;
            }
            else {
              puVar4 = (unsigned int *)
                       fn_82E70378(uVar2,param_2,uStack_a0,param_3,param_4,
                                         *(unsigned int *)(param_1 + 100),
                                         *(unsigned int *)(param_1 + 0x44) & 4);
            }
            apuStack_98[0] = puVar4;
            if (puVar4 == (unsigned int *)0x0) {
              lVar1 = -0x7ff8fff2;
              break;
            }
            lVar1 = fn_82E3E5A8(param_1 + 0x1ac,&stack_pair_80.first,apuStack_98);
            if (lVar1 < 0) goto LAB_82e3f3d4;
          }
          puVar4 = (unsigned int *)0x0;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uStack_9e);
      }
      if (-1 < (int)lVar1) {
LAB_82e3f3c8:
        *(unsigned int *)(param_1 + 0x68) = *(unsigned int *)(param_1 + 0x68) | 8;
LAB_82e3f3d4:
        if (puVar4 != (unsigned int *)0x0) {
          (**(int (***)())*puVar4)(puVar4,1);
        }
      }
    }
  }
  return lVar1;
}

