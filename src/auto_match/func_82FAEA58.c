extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FAE840();
extern int fn_82FAFE40();
extern unsigned int lbl_82160788;
extern unsigned int lbl_831BC768;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


unsigned __int64 fn_82FAEA58(int param_1,double *param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 *puVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned __int64 *puVar7;
  double *pdStack0000001c;
  unsigned int uStack00000024;
  
  pdStack0000001c = param_2;
  uStack00000024 = param_3;
  uVar2 = fn_82FAFE40(param_1,&stack0x0000001c,&stack0x00000024,0);
  if ((int)uVar2 == 1) {
    *(int *)(param_1 + 0xac) = (int)(*pdStack0000001c * lbl_82160788);
    uVar1 = *(unsigned int *)(pdStack0000001c + 1);
    pdStack0000001c = (double *)((int)pdStack0000001c + 0xc);
    if (uVar1 != 0) {
      iVar3 = fn_82FA5060(lbl_831BC768,uVar1 << 4);
      if (iVar3 == 0) {
        uVar2 = 2;
      }
      else {
        uVar5 = 0;
        if (3 < (int)uVar1) {
          puVar7 = (unsigned __int64 *)(iVar3 + -8);
          do {
            uVar5 = uVar5 + 4;
            *(unsigned int *)(puVar7 + 1) = *(unsigned int *)pdStack0000001c;
            puVar7[2] = *(unsigned __int64 *)((int)pdStack0000001c + 4);
            *(unsigned int *)(puVar7 + 3) = *(unsigned int *)((int)pdStack0000001c + 0xc);
            puVar7[4] = *(unsigned __int64 *)((int)pdStack0000001c + 0x10);
            *(unsigned int *)(puVar7 + 5) = *(unsigned int *)((int)pdStack0000001c + 0x18);
            puVar7[6] = *(unsigned __int64 *)((int)pdStack0000001c + 0x1c);
            puVar4 = (unsigned __int64 *)((int)pdStack0000001c + 0x28);
            *(unsigned int *)(puVar7 + 7) = *(unsigned int *)((int)pdStack0000001c + 0x24);
            pdStack0000001c = (double *)((int)pdStack0000001c + 0x30);
            puVar7 = puVar7 + 8;
            *puVar7 = *puVar4;
          } while (uVar5 < uVar1 - 3);
        }
        if (uVar5 < uVar1) {
          iVar6 = uVar1 - uVar5;
          puVar7 = (unsigned __int64 *)(uVar5 * 0x10 + iVar3 + -8);
          do {
            puVar4 = (unsigned __int64 *)((int)pdStack0000001c + 4);
            *(unsigned int *)(puVar7 + 1) = *(unsigned int *)pdStack0000001c;
            pdStack0000001c = (double *)((int)pdStack0000001c + 0xc);
            puVar7 = puVar7 + 2;
            *puVar7 = *puVar4;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        uVar2 = fn_82FAE840(param_1,iVar3,uVar1);
        fn_82FA5190(lbl_831BC768,iVar3);
      }
    }
  }
  return uVar2;
}

