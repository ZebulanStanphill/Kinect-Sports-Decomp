extern int fn_82C10B28();
extern int fn_82C27898();
extern int fn_82C27A68();
extern int fn_82C280E8();
extern int fn_82C28608();
extern int fn_82C297F8();
extern unsigned int iStack_4c;


/* WARNING: Type propagation algorithm not settling */

unsigned __int64 fn_82C28858(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int *puStack_50;
  int iStack_4c;
  int aiStack_48 [3];

  iVar1 = *(int *)(param_1 + 0x2c);
  aiStack_48[0] = 0;
  puStack_50 = (unsigned int *)0x0;
  aiStack_48[2] = 0;
  iStack_4c = 0;
  aiStack_48[1] = 0;
  uVar4 = fn_82C27A68(param_1,param_2,aiStack_48);
  if (-1 < (int)uVar4) {
    if (aiStack_48[0] == 0) {
      uVar4 = 0xffffffff80500009;
    }
    else {
      if (*(int *)(param_2 + 0x1c) != 0) {
        do {
          uVar4 = fn_82C28608(param_1,param_2,aiStack_48 + 2,aiStack_48 + 1);
          if ((int)uVar4 < 0) {
            return uVar4;
          }
        } while ((int)uVar4 != 0x500001);
      }
      uVar4 = fn_82C280E8(param_1,*(unsigned __int64 *)(param_2 + 0x10),&puStack_50,&iStack_4c);
      if (-1 < (int)uVar4) {
        if (iStack_4c == 0) {
          iStack_4c = 0;
          puStack_50 = (unsigned int *)0x0;
          uVar4 = fn_82C297F8(param_1);
          if ((int)uVar4 < 0) {
            return uVar4;
          }
        }
        puStack_50[1] = puStack_50[1] + -1;
        if (iStack_4c == 0) {
          uVar4 = 0xffffffff80500008;
        }
        else {
          uVar4 = fn_82C27898(param_1,param_2);
          if (-1 < (int)uVar4) {
            iVar2 = *(int *)(param_1 + 0x2c);
            uVar4 = 0;
            puVar3 = *(unsigned int **)(iVar2 + 0x94);
            if (*(unsigned int **)(iVar2 + 0x94) == (unsigned int *)0x0) {
              *(unsigned __int64 *)(iVar1 + 0x30) = 0;
              *(unsigned int *)(iVar1 + 0x38) = 0;
            }
            else {
              do {
                do {
                  puStack_50 = puVar3;
                  if (puStack_50 == (unsigned int *)0x0) {
                    if ((int)uVar4 < 0) {
                      return uVar4;
                    }
                    *(unsigned __int64 *)(iVar1 + 0x30) = 0;
                    *(unsigned int *)(iVar1 + 0x38) = 0;
                    return uVar4;
                  }
                  puVar3 = (unsigned int *)puStack_50[2];
                } while (puStack_50[1] != 1);
                uVar4 = (**(int (***)())(*(int *)(iVar2 + 0x4c) + 8))
                                  (*(int *)(iVar2 + 0x4c),*puStack_50);
                if ((int)uVar4 < 0) {
                  return uVar4;
                }
                if (puStack_50 == *(unsigned int **)(iVar2 + 0x94)) {
                  *(unsigned int *)(iVar2 + 0x94) = puStack_50[2];
                }
                if (puStack_50[3] != 0) {
                  *(unsigned int *)(puStack_50[3] + 8) = puStack_50[2];
                }
                if (puStack_50[2] != 0) {
                  *(unsigned int *)(puStack_50[2] + 0xc) = puStack_50[3];
                }
                uVar4 = fn_82C10B28(*(unsigned int *)(iVar2 + 0x48),0x1d,&puStack_50);
              } while (-1 < (int)uVar4);
            }
          }
        }
      }
    }
  }
  return uVar4;
}
