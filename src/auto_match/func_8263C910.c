typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_3c;
extern int fn_8263C2C8();
extern int fn_8264D380();
extern int fn_8264D4C0();
extern int fn_8265C940();
extern int fn_8265C990();
extern int iRam83275b4c;
extern int iRam83275b50;
extern unsigned int uStack_40;


unsigned int * fn_8263C910(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                    unsigned __int64 param_5)

{
  bool bVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int uStack_40;
  unsigned char auStack_3c [60];
  
  puVar4 = (unsigned int *)fn_8265C940(0x30,0x64800000);
  if (puVar4 != (unsigned int *)0x0) {
    fn_8263C2C8(param_1,param_2,param_3,param_4,param_5,puVar4,&uStack_40,auStack_3c);
    uVar3 = uStack_40;
    *puVar4 = *puVar4 | 0x100000;
    if ((param_5 & 0xffffffff) != 0) {
      return puVar4;
    }
    if (((puVar4[10] & 0x3f) == 0x16) || (bVar1 = false, (puVar4[10] & 0x3f) == 0x17)) {
      bVar1 = true;
    }
    uVar6 = (unsigned __int64)uStack_40;
    iVar5 = fn_8264D4C0(uVar6,&uStack_40);
    iVar2 = iRam83275b50;
    if (iVar5 != 0) {
      uVar6 = uStack_40 + uVar6;
      if ((uVar6 & 0xffffffff) < 0x801) {
        *puVar4 = *puVar4 | 0x80000000;
        if (!bVar1) {
          puVar4[7] = uStack_40 & 0xfff | puVar4[7] & 0xfffff000;
          return puVar4;
        }
        puVar4[7] = uStack_40 & 0xfff | puVar4[7] & 0xfffff000;
        if (iRam83275b4c != 0) {
          return puVar4;
        }
        iRam83275b4c = 1;
        puVar4[8] = puVar4[8] & 0x1ffff;
        return puVar4;
      }
      RtlEnterCriticalSection();
      *(unsigned int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + uVar3;
      fn_8264D380(iVar2,(unsigned __int64)uStack_40,uVar6,0);
      RtlLeaveCriticalSection();
    }
    fn_8265C990(puVar4,0x24800000);
  }
  return (unsigned int *)0x0;
}

