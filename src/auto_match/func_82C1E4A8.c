typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_82C10F68();
extern int fn_82C10FD0();
extern int fn_82C11038();
extern int fn_82C1E328();
extern unsigned int iStack_4c;


unsigned __int64 fn_82C1E4A8(int param_1,__int64 param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned char auStack_50;
  int iStack_4c;
  unsigned int auStack_48 [1];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iStack_4c = 0;
  auStack_50 = 0;
  bVar3 = false;
  uVar8 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar1 + 4) + 0x14) + param_2;
  if ((__int64)(unsigned __int64)*(unsigned int *)(*(int *)(iVar1 + 4) + 0x10) < (__int64)uVar8) {
    return 0xffffffff80070057;
  }
  if ((__int64)uVar8 < (__int64)(unsigned __int64)*(unsigned int *)(*(int *)(iVar1 + 4) + 0x14)) {
    return 0xffffffff80070057;
  }
  if (*(short *)(iVar1 + 0x98) != 0) {
    uVar4 = fn_82C10F68(*(unsigned int *)(iVar1 + 0x94),auStack_48,&iStack_4c,&auStack_50);
    if ((uVar4 & 0xffffffff) != 0x80500016) {
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      do {
        if ((int)uVar4 < 0) {
          return uVar4;
        }
        if ((((iStack_4c != 0) && (*(int *)(iStack_4c + 0x30) == 2)) &&
            (*(int *)(iStack_4c + 4) != 0)) && (*(int *)(iStack_4c + 0x50) == 0)) {
          bVar3 = true;
          break;
        }
        uVar4 = fn_82C10FD0(*(unsigned int *)(iVar1 + 0x94),auStack_48[0],&iStack_4c,&auStack_50);
      } while ((uVar4 & 0xffffffff) != 0x80500016);
    }
    fn_82C11038(*(unsigned int *)(iVar1 + 0x94),auStack_48[0]);
    if (bVar3) {
      iVar2 = *(int *)(iStack_4c + 0x48);
      uVar5 = (unsigned __int64)*(unsigned int *)(iVar2 + 4);
      uVar4 = (__int64)uVar8 / (__int64)uVar5 & 0xffffffff;
      trapDoubleWordImmediate(6,uVar5,0);
      trapDoubleWordImmediate(5,uVar5 & ~((uVar8 * 2 | uVar8 >> 0x3f) - 1),0xffff);
      if (*(unsigned int *)(iVar2 + 0xc) < uVar4) {
        return 0xffffffff80070057;
      }
      iVar6 = *(int *)(iVar1 + 4);
      uVar7 = *(unsigned int *)((int)(uVar4 << 3) + *(int *)(iVar2 + 0x10));
      if (*(unsigned int *)(iVar6 + 0xc) < uVar7) {
        return 0xffffffff80070057;
      }
      goto LAB_82c1e644;
    }
  }
  iVar6 = *(int *)(iVar1 + 4);
  uVar7 = 0;
  if (*(int *)(iVar6 + 0x10) != 0) {
    uVar4 = (unsigned __int64)*(unsigned int *)(iVar6 + 0x10);
    uVar8 = (unsigned __int64)*(unsigned int *)(iVar6 + 0xc) * param_2;
    trapDoubleWordImmediate(6,uVar4,0);
    uVar7 = (unsigned int)((__int64)uVar8 / (__int64)uVar4);
    trapDoubleWordImmediate(5,uVar4 & ~((uVar8 * 2 | uVar8 >> 0x3f) - 1),0xffff);
  }
LAB_82c1e644:
  uVar8 = fn_82C1E328(param_1,((__int64)*(int *)(iVar6 + 8) * (__int64)(int)uVar7 & 0xffffffffU)
                                + *(__int64 *)(iVar1 + 0x10));
  return uVar8;
}

