extern unsigned int *auStack_70;
extern int fn_82A9FCE8();
extern int fn_82F68CC0();
extern unsigned int iStack_44;
extern unsigned int iStack_68;
extern unsigned int iStack_6c;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int *uStack_64;


void fn_82A9FD38(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  unsigned __int64 uVar1;
  unsigned short *puVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int *piVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned char auStack_70 [4];
  int iStack_6c;
  int iStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  int iStack_44;
  
  fn_82F68CC0(auStack_70,param_2,0x30);
  uVar3 = (unsigned __int64)uStack_50;
  if (uVar3 == 1) {
    uVar3 = (unsigned __int64)uStack_4c;
    if (uVar3 == 0) {
      fn_82A9FCE8(param_1,auStack_70);
      uVar3 = (unsigned __int64)uStack_50;
      if (uVar3 != 1) goto LAB_82a9fd90;
      uVar3 = (unsigned __int64)uStack_4c;
      if (uVar3 == 0) {
        return;
      }
    }
    if (uVar3 != 0) {
      piVar6 = (int *)(*(int *)(param_5 + 0xc) + param_3 + 4);
      uVar8 = uStack_64;
      do {
        puVar2 = (unsigned short *)(*piVar6 + param_3);
        uVar4 = (__int64)(int)(unsigned int)puVar2[3] * (__int64)(int)(unsigned int)puVar2[2];
        iVar5 = (int)uVar4;
        if (((iStack_6c == 2) || (iStack_6c == 1)) && (iVar5 = (int)(uVar4 >> 2), (uVar4 & 3) != 0))
        {
          iVar5 = iVar5 + 1;
        }
        uStack_64 = (unsigned int)puVar2[4] * iVar5;
        if (uVar8 < (unsigned int)puVar2[4] * iVar5) {
          uStack_64 = uVar8;
        }
        uVar8 = uVar8 - uStack_64;
        uStack_54 = (unsigned int)puVar2[3];
        uStack_58 = (unsigned int)puVar2[2];
        uStack_60 = (unsigned int)*puVar2;
        uStack_5c = (unsigned int)puVar2[1];
        uStack_50 = (unsigned int)puVar2[4];
        uStack_4c = (unsigned int)puVar2[5];
        ((int (*)())fn_82A9FD38)(param_1,auStack_70,param_3,param_4);
        iStack_68 = iStack_68 + uStack_64;
        if (iStack_44 != 0) {
          iStack_44 = ((-(unsigned int)(iStack_6c != 0) & 3) + 1) * uStack_64 * 4 + iStack_44;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar3 != 0);
    }
  }
  else {
LAB_82a9fd90:
    uVar7 = (unsigned __int64)uStack_64;
    uVar4 = (__int64)(int)(unsigned int)*(unsigned short *)(param_5 + 6) *
            (__int64)(int)(unsigned int)*(unsigned short *)(param_5 + 4);
    if (((iStack_6c == 2) || (iStack_6c == 1)) &&
       (uVar1 = uVar4 & 3, uVar4 = uVar4 >> 2, uVar1 != 0)) {
      uVar4 = uVar4 + 1;
    }
    uStack_64 = (unsigned int)uVar4;
    uStack_50 = 1;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      if ((uVar7 & 0xffffffff) < uVar4) {
        uStack_64 = (unsigned int)uVar7;
        uVar4 = uVar7;
      }
      uVar7 = uVar7 - uVar4;
      fn_82A9FD38(param_1,auStack_70,param_3,param_4,param_5);
      uVar4 = (unsigned __int64)uStack_64;
      iStack_68 = iStack_68 + uStack_64;
      if (iStack_44 != 0) {
        iStack_44 = ((-(unsigned int)(iStack_6c != 0) & 3) + 1) * uStack_64 * 4 + iStack_44;
      }
    }
  }
  return;
}

