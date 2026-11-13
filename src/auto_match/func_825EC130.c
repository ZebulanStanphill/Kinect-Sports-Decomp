extern int fn_825EBE30();


void fn_825EC130(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  int iVar7;
  
  uVar1 = *(unsigned int *)((*(int *)(param_1 + 0x10) + 1) * 4 + *(int *)(param_1 + 8));
  uVar6 = (unsigned __int64)uVar1;
  if (0 < (int)uVar1) {
    iVar7 = 0;
    do {
      iVar2 = *(int *)((int)(((unsigned __int64)*(unsigned int *)(param_1 + 0x10) + 3 & 0xffffffff) << 2) +
                      *(int *)(param_1 + 8));
      iVar4 = iVar2 + iVar7;
      iVar2 = *(int *)(iVar2 + iVar7);
      if ((*(unsigned int *)((int)(((unsigned __int64)*(unsigned int *)(param_1 + 0x10) + 0x1e & 0xffffffff) << 2) + iVar2)
          & 0x400) == 0) {
        if ((param_2 == 2) &&
           ((*(unsigned int *)((*(int *)(param_1 + 0x10) + 0x1e) * 4 + iVar2) & 0x100000) != 0)) {
          *(unsigned int *)(iVar4 + 0x10) = 0;
        }
        else if ((*(unsigned int *)((*(int *)(param_1 + 0x10) + 0x1e) * 4 + iVar2) & 2) == 0) {
          uVar1 = *(unsigned int *)(iVar2 + 0x74);
          lVar5 = -0x7ce403f8;
          if (uVar1 != 0xffffffff) {
            iVar3 = *(int *)(((uVar1 >> 0x18) + 0x129) * 4 + *(int *)(param_1 + 0x30));
            lVar5 = ((__int64)(int)((uVar1 & 0xff) * *(int *)(iVar3 + 0x48) + (uVar1 >> 8 & 0xff))
                     * (__int64)*(int *)(iVar3 + 0x44) + ((unsigned __int64)(uVar1 >> 0x10) & 0xff) &
                    0xfffffff) * 0x10 + (unsigned __int64)*(unsigned int *)(iVar3 + 0x50);
          }
          fn_825EBE30((double)*(float *)(iVar2 + 0x20),param_1,iVar4,uVar1,lVar5,iVar2 + 0x10);
        }
        else {
          *(unsigned int *)((param_2 + 2) * 4 + iVar4) = 1;
        }
      }
      else {
        *(unsigned int *)((param_2 + 2) * 4 + iVar4) = 0;
      }
      uVar6 = uVar6 - 1;
      iVar7 = iVar7 + 0x18;
    } while (uVar6 != 0);
  }
  return;
}

