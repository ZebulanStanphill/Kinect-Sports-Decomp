extern unsigned int *auStack_60;
extern int fn_82AA66A8();
extern int fn_82ABE9F0();
extern int fn_82ADDAA8();
extern int fn_82ADDE40();
extern int fn_82ADF910();
extern unsigned int stack0x0000002c;
extern unsigned int uStack0000002c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int fn_82AE0148(int param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                 unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned __int64 uVar10;
  unsigned int uStack0000002c;
  unsigned int auStack_60 [24];
  
  uStack0000002c = (unsigned int)param_4;
  fn_82ADF910(auStack_60,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  iVar9 = param_2;
  if ((auStack_60[0] & 0xf0000) == 0) {
    if ((param_7 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    if ((param_5 & 0xffffffff) != 0) {
      uVar8 = 4;
      uVar10 = param_5;
      do {
        uVar3 = uVar8 >> 3 & 0x1ffffffc;
        uVar1 = uVar8 & 0x1f;
        uVar4 = uVar8 - 4 >> 3 & 0x1ffffffc;
        uVar2 = uVar8 - 4 & 0x1f;
        uVar7 = uVar8 - 1;
        *(unsigned int *)((int)auStack_60 + uVar4) =
             (((2 << (uVar8 + 3 & 0x1f)) - 1U & *(unsigned int *)((int)&stack0x0000002c + uVar3) &
              -1 << uVar1) >> uVar1) << uVar2 | *(unsigned int *)((int)auStack_60 + uVar4);
        uVar8 = uVar8 + 8;
        *(unsigned int *)((int)auStack_60 + uVar3) =
             (((2 << (uVar7 & 0x1f)) - 1U & *(unsigned int *)((int)&stack0x0000002c + uVar4) & -1 << uVar2)
             >> uVar2) << uVar1 | *(unsigned int *)((int)auStack_60 + uVar3);
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    uStack0000002c = 0;
    puVar5 = (unsigned int *)fn_82ADF910(auStack_60,param_1,param_3,param_2,0,param_5,param_6,0);
    auStack_60[0] = *puVar5;
    iVar9 = param_3;
    param_3 = param_2;
  }
  for (uVar8 = *(unsigned int *)(iVar9 + 0xc0); (uVar8 & 7) < (auStack_60[0] >> 0x10 & 0xf);
      uVar8 = uVar8 & 7) {
    uVar6 = fn_82ABE9F0(param_1,*(int *)(param_1 + 0x2a0) << 3,0);
    *(unsigned int *)((*(unsigned int *)(iVar9 + 0xc0) & 7) * 4 + iVar9) = uVar6;
    uVar8 = *(unsigned int *)(iVar9 + 0xc0) + 1;
    *(unsigned int *)(iVar9 + 0xc0) = *(unsigned int *)(iVar9 + 0xc0) & 0xfffffff8 | uVar8 & 7;
  }
  uVar10 = 0;
  if ((*(unsigned int *)(param_3 + 0xc0) & 7) != 0) {
    uVar8 = 0;
    do {
      if (((unsigned int)(1 << ((unsigned int)uVar10 & 0x3f)) & param_6) == 0) {
        fn_82ADDAA8(param_1,iVar9,
                      ((2 << (uVar8 + 3 & 0x1f)) - 1U &
                       *(unsigned int *)((int)auStack_60 + (uVar8 >> 3 & 0x1ffffffc)) & -1 << (uVar8 & 0x1f)
                      ) >> (uVar8 & 0x1f),param_3,uVar10,param_8);
      }
      uVar10 = uVar10 + 1;
      uVar8 = uVar8 + 4;
    } while ((uVar10 & 0xffffffff) < ((unsigned __int64)*(unsigned int *)(param_3 + 0xc0) & 7));
  }
  if ((param_8 & 0xff) == 0) {
    fn_82ADDE40(param_1,param_3);
  }
  return iVar9;
}

