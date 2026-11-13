extern unsigned int *auStack_90;
extern int fn_8226D318();
extern int fn_82522DF8();
extern int fn_82522ED8();
extern int fn_82544718();
extern int fn_8262F8D8();
extern int fn_8262FEC8();
extern int fn_82630040();
extern int fn_8263C910();
extern int fn_82F68CC0();
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


unsigned __int64 fn_825FA440(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar6;
  int iVar7;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned char auStack_90 [144];
  
  if ((param_2 & 0xffffffff) != 0) {
    iVar6 = fn_82522DF8(0x98);
    if (iVar6 != 0) {
      *(unsigned int *)(iVar6 + 4) = 1;
      iVar7 = fn_82522DF8(param_2 * 0x50);
      *(int *)(iVar6 + 0x90) = iVar7;
      if (iVar7 != 0) {
        iVar7 = fn_82522DF8(param_2);
        *(int *)(iVar6 + 0x94) = iVar7;
        uVar3 = lbl_8326B434;
        uVar2 = lbl_8326B430;
        if (iVar7 != 0) {
          uStack_a0 = fn_8226D318(lbl_8326B430,lbl_8326B434,0x1a220197,0);
          uStack_9c = 0;
          uStack_98 = 0;
          uStack_94 = 0;
          lVar4 = fn_8263C910(uVar2,uVar3,0x1a2201bf,0,&uStack_a0);
          *(int *)(iVar6 + 0x38) = (int)lVar4;
          if (-1 < (__int64)-(unsigned __int64)(lVar4 == 0)) {
            uVar5 = fn_82544718(auStack_90,uVar2,uVar3,0x1a22ab60,0,0);
            fn_82F68CC0(iVar6 + 0x3c,uVar5,0x34);
            if ((param_2 & 0xffffffff) < 0x186a1) {
              *(int *)(iVar6 + 8) = (int)param_2;
            }
            else {
              *(unsigned int *)(iVar6 + 8) = 100000;
            }
            lVar4 = fn_82630040((unsigned __int64)*(unsigned int *)(iVar6 + 8) * 0x70,0,0);
            *(int *)(iVar6 + 0x88) = (int)lVar4;
            if (-1 < (__int64)-(unsigned __int64)(lVar4 == 0)) {
              iVar6 = *(int *)(iVar6 + 0x88);
              uVar1 = *(unsigned int *)(iVar6 + 0x18) & 0xfffffffc;
                    /* WARNING: Subroutine does not return */
              fn_8262F8D8(iVar6,10,0,uVar1,0,uVar1,*(unsigned int *)(iVar6 + 0x1c) & 0x3fffffc,0);
            }
            fn_8262FEC8(*(unsigned int *)(iVar6 + 0x38));
          }
        }
        fn_82522ED8(*(unsigned int *)(iVar6 + 0x90));
      }
      fn_82522ED8(iVar6);
    }
  }
  return 0;
}

