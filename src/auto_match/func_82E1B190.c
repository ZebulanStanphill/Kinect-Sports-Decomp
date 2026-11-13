extern unsigned int *auStack_80;
extern int fn_82BA02A8();
extern int fn_82CE52E0();
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA220();
extern int fn_82CEA2F0();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern int fn_82CEB3C8();
extern int fn_82CFC050();
extern int fn_82CFC288();
extern int fn_82E1A8D0();
extern int fn_82E1B0A8();
extern unsigned int iStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;


int fn_82E1B190(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,
                 __int64 param_5,int param_6,int param_7,unsigned __int64 param_8)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  int *piVar7;
  int *piVar8;
  unsigned int auStack_80 [2];
  unsigned int uStack_78;
  unsigned int uStack_74;
  int iStack_70;
  
  if ((param_2 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = fn_82CE5410();
    lVar6 = (param_3 + (param_3 & 0x7fffffff) * 2 & 0x1fffffff) << 3;
    iVar2 = fn_82CE52E0(*(unsigned int *)(iVar1 + 0x10),lVar6);
    fn_82CFC050(iVar2,param_2,lVar6);
    uStack_78 = 0;
    uStack_74 = 0;
    iStack_70 = -1;
    iVar1 = fn_82CE5410();
    fn_82CEAB00(&uStack_78,*(unsigned int *)(iVar1 + 0x10),0);
    if (0 < (int)param_3) {
      piVar8 = (int *)(iVar2 + 8);
      do {
        iVar1 = fn_82CFC288(piVar8[-2]);
        piVar8[-2] = iVar1;
        piVar7 = piVar8 + -1;
        piVar8[3] = 0;
        if (piVar8[-1] == 0) {
          if (*piVar8 != 0) {
            uVar5 = 0;
            iVar1 = param_4;
            if (0 < param_6) {
              do {
                if (*piVar8 == iVar1) {
                  lVar6 = (uVar5 + (uVar5 & 0x3fffffff) * 4 & 0x3fffffff) * 4 + param_5;
                  *piVar8 = (int)lVar6;
                  iVar1 = fn_82CE5410();
                  fn_82CEA160(param_7,*(unsigned int *)(iVar1 + 0x10),lVar6,0);
                  break;
                }
                uVar5 = uVar5 + 1;
                iVar1 = iVar1 + 0x14;
              } while ((int)uVar5 < param_6);
            }
            iVar1 = fn_82CEA220(param_7,*piVar8);
            if (*(int *)(param_7 + 8) < iVar1) {
              uVar5 = 0;
              iVar1 = fn_82CEA220(&uStack_78,*piVar8);
              if (iStack_70 < iVar1) {
                uVar5 = fn_82E1A8D0(param_1,*piVar8,1);
                iVar1 = fn_82CE5410();
                fn_82CEA160(param_7,*(unsigned int *)(iVar1 + 0x10),uVar5,1);
                iVar1 = *piVar8;
                iVar4 = fn_82CE5410();
                fn_82CEA160(&uStack_78,*(unsigned int *)(iVar4 + 0x10),iVar1,uVar5);
              }
              else {
                iVar1 = fn_82CEA2F0(&uStack_78,*piVar8,auStack_80);
                if (iVar1 == 0) {
                  uVar5 = (unsigned __int64)auStack_80[0];
                }
              }
              *piVar8 = (int)uVar5;
            }
          }
        }
        else {
          puVar3 = (unsigned int *)fn_82CEB3C8();
          if ((*puVar3 & 1) == 0) {
            fn_82E1B0A8(param_8,*piVar7,piVar7);
          }
          else {
            *piVar7 = 0;
          }
        }
        param_3 = param_3 - 1;
        piVar8 = piVar8 + 6;
      } while (param_3 != 0);
    }
    iVar1 = fn_82CE5410();
    fn_82CEA4B8(&uStack_78,*(unsigned int *)(iVar1 + 0x10));
    fn_82BA02A8(&uStack_78);
  }
  return iVar2;
}

