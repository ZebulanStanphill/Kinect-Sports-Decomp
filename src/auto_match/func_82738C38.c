extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82696BC8();
extern int fn_82697700();
extern int fn_826A2AB8();
extern int fn_82738188();
extern int fn_82757688();
extern unsigned int lbl_8200C4D4;
extern unsigned int lbl_82011A08;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


void fn_82738C38(int param_1)

{
  unsigned int uVar1;
  char cVar5;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar6;
  unsigned char **appuStack_90 [17];
  unsigned int uStack_4c;
  unsigned int uStack_48;
  
  cVar5 = fn_82695468(param_1,0x29);
  if (cVar5 == '\0') {
    fn_826954C0(param_1,0xffffffff8200edd0,0,0);
  }
  else {
    uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
      uVar6 = 0;
    }
    if (((uVar6 & 0xffffffff) != 0) && (1 < *(int *)(param_1 + 0x1c))) {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,0);
      uVar2 = fn_82697700(uVar2,uVar1);
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,1);
      uVar3 = fn_82697700(uVar3,uVar1);
      uVar4 = fn_8267B890(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),
                                0x48,0);
      if ((uVar4 & 0xffffffff) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = fn_826A2AB8(uVar4,*(unsigned int *)(param_1 + 0x18));
      }
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      fn_82738188(appuStack_90);
      uStack_48 = (unsigned int)uVar4;
      appuStack_90[0] = (unsigned char **)&lbl_82011A08;
      uStack_4c = uVar1;
      fn_82757688(uVar6 + 0x30,appuStack_90,uVar2,uVar3);
      fn_82696BC8(*(unsigned int *)(param_1 + 4),uVar4);
      appuStack_90[0] = &lbl_8200C4D4;
      if ((uVar4 & 0xffffffff) != 0) {
        fn_826824B0(uVar4);
      }
    }
  }
  return;
}

