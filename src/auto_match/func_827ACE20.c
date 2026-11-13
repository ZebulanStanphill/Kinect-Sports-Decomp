extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_826944C8();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696D38();
extern int fn_826A7398();
extern int fn_827000D8();
extern unsigned int lbl_82015E14;
extern unsigned int lbl_831E7E64;


void fn_827ACE20(int param_1)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char cVar6;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar7;
  unsigned int * apuStack_40;
  
  cVar6 = fn_82695468(param_1,0x1f);
  if (cVar6 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ee38,0,0);
  }
  else {
    uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
      uVar7 = 0;
    }
    if ((uVar7 & 0xffffffff) != 0) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        puVar1 = *(unsigned char **)(param_1 + 4);
        fn_826959C8(puVar1);
        puVar1[4] = 0;
        *puVar1 = 2;
      }
      else {
        uVar2 = *(unsigned int *)(param_1 + 0x18);
        uVar4 = fn_826957D0(param_1,0);
        fn_82696D38(&apuStack_40,uVar4,uVar2,0xffffffffffffffff,0);
        puVar5 = (unsigned int *)fn_8267B890(lbl_831E7E64,0x14,0);
        if (puVar5 == (unsigned int *)0x0) {
          puVar5 = (unsigned int *)0x0;
        }
        else {
          puVar5[1] = 1;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          *puVar5 = &lbl_82015E14;
        }
        uVar2 = *apuStack_40;
        uVar4 = fn_826A7398(*(unsigned int *)(param_1 + 0x18));
        fn_827000D8(uVar4,uVar7,puVar5,uVar2,0);
        puVar1 = *(unsigned char **)(param_1 + 4);
        fn_826959C8(puVar1);
        puVar1[4] = 1;
        *puVar1 = 2;
        if (puVar5 != (unsigned int *)0x0) {
          fn_8267C4F0(puVar5);
        }
        uVar3 = apuStack_40[2];
        apuStack_40[2] = (int)((unsigned __int64)uVar3 - 1);
        if ((unsigned __int64)uVar3 - 1 == 0) {
          fn_826944C8(apuStack_40);
        }
      }
    }
  }
  return;
}

