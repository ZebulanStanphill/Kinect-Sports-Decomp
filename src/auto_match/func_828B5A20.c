extern int fn_82230360();
extern int fn_8288DD10();
extern int fn_828A12E8();
extern int fn_82F6DCE0();


unsigned char * fn_828B5A20(unsigned char *param_1,unsigned short *param_2,char param_3,unsigned __int64 param_4)

{
  char cVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  char *pcVar6;
  unsigned __int64 uVar7;
  char acStack_230 [512];
  
  if (*(char *)((int)param_2 + 7) == '\0') {
    if (param_3 == '\0') {
      uVar7 = 0xffffffff82024f10;
    }
    else {
      uVar7 = 0xffffffff82024f24;
    }
    fn_82F6DCE0(acStack_230,0x200,uVar7);
  }
  else {
    if (param_3 == '\0') {
      uVar7 = 0xffffffff82024f50;
    }
    else {
      uVar7 = 0xffffffff82024f68;
    }
    uVar2 = param_2[2];
    uVar3 = param_2[1];
    uVar4 = fn_828A12E8(param_4);
    puVar5 = (unsigned int *)fn_8288DD10(uVar4,uVar3);
    if (0xf < (unsigned int)puVar5[5]) {
      puVar5 = (unsigned int *)*puVar5;
    }
    fn_82F6DCE0(acStack_230,0x200,uVar7,*param_2,puVar5,uVar2);
  }
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  pcVar6 = acStack_230;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  fn_82230360(param_1,acStack_230,pcVar6 + (-1 - (int)acStack_230));
  return param_1;
}

