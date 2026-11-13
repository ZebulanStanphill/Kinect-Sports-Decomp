typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8262FEC8();
extern int fn_82631BF8();
extern int fn_826438C0();
extern int fn_82677B90();
extern int fn_82677C90();
extern int fn_82677DD0();
extern unsigned int uRam83154a70;


bool fn_82678FA0(int param_1)

{
  bool bVar1;
  char cVar3;
  __int64 lVar2;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  int *piVar7;
  unsigned int *puVar8;
  
  piVar7 = (int *)0x83154a98;
  bVar1 = true;
  puVar6 = (unsigned int *)(param_1 + 0x78);
  uVar4 = 0x10;
  do {
    if (*piVar7 != 0) {
      cVar3 = fn_82677C90(param_1,puVar6 + -0x13);
      if (((cVar3 == '\0') || (cVar3 = fn_82677B90(param_1,puVar6,piVar7[1]), cVar3 == '\0')) ||
         (lVar2 = fn_82631BF8(piVar7[2]), (__int64)-(unsigned __int64)(lVar2 == 0) < 0)) {
        bVar1 = false;
        break;
      }
      fn_826438C0(*puVar6,0,lVar2,piVar7[3],puVar6[-0x13]);
      fn_8262FEC8(lVar2);
    }
    uVar4 = uVar4 + 0x10;
    puVar6 = puVar6 + 1;
    piVar7 = piVar7 + 4;
  } while ((uVar4 & 0xffffffff) < 0x130);
  puVar8 = (unsigned int *)(param_1 + 0xc4);
  uVar5 = 8;
  puVar6 = (unsigned int *)0x83154a70;
  while ((cVar3 = fn_82677B90(param_1,puVar8,uRam83154a70), cVar3 != '\0' &&
         (lVar2 = fn_82631BF8(puVar6[1]), -1 < (__int64)-(unsigned __int64)(lVar2 == 0)))) {
    puVar6 = puVar6 + 2;
    fn_826438C0(*puVar8,0,lVar2,*puVar6,0);
    fn_8262FEC8(lVar2);
    uVar5 = uVar5 + 8;
    puVar8 = puVar8 + 1;
    if (0x27 < uVar5) {
LAB_826790e0:
      if (!bVar1) {
        fn_82677DD0(param_1);
      }
      return bVar1;
    }
  }
  bVar1 = false;
  goto LAB_826790e0;
}

