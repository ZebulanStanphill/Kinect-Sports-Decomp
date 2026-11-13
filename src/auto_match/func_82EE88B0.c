typedef unsigned char bool;
extern int fn_82A1E650();
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E665B0();
extern int fn_82EE8160();
extern int fn_82EE8230();
extern int fn_82EE82A0();
extern int fn_82EE8420();
extern unsigned __int64 storeWordConditionalIndexed();


__int64 fn_82EE88B0(__int64 param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned int *puVar7;
  __int64 lVar8;
  char in_RESERVE;
  unsigned char bVar9;
  
  fn_82E50CB8(param_1 + 0x5c);
  uVar4 = fn_82E50BE8(0x6c,0,0,0,0);
  if ((uVar4 & 0xffffffff) == 0) {
    lVar8 = -0x7ff8fff2;
  }
  else {
    puVar5 = (unsigned int *)fn_82EE8160(uVar4,param_1);
    iVar3 = (int)param_1;
    lVar8 = fn_82EE8230(puVar5,*(unsigned int *)(iVar3 + 0xa0));
    if (lVar8 < 0) {
      (**(int (***)())*puVar5)(puVar5,0);
      fn_82E4FE40(puVar5);
    }
    else {
      if (*(int *)(iVar3 + 0xac) != 0) {
        lVar8 = fn_82E665B0(puVar5[4]);
        if (lVar8 < 0) goto LAB_82ee89f8;
      }
      bVar9 = (lVar8 == 0) << 1;
      if (*(int *)(iVar3 + 0xa4) != 0) {
        fn_82EE82A0(puVar5);
      }
      puVar1 = *(unsigned int **)(iVar3 + 0x58);
      puVar5[1] = iVar3 + 0x54;
      puVar5[2] = puVar1;
      *puVar1 = puVar5 + 1;
      *(unsigned int **)(iVar3 + 0x58) = puVar5 + 1;
      *(int *)(iVar3 + 0x50) = *(int *)(iVar3 + 0x50) + 1;
      do {
        puVar7 = (unsigned int *)(param_1 + 0x98);
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar7 + 1,0,param_1 + 0x98);
          *puVar7 = uVar2;
          bVar9 = 2;
        }
      } while (!(bool)(bVar9 >> 1 & 1));
      iVar6 = fn_82A1E650(*(unsigned int *)(*(int *)(iVar3 + 0xa0) + 0x44),0xffffffffffffffff);
      if (iVar6 == 0) {
        if (*(int *)(iVar3 + 0xb0) == 1) {
          lVar8 = fn_82EE8420(puVar5,1,0);
        }
      }
      else {
        lVar8 = -0x7fffbffb;
      }
    }
  }
LAB_82ee89f8:
  fn_82E50F10(param_1 + 0x5c);
  return lVar8;
}

