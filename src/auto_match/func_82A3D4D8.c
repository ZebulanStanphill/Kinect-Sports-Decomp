#define true 1
extern int fn_82A3D430();


void fn_82A3D4D8(unsigned __int64 param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar8;
  unsigned __int64 uVar7;
  
  uVar8 = 0;
  do {
    iVar3 = uVar8 + 0x127a;
    uVar8 = uVar8 + 1 & 0xff;
    *(unsigned short *)(iVar3 * 2 + (int)param_1) = 0;
  } while (uVar8 < 0x11);
  fn_82A3D430(param_1);
  uVar6 = 0;
  uVar8 = 0x10;
  do {
    iVar5 = uVar8 + 0x127a;
    uVar4 = 0x10 - uVar8;
    uVar8 = uVar8 + 0xff & 0xff;
    iVar3 = (int)param_1;
    uVar6 = ((unsigned int)*(unsigned short *)(iVar5 * 2 + iVar3) << (uVar4 & 0x3f)) + uVar6 & 0xffff;
  } while (uVar8 != 0);
  do {
    if (uVar6 == 0) {
      uVar8 = 0x10;
      do {
        uVar7 = (unsigned __int64)*(unsigned short *)((uVar8 + 0x127a) * 2 + iVar3);
        while (uVar7 = (unsigned __int64)(short)((short)uVar7 + -1), -1 < (__int64)uVar7) {
          *(char *)((unsigned int)**(unsigned short **)(iVar3 + 0x994) + *(int *)(iVar3 + 0x998)) = (char)uVar8;
          *(int *)(iVar3 + 0x994) = *(int *)(iVar3 + 0x994) + 2;
        }
        uVar8 = uVar8 + 0xff & 0xff;
      } while (uVar8 != 0);
      return;
    }
    uVar8 = 0xf;
    *(short *)(iVar3 + 0x2514) = *(short *)(iVar3 + 0x2514) + -1;
    do {
      iVar5 = (uVar8 + 0x127a) * 2;
      sVar1 = *(short *)(iVar5 + iVar3);
      if (sVar1 != 0) {
        iVar2 = (uVar8 + 0x127b) * 2;
        *(short *)(iVar5 + iVar3) = sVar1 + -1;
        *(short *)(iVar2 + iVar3) = *(short *)(iVar2 + iVar3) + 2;
        break;
      }
      uVar8 = uVar8 + 0xff & 0xff;
    } while (uVar8 != 0);
    uVar6 = uVar6 + 0xffff & 0xffff;
  } while( true );
}

