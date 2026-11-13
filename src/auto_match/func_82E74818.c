typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_70;
extern int fn_82E418D0();
extern int fn_82E73470();
extern int fn_82E73978();
extern int fn_82E73A90();
extern int fn_82E73B58();
extern int fn_82E740C0();
extern int fn_82E74310();
extern int fn_82E74680();
extern unsigned int iStack_78;
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int uStack_74;


__int64 fn_82E74818(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  __int64 lVar9;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  unsigned int uStack_74;
  unsigned __int64 auStack_70 [14];
  
  lVar9 = 0;
  if (*(int *)(param_1 + 0x1d8) == 0) {
LAB_82e748c8:
    lVar9 = -0x7fff0001;
  }
  else {
    bVar2 = false;
    iStack_80 = 0;
    auStack_70[0] = 0;
    uVar7 = 0;
    if (*(int *)(param_1 + 0x1c) != 0) {
      do {
        if (bVar2) {
          return lVar9;
        }
        iVar8 = param_1 + 0x10;
        iVar4 = fn_82E740C0(iVar8,uVar7,auStack_70,&iStack_80);
        uVar3 = auStack_70[0];
        iVar5 = iStack_80;
        if ((iVar4 == 0) || (0x7f < *(unsigned short *)(iStack_80 + 0x20))) goto LAB_82e748c8;
        if ((param_3 == 0) && (param_2 <= auStack_70[0])) {
          bVar2 = true;
          iVar5 = fn_82E74680(iVar8,auStack_70,&iStack_80);
          uVar6 = uVar7;
          if (iVar5 == 0) goto LAB_82e748c8;
        }
        else {
          uVar1 = *(unsigned int *)(iStack_80 + 0x2c);
          iStack_7c = 0;
          iStack_78 = 0;
          lVar9 = fn_82E74310(param_1,iStack_80,&iStack_7c,&iStack_78);
          if (lVar9 < 0) {
            return lVar9;
          }
          if (*(unsigned int *)(iVar5 + 0x2c) == 0) {
            fn_82E73B58(param_1,iVar5);
            fn_82E73470(iVar5);
            iStack_80 = 0;
          }
          else {
            if (*(unsigned int *)(iVar5 + 0x2c) < uVar1) {
              fn_82E418D0(*(unsigned int *)(param_1 + 0xc),uVar1,iVar5);
            }
            iVar5 = fn_82E74680(iVar8,iVar5 + 0x18,&iStack_80);
            if (iVar5 == 0) goto LAB_82e748c8;
          }
          if (iStack_7c == 0) {
            uVar6 = 0;
          }
          else {
            uStack_74 = 0;
            lVar9 = fn_82E73978(param_1,uVar7 + 1,&uStack_74);
            if (((lVar9 < 0) || (iStack_78 != 0)) || (uVar6 = (unsigned __int64)uStack_74, 0x14 < uVar6)) {
              lVar9 = fn_82E73A90(param_1,uVar3 - *(__int64 *)(param_1 + 0x1e0));
              uVar6 = uVar7;
            }
          }
        }
        uVar7 = uVar6;
      } while (uVar6 < *(unsigned int *)(param_1 + 0x1c));
    }
  }
  return lVar9;
}

