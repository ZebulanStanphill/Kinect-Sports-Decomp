extern int fn_82A2A288();
extern int fn_82A2A378();
extern int fn_82E21160();
extern int fn_82E211B0();
extern int fn_82F64840();
extern int fn_82F64CE0();
extern int fn_82F66368();


unsigned __int64 fn_82E215D0(char *param_1,char param_2)

{
  char cVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  char *pcVar5;
  unsigned __int64 uVar4;
  char *pcVar6;
  
  if (*param_1 == '\0') {
    if (param_2 == '\0') {
      pcVar6 = "0";
      pcVar5 = pcVar6;
    }
    else {
      pcVar6 = "1";
      pcVar5 = pcVar6;
    }
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + (-1 - (int)pcVar5);
    if (pcVar6 == (char *)0x0) {
      uVar4 = 0;
    }
    else {
      if (*param_1 == '\0') {
        uVar4 = fn_82E211B0(param_1,pcVar6);
        fn_82F66368(uVar4,(unsigned __int64)*(unsigned int *)(param_1 + 8) -
                                (unsigned __int64)*(unsigned int *)(param_1 + 4),pcVar5,pcVar6);
      }
      else {
        uVar4 = fn_82E21160();
        fn_82A2A288(0,0,pcVar5,pcVar6,uVar4,pcVar6);
      }
      uVar4 = 1;
      *(char **)(param_1 + 4) = pcVar6 + *(int *)(param_1 + 4);
    }
  }
  else {
    if (param_2 == '\0') {
      uVar4 = 0xffffffff8214bc68;
    }
    else {
      uVar4 = 0xffffffff8214bc6c;
    }
    lVar2 = fn_82F64CE0(uVar4);
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      if (*param_1 == '\0') {
        uVar3 = fn_82E211B0(param_1,lVar2);
        fn_82A2A378(0,0,uVar4,lVar2,uVar3,lVar2,0,0);
      }
      else {
        uVar3 = fn_82E21160();
        fn_82F64840(uVar3,(unsigned __int64)*(unsigned int *)(param_1 + 8) -
                                (unsigned __int64)*(unsigned int *)(param_1 + 4),uVar4,lVar2);
      }
      uVar4 = 1;
      *(int *)(param_1 + 4) = (int)lVar2 + *(int *)(param_1 + 4);
    }
  }
  return uVar4;
}

