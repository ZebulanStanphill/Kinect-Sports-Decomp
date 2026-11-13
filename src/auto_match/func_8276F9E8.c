extern int fn_8267B890();
extern int fn_826809F0();
extern int fn_82F691F0();
extern int fn_82F6A530();
extern int fn_82F6A57C();
extern int fn_82F6B2A8();


void fn_8276F9E8(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  double dVar9;
  
  iVar2 = fn_82F6A530();
  if ((param_3 & 0xffffffff) != 0) {
    uVar5 = 0;
    uVar3 = 0;
    uVar4 = 0;
    if (param_2[1] != 0) {
      iVar6 = 0;
      do {
        iVar7 = *param_2 + iVar6;
        if (*(int *)(iVar7 + 0xc) == 0) {
          dVar9 = (double)fn_82F6B2A8((double)*(float *)(iVar7 + 0x18));
          if ((int)uVar5 < (int)dVar9) {
            dVar9 = (double)fn_82F6B2A8((double)*(float *)(iVar7 + 0x18));
            uVar5 = (unsigned int)dVar9;
          }
          dVar9 = (double)fn_82F6B2A8((double)*(float *)(iVar7 + 0x1c));
          if ((int)uVar3 < (int)dVar9) {
            dVar9 = (double)fn_82F6B2A8((double)*(float *)(iVar7 + 0x1c));
            uVar3 = (unsigned int)dVar9;
          }
        }
        uVar4 = uVar4 + 1;
        iVar6 = iVar6 + 0x28;
      } while (uVar4 < (unsigned int)param_2[1]);
    }
    uVar4 = *(unsigned int *)(iVar2 + 0x14);
    uVar8 = *(unsigned int *)(iVar2 + 0x18);
    if ((uVar5 <= uVar4 >> 1) && (uVar4 = 1, 1 < uVar5)) {
      do {
        uVar4 = uVar4 << 1;
      } while (uVar4 < uVar5);
    }
    if ((uVar3 <= uVar8 >> 1) && (uVar8 = 1, 1 < uVar3)) {
      do {
        uVar8 = uVar8 << 1;
      } while (uVar8 < uVar3);
    }
    uVar1 = fn_8267B890(*(unsigned int *)(iVar2 + 0x2c),0x30,0);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_826809F0(uVar1,9,uVar4,uVar8);
    }
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*(unsigned int *)(iVar2 + 0x18),0,(__int64)(int)uVar8 * (__int64)(int)uVar4);
  }
  fn_82F6A57C();
  return;
}

