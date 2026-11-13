extern unsigned int *auStack_4b0;
extern unsigned int *auStack_4c0;
extern int fn_82631400();
extern int fn_82636E10();
extern int fn_82ABC838();
extern int fn_82ABC940();
extern int fn_82ABD6A8();
extern int fn_82ABD710();
extern unsigned int uStack_4b8;


unsigned __int64 fn_82ABD8D8(unsigned int *param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  unsigned char auStack_4c0 [8];
  unsigned int uStack_4b8;
  unsigned char auStack_4b0 [1200];
  
  fn_82631400(param_1,auStack_4c0);
  uVar1 = *param_1 & 1;
  iVar3 = 0;
  if ((*param_1 & 1) == 0) {
    iVar3 = param_1[(param_2 + 3) * 2] + (int)param_1;
  }
  puVar8 = (unsigned int *)(param_1[(param_2 + 3) * 2] + (int)param_1);
  uVar5 = puVar8[2];
  if (uVar1 == 0) {
    uVar6 = uVar5 >> 0x14 & 0xf;
    puVar4 = (unsigned int *)(iVar3 + 0x20);
    uVar2 = puVar8[5] >> 5 & 0x1f;
    uVar7 = 0;
    if (uVar2 != 0) {
      do {
        uVar9 = *puVar4 >> 8 & 0xf;
        if (uVar6 <= uVar9) {
          uVar6 = uVar9;
        }
        uVar7 = uVar7 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar7 < uVar2);
    }
    uVar5 = uVar6 << 0x14 | uVar5 & 0xff0fffff;
  }
  fn_82ABC838(auStack_4b0,uVar1,uVar5,puVar8[3],(unsigned __int64)*puVar8 + (unsigned __int64)uStack_4b8,
                puVar8[1],0,0);
  fn_82636E10(param_1,auStack_4b0,0xffffffff82abcec8);
  fn_82ABD710(param_1,auStack_4b0,0x11,0xffffffff82abcf88);
  fn_82ABD6A8(auStack_4b0);
  fn_82ABC940(auStack_4b0,param_3);
  return 0;
}

