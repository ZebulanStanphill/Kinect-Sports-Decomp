extern int fn_82AC5088();
extern int fn_82AC5200();


unsigned __int64
fn_82AC5320(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5
             )

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  __int64 lVar8;
  
  if ((param_1 & 0xffffffff) == 0) {
LAB_82ac541c:
    uVar2 = 0;
  }
  else {
    if ((unsigned __int64)*(unsigned int *)(param_2 + 0x44) <= (param_1 & 0xffffffff)) {
      uVar4 = (unsigned __int64)*(unsigned int *)(param_2 + 0x48) + (unsigned __int64)*(unsigned int *)(param_2 + 0x44);
      if ((param_1 & 0xffffffff) + 4 <= uVar4) {
        puVar3 = (unsigned int *)param_1;
        uVar6 = (unsigned __int64)*puVar3;
        if ((uVar6 + (param_1 & 0xffffffff) + 4 <= uVar4) && (0x1b < uVar6)) {
          uVar4 = (unsigned __int64)puVar3[5];
          lVar8 = param_1 + 4;
          uVar1 = puVar3[4];
          if ((uVar4 <= uVar6) && ((unsigned __int64)uVar1 * 0x14 + (unsigned __int64)puVar3[5] <= uVar6)) {
            uVar2 = fn_82AC5088(lVar8,puVar3[2],uVar6,0xf0,param_5,uVar4,uVar6);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            uVar2 = fn_82AC5088(lVar8,puVar3[7]);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            lVar7 = uVar4 + lVar8;
            uVar5 = 0;
            if (uVar1 != 0) {
              do {
                uVar2 = fn_82AC5200(lVar7,lVar8,uVar6);
                if ((int)uVar2 < 0) {
                  return uVar2;
                }
                uVar5 = uVar5 + 1;
                lVar7 = lVar7 + 0x14;
              } while (uVar5 < uVar1);
            }
            goto LAB_82ac541c;
          }
        }
      }
    }
    uVar2 = 0xffffffff80004005;
  }
  return uVar2;
}

