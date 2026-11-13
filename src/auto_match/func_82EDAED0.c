extern int fn_82ED5948();
extern int fn_82ED5AA0();
extern int fn_82ED5C68();
extern int fn_82F00638();
extern unsigned int iStack_7c;
extern unsigned int iStack_88;
extern unsigned int iStack_8c;
extern unsigned int uStack_80;
extern unsigned int uStack_82;
extern unsigned int uStack_84;
extern unsigned int uStack_90;


void fn_82EDAED0(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned int uStack_90;
  int iStack_8c;
  int iStack_88;
  unsigned short uStack_84;
  unsigned short uStack_82;
  unsigned int uStack_80;
  int iStack_7c;
  
  iVar1 = *(int *)(param_1 + 0x55c);
  iVar2 = *(int *)(param_1 + 0x554);
  uVar3 = *(unsigned int *)(param_1 + 0x550);
  uVar4 = *(unsigned int *)(param_1 + 0x548);
  if ((((*(int *)(param_1 + 0x7820) != 0) || (*(int *)(param_1 + 0x7824) != 0)) ||
      (((*(int *)(param_1 + 0x77a0) != 0 || (*(int *)(param_1 + 0x77a4) != 0)) &&
       ((*(int *)(param_1 + 0x4ab0) != *(int *)(*(int *)(param_1 + 0x4aa8) + 4) ||
        (*(int *)(param_1 + 0x4ab4) != *(int *)(*(int *)(param_1 + 0x4aa8) + 8))))))) ||
     (*(int *)(param_1 + 0x4b0c) != 0)) {
    if ((*(int *)(param_1 + 0x84c) == 0) || (*(__int64 *)(param_1 + 0x2e0) == 1)) {
      uVar8 = *(unsigned int *)(param_1 + 0x310);
      uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c) + (unsigned __int64)*(unsigned int *)(param_1 + 0x578);
      uVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18) + (unsigned __int64)*(unsigned int *)(param_1 + 0x578);
      fn_82ED5AA0(param_1,uVar8,uVar9,uVar6,*(unsigned int *)(param_1 + 0x4a94),
                        *(unsigned int *)(param_1 + 0x4a98),*(unsigned int *)(param_1 + 0x4a9c));
    }
    else if ((*(int *)(param_1 + 0xaf0) == 2) || (*(int *)(param_1 + 0xaf0) == 4)) {
      uVar8 = *(unsigned int *)(param_1 + 0x4a94);
      uVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4a98);
      uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4a9c);
      fn_82ED5AA0(param_1,uVar8,uVar9,uVar6);
    }
    else {
      uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x578);
      uVar9 = *(unsigned int *)(param_1 + 0x1e80) + uVar7;
      uVar6 = *(unsigned int *)(param_1 + 0x1e84) + uVar7;
      uVar8 = *(unsigned int *)(param_1 + 0x1e88);
      fn_82ED5AA0(param_1,uVar8,uVar9,uVar6,*(unsigned int *)(param_1 + 0x310),
                        *(unsigned int *)(param_1 + 0x18) + uVar7,*(unsigned int *)(param_1 + 0x1c) + uVar7);
    }
    if ((*(int *)(param_1 + 0x7820) != 0) || (*(int *)(param_1 + 0x7824) != 0)) {
      fn_82F00638(param_1,uVar8,uVar9,uVar6,(__int64)(int)uVar4 * (__int64)(int)uVar3,
                      (__int64)iVar2 * (__int64)iVar1);
    }
    if (((*(int *)(param_1 + 0x77a0) == 0) && (*(int *)(param_1 + 0x77a4) == 0)) ||
       ((*(int *)(param_1 + 0x4ab0) == *(int *)(*(int *)(param_1 + 0x4aa8) + 4) &&
        (*(int *)(param_1 + 0x4ab4) == *(int *)(*(int *)(param_1 + 0x4aa8) + 8))))) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x4aa8) + 0x10);
      if (((iVar1 == 0x56555949) || (iVar1 == 0x30323449)) || (iVar1 == 0x31313450)) {
        fn_82ED5948(param_1,*(int *)(param_1 + 0x4aa8),*(unsigned int *)(param_1 + 0x4afc),0,0,
                          *(unsigned int *)(param_1 + 0x548),*(unsigned int *)(param_1 + 0x550),uVar8);
      }
      else {
        fn_82ED5948(param_1,param_1 + 0x1fc4,*(unsigned int *)(param_1 + 0x4afc),0,0,
                          *(unsigned int *)(param_1 + 0x548),*(unsigned int *)(param_1 + 0x550),uVar8);
      }
    }
    else {
      fn_82ED5C68(param_1,uVar8,uVar9,uVar6,*(unsigned int *)(param_1 + 0x4b04));
      iVar1 = *(int *)(param_1 + 0x4afc);
      fn_82ED5948(param_1,param_1 + 0x4ad4,iVar1,0,0,*(unsigned int *)(iVar1 + 4),
                        *(unsigned int *)(iVar1 + 8),*(unsigned int *)(param_1 + 0x4b04));
    }
    return;
  }
  iStack_88 = *(int *)(param_1 + 0x56c);
  iStack_8c = *(int *)(param_1 + 0x564);
  uStack_84 = 1;
  iVar1 = *(int *)(param_1 + 0x4afc);
  uStack_90 = 0x28;
  uVar5 = iStack_8c * iStack_88 * 3;
  uStack_80 = 0x56555949;
  uStack_82 = 0xc;
  iStack_7c = ((int)uVar5 >> 1) + (unsigned int)((int)uVar5 < 0 && (uVar5 & 1) != 0);
  uVar6 = (unsigned __int64)((int)*(unsigned int *)(iVar1 + 4) >> 0x1f);
  uVar6 = (*(unsigned int *)(iVar1 + 4) ^ uVar6) - uVar6;
  uVar9 = (unsigned __int64)uVar4;
  if ((int)uVar6 <= (int)uVar4) {
    uVar9 = uVar6;
  }
  uVar7 = (unsigned __int64)((int)*(unsigned int *)(iVar1 + 8) >> 0x1f);
  uVar7 = (*(unsigned int *)(iVar1 + 8) ^ uVar7) - uVar7;
  uVar6 = (unsigned __int64)uVar3;
  if ((int)uVar7 <= (int)uVar3) {
    uVar6 = uVar7;
  }
  if ((((*(int *)(param_1 + 0x84c) != 0) && (*(__int64 *)(param_1 + 0x2e0) != 1)) &&
      (*(int *)(param_1 + 0xaf0) != 2)) && (*(int *)(param_1 + 0xaf0) != 4)) {
    fn_82ED5948(param_1,&uStack_90,iVar1,0x20,0x20,uVar9,uVar6,*(unsigned int *)(param_1 + 0x14)
                     );
    return;
  }
  fn_82ED5948(param_1,&uStack_90,iVar1,0x20,0x20,uVar9,uVar6,
                    (unsigned __int64)*(unsigned int *)(param_1 + 0x4a94) - (unsigned __int64)*(unsigned int *)(param_1 + 0x574));
  return;
}

