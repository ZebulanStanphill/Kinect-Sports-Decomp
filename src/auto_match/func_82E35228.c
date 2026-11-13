extern int fn_82F691F0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;


void fn_82E35228(unsigned __int64 param_1,unsigned int *param_2,unsigned int *param_3,short param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  piVar5 = (int *)fn_82F6A548();
  uVar4 = lbl_821AAD20;
  uVar3 = lbl_82186E6C;
  iVar1 = *piVar5;
  uVar2 = *(unsigned int *)(iVar1 + 0x100);
  if (15999 < *(int *)(iVar1 + 0x50)) {
    trapWord(6,(unsigned __int64)(unsigned int)piVar5[0x1de8],0);
    trapWord(5,(unsigned __int64)(unsigned int)piVar5[0x1de8] &
               ~((((unsigned __int64)uVar2 & 0x7fffffff) << 1 | (unsigned __int64)(uVar2 >> 0x1f)) - 1),0xffff);
  }
  if (*(short *)(iVar1 + 0x22) != 0) {
    *param_3 = param_2;
    param_2[0x2b] = param_3;
    param_2[0x11] = 0;
    param_3[0x13] =
         (unsigned int)*(unsigned short *)(iVar1 + 0x22) * (int)param_4 * *(int *)(iVar1 + 0xfc) * 4 +
         piVar5[0x1db4];
    param_3[0x16] = piVar5[0x1db5];
    if (piVar5[0x41ea] != 0) {
      param_3[0x18] = piVar5[0x1db6];
    }
    iVar6 = piVar5[0x1db7];
    param_3[0x20] = 0;
    param_3[0x17] = iVar6;
    *param_2 = *(unsigned int *)(iVar1 + 0x13c);
    param_3[0x2e] = piVar5[0x1dd7] + 0x80;
    param_3[0x2f] = piVar5[0x1dd8] + 0x80;
    iVar6 = (int)(short)uVar2 >> 1;
    if (*(int *)(iVar1 + 0x1c0) != 0) {
      iVar6 = iVar6 << (*(unsigned int *)(iVar1 + 0x1c8) & 0x3f);
    }
    iVar7 = *(int *)(iVar1 + 0x144);
    param_2[0x12] = uVar4;
    param_2[0x13] = uVar4;
    *(unsigned short *)(param_2 + 0x1c) = 0x7fff;
    param_2[0x14] = uVar4;
    *(unsigned short *)(param_2 + 0x1d) = 0;
    param_2[0x17] = uVar4;
    *(unsigned short *)((int)param_2 + 0x7a) = 0;
    param_2[0x19] = uVar4;
    *(unsigned short *)(param_2 + 0x20) = 0;
    param_2[0x1a] = uVar4;
    *(unsigned short *)(param_2 + 0x21) = 0;
    param_2[0x15] = uVar4;
    *(unsigned short *)((int)param_2 + 0x86) = 0;
    *(unsigned short *)((int)param_2 + 0x72) = 0;
    param_2[0x18] = uVar4;
    *(unsigned short *)(param_2 + 0x1f) = 0;
    param_2[0x16] = uVar4;
    *(unsigned short *)((int)param_2 + 0x82) = 0;
    param_2[0x1b] = uVar4;
    *(unsigned short *)((int)param_2 + 0x7e) = 0;
    *(unsigned short *)((int)param_2 + 0x76) = 0;
    iVar7 = iVar6 * 4 + iVar7;
    param_2[0xe] = iVar7;
    param_2[0x24] = iVar7;
    param_3[0x1e] = piVar5[0x1dd5];
    param_3[0x1f] = piVar5[0x1dd6];
    iVar6 = piVar5[0x1df5];
    param_3[1] = iVar6;
    param_3[4] = iVar6 + 0x70;
    param_3[3] = iVar6 + 0xe0;
    iVar6 = (unsigned int)*(unsigned short *)(iVar1 + 0x22) * (int)param_4 * *(int *)(iVar1 + 0xe4) * 0x70 +
            piVar5[0x1df6];
    param_3[5] = iVar6;
    param_3[2] = iVar6;
    param_3[6] = iVar6;
    param_3[7] = iVar6;
    iVar7 = (int)param_4;
    param_3[8] = (unsigned int)*(unsigned short *)(iVar1 + 0x22) * iVar7 * *(int *)(iVar1 + 0xe4) * 0x70 +
                 piVar5[0x1dfb];
    iVar6 = (unsigned int)*(unsigned short *)(iVar1 + 0x22) * iVar7 * *(int *)(iVar1 + 0xe4) * 0x70 + piVar5[0x1df7]
    ;
    param_3[10] = iVar6;
    param_3[9] = iVar6;
    param_3[0xb] = iVar6;
    param_3[0xc] = piVar5[0x1dfa];
    param_3[0xd] = piVar5[0x41cb];
    param_3[0xe] = (unsigned int)*(unsigned short *)(iVar1 + 0x22) * iVar7 * 0x14 + piVar5[0x41f7];
    param_3[0xf] = (unsigned int)*(unsigned short *)(iVar1 + 0x22) * iVar7 * 0x200 + piVar5[0x41f8];
    param_3[0x10] = (unsigned int)*(unsigned short *)(iVar1 + 0x22) * (int)param_4 * 0x200 + piVar5[0x41f9];
    *(unsigned int *)param_3[0xe] = uVar3;
    *(unsigned int *)(param_3[0xe] + 4) = uVar3;
    *(unsigned int *)(param_3[0xe] + 8) = uVar3;
    *(unsigned int *)(param_3[0xe] + 0xc) = uVar3;
    *(unsigned int *)(param_3[0xe] + 0x10) = uVar3;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_3[0xf],0,0x200);
  }
  fn_82F6A594();
  return;
}

