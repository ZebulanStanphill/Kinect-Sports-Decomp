extern unsigned int *auStack_b0;
extern unsigned int *auStack_bc;
extern int fn_82E4FE08();
extern int fn_82F691F0();
extern unsigned int lbl_821537A8;
extern unsigned int uStack_c0;


__int64 fn_82E28538(int *param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  __int64 lVar3;
  int iVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  __int64 lVar7;
  unsigned int uVar8;
  unsigned int uStack_c0;
  unsigned int auStack_bc;
  unsigned char auStack_b0 [16];
  unsigned char abStack_a0 [16];
  unsigned char abStack_90 [128];
  
  uStack_c0 = 0;
  lVar3 = (**(int (***)())(*param_1 + 0x28))(param_1,0xffffffff82153478,abStack_a0);
  if (-1 < lVar3) {
    lVar3 = (**(int (***)())(*param_1 + 0x28))(param_1,0xffffffff82153488,auStack_b0);
    if (-1 < lVar3) {
      iVar4 = (**(int (***)())(*param_1 + 0x1c))(param_1,0xffffffff82153568,&auStack_bc);
      if ((-(iVar4 >> 0x1f) - 1U & auStack_bc) != 0) {
        (**(int (***)())(*param_1 + 0xc))(param_1,0xffffffff82153548,0);
      }
      pbVar6 = abStack_a0;
      pbVar5 = &lbl_821537A8;
      do {
        bVar1 = *pbVar6;
        bVar2 = *pbVar5;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar6 = pbVar6 + 1;
        pbVar5 = pbVar5 + 1;
      } while (pbVar6 != abStack_90);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
        (**(int (***)())(*param_1 + 0x38))(param_1,0xffffffff821536d8,&uStack_c0);
        lVar7 = -0x7ff8fdea;
        if (uStack_c0 < 0x10000) {
          uVar8 = uStack_c0 & 0xffff;
          lVar3 = 0;
        }
        else {
          uVar8 = 0xffff;
          lVar3 = lVar7;
        }
        if (-1 < (int)lVar3) {
          uVar8 = uVar8 + 0x28 & 0xffff;
          if (uVar8 < 0x28) {
            uVar8 = 0xffff;
          }
          else {
            lVar7 = 0;
          }
          lVar3 = lVar7;
          if (-1 < (int)lVar7) {
            lVar3 = fn_82E4FE08(uVar8);
            if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
              fn_82F691F0(lVar3,0,uVar8);
            }
            lVar3 = -0x7ff8fff2;
          }
        }
      }
      else {
        lVar3 = -0x7ff8ffa9;
      }
    }
  }
  return lVar3;
}

