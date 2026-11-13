typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ADDE40();
extern int fn_82ADE7E8();
extern int fn_82ADEE50();
extern int fn_82ADF288();
extern int fn_82AE5AC8();
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_68;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64 fn_82ADF598(int param_1,int param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5)

{
  bool bVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 *puVar4;
  unsigned __int64 *puVar6;
  unsigned int uVar7;
  unsigned __int64 uVar5;
  int aiStack_70 [2];
  unsigned __int64 uStack_68;
  unsigned __int64 uStack_60;
  unsigned __int64 uStack_58;
  unsigned __int64 uStack_50;
  
  if ((*(unsigned __int64 *)
        (*(int *)((int)((param_5 + 4 & 0xffffffff) << 2) + param_2) +
        ((unsigned int)param_3 >> 3 & 0x1ffffff8)) & 1L << (param_3 & 0x3f)) == 0) {
    puVar6 = (unsigned __int64 *)(*(int *)(param_1 + 0x2a0) * param_4 * 8 + *(int *)(param_1 + 0x2ac));
    puVar4 = puVar6 + *(int *)(param_1 + 0x2a0);
    if (puVar6 < puVar4) {
      iVar3 = *(int *)((int)((param_5 & 0xffffffff) << 2) + param_2) - (int)puVar6;
      do {
        if ((*(unsigned __int64 *)(iVar3 + (int)puVar6) & *puVar6) != 0) {
          bVar1 = true;
          goto LAB_82adf654;
        }
        puVar6 = puVar6 + 1;
      } while (puVar6 < puVar4);
    }
    bVar1 = false;
LAB_82adf654:
    if (!bVar1) {
      if ((*(unsigned int *)(param_2 + 0xc0) & 0x40000000) != 0) {
        uVar7 = 0;
        do {
          if (*(__int64 *)((param_4 * 5 + uVar7 + 1) * 8 + *(int *)(param_1 + 0x2a4)) != 0) {
            bVar1 = true;
            goto LAB_82adf69c;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < 4);
        bVar1 = false;
LAB_82adf69c:
        if (bVar1) {
          uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x318);
          uStack_68 = 0;
          uStack_60 = 0;
          uStack_58 = 0;
          uStack_50 = 0;
          if (uVar5 == 0) {
            uVar5 = 0x20;
          }
          aiStack_70[0] = param_1;
          if (uVar5 < 0x40) {
            fn_82AE5AC8(aiStack_70,uVar5,0x40 - uVar5);
          }
          uVar2 = fn_82ADE7E8(param_1);
          fn_82ADEE50(param_1,uVar2,param_3,param_4,1);
          iVar3 = fn_82ADF288(param_1,param_2,uVar2,param_5,*(unsigned int *)(param_2 + 0xc0) & 7,0,0,
                                aiStack_70);
          fn_82ADDE40(param_1,uVar2);
          if (iVar3 == -1) {
            return 0;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

