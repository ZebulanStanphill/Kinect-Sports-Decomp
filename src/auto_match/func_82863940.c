extern int fn_82817778();
extern int fn_82862188();
extern int fn_828624A8();
extern int fn_828627A0();


void fn_82863940(int param_1,unsigned int *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  __int64 lVar5;
  
  pcVar3 = "04.05.05.0032";
  pcVar4 = (char *)(param_1 + 0xb);
  do {
    cVar1 = *pcVar4;
    cVar2 = *pcVar3;
    if (cVar1 == '\0') break;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 != cVar2) {
    fn_82817778(*(unsigned int *)(param_1 + 0x20),0xffffffff8201f9c8,0xffffffff82f691f0,
                      0xffffffff82f68cc0,param_2);
  }
  fn_828624A8(param_1,param_2);
  lVar5 = 0;
  *param_2 = *(unsigned int *)(param_1 + 0x28);
  if (0 < *(int *)(param_1 + 0x28)) {
    do {
      fn_82862188(param_1,param_2,lVar5);
      pcVar3 = "04.05.05.0032";
      pcVar4 = (char *)(param_1 + 0xb);
      do {
        cVar1 = *pcVar4;
        cVar2 = *pcVar3;
        if (cVar1 == '\0') break;
        pcVar4 = pcVar4 + 1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 != cVar2) {
        fn_82817778(*(unsigned int *)(param_1 + 0x24),0xffffffff8201f9e0,0xffffffff82f691f0,
                          0xffffffff82f68cc0,param_2[2]);
      }
      fn_828627A0(param_1,param_2);
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < *(int *)(param_1 + 0x28));
  }
  fn_82862188(param_1,param_2,0);
  return;
}

