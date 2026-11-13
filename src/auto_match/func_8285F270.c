extern unsigned int *auStack_3c;
extern int fn_828176F0();
extern int fn_82817A50();
extern int fn_82859E40();
extern int fn_8285A2A0();
extern int fn_8285A580();
extern unsigned int uStack_40;


void fn_8285F270(int param_1,int *param_2,int *param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  __int64 lVar5;
  unsigned int uStack_40;
  unsigned int auStack_3c [15];
  
  pcVar4 = (char *)(param_1 + 0xb);
  pcVar3 = "04.05.05.0032";
  do {
    cVar1 = *pcVar4;
    cVar2 = *pcVar3;
    if (cVar1 == '\0') break;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    fn_8285A2A0(param_1,param_2,param_3);
    lVar5 = 0;
    *param_3 = *param_2;
    if (0 < *(int *)(param_1 + 0x28)) {
      do {
        fn_82859E40(param_1,param_2,lVar5);
        fn_82859E40(param_1,param_3,lVar5);
        fn_8285A580(param_1,param_2,param_3);
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *(int *)(param_1 + 0x28));
    }
  }
  else {
    uStack_40 = 0;
    fn_828176F0(*(unsigned int *)(param_1 + 0x20),0xffffffff8201f8f8,&uStack_40);
    fn_82817A50(uStack_40,0xffffffff82f68cc0,param_2,param_3);
    lVar5 = 0;
    if (0 < *param_2) {
      do {
        fn_82859E40(param_1,param_2,lVar5);
        fn_82859E40(param_1,param_3,lVar5);
        auStack_3c[0] = 0;
        fn_828176F0(*(unsigned int *)(param_1 + 0x24),0xffffffff8201f900,auStack_3c);
        fn_82817A50(auStack_3c[0],0xffffffff82f68cc0,param_2[2],param_3[2]);
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *param_2);
    }
  }
  fn_82859E40(param_1,param_2,0);
  fn_82859E40(param_1,param_3,0);
  return;
}

