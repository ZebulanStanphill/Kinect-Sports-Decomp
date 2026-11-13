typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_130;
extern unsigned int *auStack_230;
extern unsigned int *auStack_240;
extern int fn_8294B260();
extern int fn_82964BB0();
extern int fn_82975B00();


unsigned __int64 fn_8294B308(int *param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  bool bVar4;
  int iVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  unsigned int auStack_240 [4];
  unsigned char auStack_230 [256];
  unsigned char auStack_130 [304];
  
  bVar4 = false;
  auStack_240[0] = 0;
  uVar8 = 0;
  if (param_1[2] != 0) {
    do {
      uVar10 = auStack_240[0];
      iVar5 = *(int *)(auStack_240[0] * 4 + param_1[5]);
      uVar1 = *(unsigned int *)(*(int *)(*(int *)(iVar5 + 4) * 4 + param_1[4]) + 4);
      if (((((uVar1 & 0x10) != 0) && ((uVar1 & 0x200) == 0)) || ((uVar1 & 0x20) != 0)) &&
         (iVar5 = (**(int (***)())(*param_1 + 4))(param_1,iVar5,0), iVar5 < 0)) {
        fn_8294B260(param_1,auStack_240);
        bVar4 = true;
        uVar10 = auStack_240[0];
      }
      uVar8 = (unsigned __int64)(unsigned int)param_1[2];
      auStack_240[0] = uVar10 + 1;
    } while (auStack_240[0] < uVar8);
  }
  if (bVar4) {
    uVar8 = 0xffffffff80004005;
  }
  else {
    uVar6 = 0;
    auStack_240[0] = 0;
    if (uVar8 != 0) {
      do {
        puVar2 = *(unsigned int **)((int)((uVar6 & 0xffffffff) << 2) + param_1[5]);
        uVar1 = *(unsigned int *)(*(int *)(puVar2[1] * 4 + param_1[4]) + 4);
        if (((((uVar1 & 0x10) != 0) && ((uVar1 & 0x200) == 0)) || ((uVar1 & 0x20) != 0)) &&
           (uVar9 = uVar6 + 1, (uVar9 & 0xffffffff) < uVar8)) {
          lVar7 = (uVar9 & 0x3fffffff) << 2;
          do {
            puVar3 = *(unsigned int **)((int)lVar7 + param_1[5]);
            if (((puVar3[1] == puVar2[1]) && (puVar3[0x1c] == puVar2[0x1c])) &&
               ((puVar3[0x1b] == puVar2[0x1b] && (((*puVar2 ^ *puVar3) & 0x1000000) != 0)))) {
              fn_82964BB0(param_1,puVar2,auStack_130,0x100);
              fn_82964BB0(param_1,puVar3,auStack_230,0x100);
              fn_82975B00(param_1,puVar2[0x1a],0x1195,0xffffffff8203777c,auStack_130,
                                auStack_230);
              fn_8294B260(param_1,auStack_240);
              uVar6 = (unsigned __int64)auStack_240[0];
              bVar4 = true;
              break;
            }
            uVar9 = uVar9 + 1;
            lVar7 = lVar7 + 4;
          } while ((uVar9 & 0xffffffff) < uVar8);
        }
        uVar8 = (unsigned __int64)(unsigned int)param_1[2];
        uVar6 = uVar6 + 1;
        auStack_240[0] = (unsigned int)uVar6;
      } while ((uVar6 & 0xffffffff) < uVar8);
    }
    uVar8 = -(unsigned __int64)bVar4 & 0xffffffff80004005;
  }
  return uVar8;
}

