typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_60;
extern int fn_82F68CC0();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_825519F8(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  bool bVar8;
  unsigned char auStack_60 [16];
  unsigned int uStack_50;
  unsigned int uStack_4c;
  
  puVar4 = param_1;
  if (param_1 != param_2) {
    while (puVar5 = puVar4 + 6, puVar5 != param_2) {
      fn_82F68CC0(auStack_60,puVar5,0x18);
      uVar3 = uStack_4c;
      uVar2 = uStack_50;
      uVar1 = param_1[4];
      if (uStack_50 == uVar1) {
        bVar8 = param_1[5] <= uStack_4c;
        uVar1 = param_1[5] ^ uStack_4c;
      }
      else {
        bVar8 = uVar1 <= uStack_50;
        uVar1 = uVar1 ^ uStack_50;
      }
      puVar7 = puVar5;
      if ((((~(unsigned __int64)uVar1 & 0xffffffff) >> 0x1f) + (unsigned __int64)bVar8 & 1) == 0) {
        puVar7 = puVar4 + 10;
        puVar4 = puVar5;
        while( true ) {
          uVar1 = puVar7[-6];
          if (uVar2 == uVar1) {
            bVar8 = puVar7[-5] <= uVar3;
            uVar1 = puVar7[-5] ^ uVar3;
          }
          else {
            bVar8 = uVar1 <= uVar2;
            uVar1 = uVar1 ^ uVar2;
          }
          if ((((~(unsigned __int64)uVar1 & 0xffffffff) >> 0x1f) + (unsigned __int64)bVar8 & 1) == 0) break;
          puVar6 = puVar7 + -10;
          fn_82F68CC0(puVar4,puVar6,0x18);
          puVar7 = puVar7 + -6;
          puVar4 = puVar6;
        }
      }
      else {
        while (puVar4 = param_1, param_1 != puVar7) {
          fn_82F68CC0(puVar7,puVar7 + -6,0x18);
          puVar7 = puVar7 + -6;
        }
      }
      fn_82F68CC0(puVar4,auStack_60,0x18);
      puVar4 = puVar5;
    }
  }
  return;
}

