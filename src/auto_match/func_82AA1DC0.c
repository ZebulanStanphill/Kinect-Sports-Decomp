extern unsigned int *auStack_50;
extern int fn_82636148();
extern int fn_82AA0258();
extern int fn_82AA1AD8();


void fn_82AA1DC0(__int64 *param_1,unsigned int *param_2,char param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,__int64 param_6)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  char cVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned char auStack_50 [1];
  
  if ((param_3 == '\0') && (uVar1 = param_2[1], (1 << (uVar1 >> 0xc & 0xf) & 0x607eU) != 0)) {
    uVar2 = *param_2;
    uVar9 = 0;
    uVar8 = (unsigned __int64)(uVar2 >> 0xc) & 7;
    *param_1 = 0;
    uVar11 = (unsigned __int64)uVar2 & 0xfff;
    uVar12 = (unsigned __int64)(uVar2 >> 0x10) & 0xfff;
    uVar10 = ((unsigned __int64)uVar1 & 3) << 4 | (unsigned __int64)(uVar2 >> 0x1c);
    if ((uVar2 >> 0xc & 7) != 0) {
      do {
        uVar6 = fn_82636148(*(unsigned int *)(param_1 + 1),uVar11,auStack_50);
        uVar4 = uVar12 & 1;
        uVar3 = uVar12 >> 1;
        uVar5 = uVar10 & 1;
        uVar10 = uVar10 >> 1;
        uVar12 = uVar12 >> 2;
        cVar7 = fn_82AA0258(param_1,uVar4,uVar3 & 1,uVar5,uVar6);
        if (cVar7 != '\0') {
          *param_2 = *param_2 & 0xf000ffff | ((2 << (uVar9 & 0x3f)) << 0x10 | *param_2) & 0xfff0000;
        }
        uVar8 = uVar8 - 1;
        uVar9 = uVar9 + 2;
        uVar11 = uVar11 + 1;
      } while (uVar8 != 0);
      if (*param_1 != 0) {
        fn_82AA1AD8(param_1,param_6 + 1);
      }
    }
  }
  return;
}

