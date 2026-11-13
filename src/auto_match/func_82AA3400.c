extern int fn_82AA1C90();
extern int fn_82AA2720();
extern int fn_82AA31E8();
extern unsigned int lbl_8315FC18;


__int64 fn_82AA3400(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  unsigned int *apuStack_a0 [40];
  
  lVar3 = fn_82AA31E8(param_5,1,0x20,param_1,param_2,param_3,param_4,apuStack_a0);
  if ((-1 < lVar3) && ((param_5 & 0x100) != 0)) {
    fn_82AA2720(param_2,0xffffffff821ce7a4);
    fn_82AA1C90(param_2,0xffffffff821cc86c);
    fn_82AA2720(param_2,0xffffffff821ce838);
    fn_82AA1C90(param_2,0xffffffff820d32c8,*(unsigned short *)(param_1 + 0x1a),
                  *(unsigned short *)(param_1 + 0x18));
    fn_82AA2720(param_2,0xffffffff821ce7a4);
    fn_82AA1C90(param_2,0xffffffff821cc86c);
    uVar1 = *(unsigned int *)(param_1 + 0x1c);
    fn_82AA1C90(param_2,0xffffffff820d3294,uVar1 & 0xf,uVar1 >> 4 & 1,uVar1 >> 5 & 1);
    fn_82AA2720(param_2,0xffffffff821ce7a4);
    fn_82AA1C90(param_2,0xffffffff821cc86c);
    uVar1 = *(unsigned int *)(param_1 + 0x14) >> 5;
    if ((uVar1 & 0x1f) != 0) {
      fn_82AA1C90(param_2,0xffffffff820d3278);
      fn_82AA2720(param_2,0xffffffff821ce7a4);
      fn_82AA1C90(param_2,0xffffffff821cc86c);
      uVar6 = 0;
      uVar8 = 0;
      if ((uVar1 & 0x1f) != 0) {
        puVar7 = apuStack_a0[0];
        do {
          uVar2 = *puVar7;
          uVar5 = 0xffffffff821ce35c;
          if ((uVar2 >> 0xc & 2) == 0) {
            uVar5 = 0xffffffff82196582;
          }
          uVar4 = 0xffffffff821ce358;
          if ((uVar2 >> 0xc & 1) == 0) {
            uVar4 = 0xffffffff82196582;
          }
          fn_82AA1C90(param_2,0xffffffff820d3228,uVar8,
                        (&lbl_8315FC18)[uVar2 >> 4 & 0xf],uVar2 & 0xf,uVar2 >> 8 & 0xf,
                        uVar4,uVar5);
          fn_82AA2720(param_2,0xffffffff821ce7a4);
          fn_82AA1C90(param_2,0xffffffff821cc86c);
          if (((uVar8 & 0xffffffff) != 0) && ((uVar2 & 0xff) <= uVar6)) {
            fn_82AA1C90(param_2,0xffffffff820d3244);
            fn_82AA2720(param_2,0xffffffff821ce7a4);
            fn_82AA1C90(param_2,0xffffffff821cc86c);
          }
          uVar8 = uVar8 + 1;
          uVar6 = uVar2 & 0xff;
          puVar7 = puVar7 + 1;
        } while ((uVar8 & 0xffffffff) < ((unsigned __int64)uVar1 & 0x1f));
      }
      fn_82AA2720(param_2,0xffffffff821ce7a4);
      fn_82AA1C90(param_2,0xffffffff821cc86c);
    }
    fn_82AA2720(param_2,0xffffffff821ce828);
  }
  return lVar3;
}

