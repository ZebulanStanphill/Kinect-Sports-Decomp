extern int fn_825B0D78();
extern int fn_8260B278();
extern int fn_8265C9E0();
extern int fn_827EF640();
extern int fn_827EF998();
extern int fn_827F0298();
extern int fn_827F2D60();
extern int fn_827F3770();
extern int fn_827F4248();
extern int fn_827FA3F0();
extern int fn_827FA400();
extern int fn_82817B50();
extern int fn_82817BC8();
extern int fn_82837AA8();
extern int fn_82850780();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CAA48;


unsigned __int64 fn_825B0800(int *param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  int iVar8;
  unsigned __int64 uVar7;
  unsigned int *puVar9;
  int iStack_50;
  int iStack_4c;
  int aiStack_48;
  
  uVar4 = fn_827EF640(0x130);
  if ((uVar4 & 0xffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_827F0298(uVar4,*(unsigned int *)(*param_1 + 0x138),0,0);
  }
  if (param_1[3] != 0) {
    fn_825B0D78(*param_1,uVar5,param_1[3],0);
  }
  iVar1 = *param_1;
  iVar2 = param_1[1];
  lVar6 = fn_82837AA8(iVar1);
  if (lVar6 != 0) {
    iStack_50 = 0;
    fn_827FA400(lVar6,1,&iStack_50);
    if (iStack_50 != 0) {
      uVar4 = 0;
      iVar8 = fn_827FA3F0(lVar6);
      if (0 < iVar8) {
        do {
          aiStack_48 = 0;
          fn_82817B50(iStack_50,uVar4,&aiStack_48);
          if (aiStack_48 != 0) {
            iStack_4c = 0;
            fn_82817BC8(aiStack_48,&iStack_4c);
            if (iStack_4c != 0) {
              uVar7 = fn_827EF998(uVar5,uVar4 & 0xffff);
              fn_82850780(iVar1,iVar2,iStack_4c,uVar7);
            }
          }
          uVar4 = uVar4 + 1;
          iVar8 = fn_827FA3F0(lVar6);
        } while ((int)uVar4 < iVar8);
      }
    }
  }
  puVar9 = (unsigned int *)fn_8265C9E0(0xc0);
  if (puVar9 == (unsigned int *)0x0) {
    puVar9 = (unsigned int *)0x0;
  }
  else {
    iVar1 = *param_1;
    iVar2 = param_1[3];
    uVar3 = *(unsigned int *)(iVar1 + 0x138);
    fn_827F4248(puVar9,puVar9 + 8,0,0,0);
    *puVar9 = &lbl_821CAA48;
    fn_827F3770(puVar9 + 8,uVar3);
    puVar9[0x2d] = iVar1;
    puVar9[0x2e] = iVar2;
    fn_8260B278(puVar9);
  }
  fn_827F2D60((double)lbl_8218E8E8,uVar5,puVar9);
  return uVar5;
}

