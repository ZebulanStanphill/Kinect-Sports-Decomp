extern int fn_828184A8();
extern int fn_82F672D8();
extern int fn_82F678C8();
extern int __iob_func();
extern int fprintf();
extern unsigned int uStack_2c;


unsigned __int64 fn_8282F458(int param_1,unsigned __int64 param_2)

{
  char cVar1;
  char cVar2;
  int iVar5;
  __int64 lVar3;
  unsigned __int64 uVar4;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char acStack_30 [4];
  unsigned char uStack_2c;
  
  iVar5 = fn_82F678C8(param_1,0x38,1,param_2);
  if (iVar5 == 1) {
    fn_82F672D8(acStack_30,param_1,4);
    uStack_2c = 0;
    pcVar8 = acStack_30;
    pcVar7 = "SAFF";
    do {
      cVar1 = *pcVar8;
      cVar2 = *pcVar7;
      if (cVar1 == '\0') break;
      pcVar8 = pcVar8 + 1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      pcVar8 = "08.11.07.0040";
      pcVar7 = (char *)(param_1 + 4);
      do {
        cVar1 = *pcVar7;
        cVar2 = *pcVar8;
        if (cVar1 == '\0') break;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        iVar5 = *(int *)(param_1 + 0x14);
        *(unsigned int *)(param_1 + 0x14) = 0;
        iVar6 = fn_828184A8(param_1,0x38);
        if (iVar5 == iVar6) {
          uVar4 = 0;
        }
        else {
          lVar3 = __iob_func();
          fprintf(lVar3 + 0x40,0xffffffff8201ee3c);
          uVar4 = 4;
        }
      }
      else {
        lVar3 = __iob_func();
        fprintf(lVar3 + 0x40,0xffffffff8201ee78,(char *)(param_1 + 4),0xffffffff8201ee2c);
        uVar4 = 3;
      }
    }
    else {
      lVar3 = __iob_func();
      fprintf(lVar3 + 0x40,0xffffffff8201edd0,acStack_30,0xffffffff8201edc8);
      uVar4 = 2;
    }
  }
  else {
    lVar3 = __iob_func();
    fprintf(lVar3 + 0x40,0xffffffff8201ed88);
    uVar4 = 5;
  }
  return uVar4;
}

