extern unsigned int *auStack_94;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D9FE88();
extern int fn_82D9FFD0();
extern int fn_82DA00B0();
extern int fn_82DA0380();
extern unsigned int uStack_98;
extern unsigned int uStack_9c;


void fn_82DC8030(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned short uVar1;
  unsigned short *puVar2;
  int iVar3;
  __int64 lVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned char *puStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned char auStack_94 [100];
  
  if (*(int *)(*(int *)(param_2 + 0x24) + 0x10) != 0) {
    puStack_a0 = auStack_94;
    lVar4 = 0;
    uStack_9c = 0;
    uStack_98 = 0x80000010;
    puVar2 = *(unsigned short **)(*(int *)(param_2 + 0x24) + 0x10);
    uVar1 = *puVar2;
    while (0x16 < uVar1) {
      iVar3 = fn_82CE5410();
      if (uStack_9c == (uStack_98 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(unsigned int *)(iVar3 + 0x10),&puStack_a0,4);
      }
      *(unsigned short **)(puStack_a0 + uStack_9c * 4) = puVar2;
      lVar4 = (unsigned __int64)uStack_9c + 1;
      uStack_9c = (unsigned int)lVar4;
      puVar2 = *(unsigned short **)(puVar2 + 10);
      uVar1 = *puVar2;
    }
    uVar6 = lVar4 - 1;
    if (-1 < (__int64)uVar6) {
      lVar4 = (uVar6 & 0x3fffffff) << 2;
      do {
        puVar2 = *(unsigned short **)(puStack_a0 + (int)lVar4);
        uVar5 = (unsigned int)*puVar2;
        if (uVar5 - 0x17 < 6) {
          if (uVar5 == 0x17) {
            fn_82D9FFD0(param_1,puVar2,param_3);
          }
          else if (uVar5 == 0x18) {
            fn_82D9FE88(param_1,puVar2,param_3);
          }
          else if (uVar5 != 0x19) {
            if (uVar5 == 0x1a) {
              fn_82DA00B0(param_1,puVar2,param_3);
            }
            else if (uVar5 != 0x1b) {
              fn_82DA0380(param_1,puVar2,param_3);
            }
          }
        }
        uVar6 = uVar6 - 1;
        lVar4 = lVar4 + -4;
      } while (-1 < (__int64)uVar6);
    }
    iVar3 = fn_82CE5410();
    uStack_9c = 0;
    if ((uStack_98 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar3 + 0x10) + 0x10))
                (*(int **)(iVar3 + 0x10),puStack_a0,uStack_98 & 0x3fffffff,4);
    }
  }
  return;
}

