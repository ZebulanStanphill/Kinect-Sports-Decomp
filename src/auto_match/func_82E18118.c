extern int fn_82CEAE80();
extern int fn_82CEAEA8();
extern int fn_82CEB2D8();
extern int fn_82CFD5B0();
extern int fn_82E17EE8();


unsigned __int64 fn_82E18118(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  int iVar6;
  unsigned __int64 uVar4;
  __int64 lVar5;
  __int64 lVar7;
  
  uVar1 = fn_82CEB2D8(param_1,param_3,param_4);
  if (((*(char *)(param_2 + 0xc) == '\x19') &&
      (uVar2 = fn_82CFD5B0(param_2), (uVar2 & 0xffffffff) != 0)) &&
     (lVar3 = fn_82E17EE8(param_2), 0 < (int)lVar3)) {
    do {
      lVar7 = 0;
      iVar6 = fn_82CEAE80(uVar2);
      if (0 < iVar6) {
        do {
          uVar4 = fn_82CEAEA8(uVar2,lVar7);
          lVar5 = fn_82E18118(uVar2,uVar4,lVar7,param_4);
          lVar7 = lVar7 + 1;
          uVar1 = -(unsigned __int64)(lVar5 != 0) & uVar1;
          iVar6 = fn_82CEAE80(uVar2);
        } while ((int)lVar7 < iVar6);
      }
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return uVar1;
}

