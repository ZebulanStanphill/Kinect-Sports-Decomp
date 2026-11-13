typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_40;
extern int fn_82ADF910();
extern unsigned int stack0x0000002c;
extern unsigned int uStack0000002c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool fn_82ADFFA8(unsigned __int64 param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned int uStack0000002c;
  unsigned int auStack_40 [16];
  
  uStack0000002c = (unsigned int)param_4;
  if ((param_5 & 0xffffffff) == 0) {
    if (((((((unsigned __int64)*(unsigned int *)(param_3 + 0xc0) & 7) + ((unsigned __int64)*(unsigned int *)(param_2 + 0xc0) & 7))
           - param_7 & 0xffffffff) < 5) && ((*(unsigned int *)(param_2 + 0xc0) & 0x40000000) == 0)) &&
       ((*(unsigned int *)(param_3 + 0xc0) & 0x40000000) == 0)) {
      return true;
    }
  }
  puVar5 = (unsigned int *)fn_82ADF910(auStack_40,param_1,param_2,param_3,param_4,param_5,param_6,param_7)
  ;
  if ((*puVar5 & 0xf0000) != 0) {
    return true;
  }
  if ((param_7 & 0xffffffff) == 0) {
    if ((param_5 & 0xffffffff) != 0) {
      uVar7 = 4;
      uVar8 = param_5;
      do {
        uVar3 = uVar7 >> 3 & 0x1ffffffc;
        uVar1 = uVar7 & 0x1f;
        uVar4 = uVar7 - 4 >> 3 & 0x1ffffffc;
        uVar2 = uVar7 - 4 & 0x1f;
        uVar6 = uVar7 - 1;
        *(unsigned int *)((int)auStack_40 + uVar4) =
             (((2 << (uVar7 + 3 & 0x1f)) - 1U & *(unsigned int *)((int)&stack0x0000002c + uVar3) &
              -1 << uVar1) >> uVar1) << uVar2 | *(unsigned int *)((int)auStack_40 + uVar4);
        uVar7 = uVar7 + 8;
        *(unsigned int *)((int)auStack_40 + uVar3) =
             (((2 << (uVar6 & 0x1f)) - 1U & *(unsigned int *)((int)&stack0x0000002c + uVar4) & -1 << uVar2)
             >> uVar2) << uVar1 | *(unsigned int *)((int)auStack_40 + uVar3);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    puVar5 = (unsigned int *)fn_82ADF910(auStack_40,param_1,param_3,param_2,0,param_5,param_6,0);
    return (*puVar5 & 0xf0000) != 0;
  }
  return false;
}

