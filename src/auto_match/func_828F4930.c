extern int fn_828FA8D8();
extern int fn_828FAF58();


unsigned __int64 fn_828F4930(int param_1)

{
  char cVar1;
  unsigned int *puVar2;
  char *pcVar3;
  unsigned int uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char acStack_120 [264];
  
  pcVar7 = (char *)**(unsigned int **)(param_1 + 0x278);
  fn_828FAF58(*(unsigned int **)(param_1 + 0x278),0);
  if (*(int *)(param_1 + 0x5c) != 0) {
    puVar2 = *(unsigned int **)(param_1 + 0x278);
    pcVar5 = (char *)*puVar2;
    for (; (pcVar7 < pcVar5 && ((*pcVar7 == ' ' || (*pcVar7 == '\t')))); pcVar7 = pcVar7 + 1) {
      pcVar5 = (char *)**(unsigned int **)(param_1 + 0x278);
    }
    uVar4 = 0;
    pcVar5 = pcVar7 + 2;
    pcVar6 = pcVar7 + 1;
    do {
      pcVar3 = (char *)*puVar2;
      if (pcVar3 <= pcVar7) break;
      cVar1 = *pcVar7;
      if (cVar1 == '\\') {
        if ((pcVar6 < pcVar3) && (*pcVar6 == '\n')) {
          pcVar7 = pcVar7 + 2;
          pcVar6 = pcVar6 + 2;
          pcVar5 = pcVar5 + 2;
        }
        else {
          if ((pcVar3 <= pcVar5) || ((*pcVar6 != '\r' || (*pcVar5 != '\n')))) goto LAB_828f4a20;
          pcVar7 = pcVar7 + 3;
          pcVar6 = pcVar6 + 3;
          pcVar5 = pcVar5 + 3;
        }
      }
      else {
LAB_828f4a20:
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
        if (cVar1 != '\r') {
          acStack_120[uVar4] = cVar1;
          uVar4 = uVar4 + 1;
        }
      }
    } while (uVar4 < 0xff);
    acStack_120[uVar4] = '\0';
    fn_828FA8D8(param_1 + 0x18,param_1 + 0x280,0,0xffffffff8202926c,acStack_120);
    *(unsigned int *)(param_1 + 0x54) = 1;
    *(unsigned int *)(param_1 + 0x50) = 1;
  }
  return 0;
}

