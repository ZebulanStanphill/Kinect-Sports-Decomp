#define true 1
extern int fn_8265D5A8();
extern int fn_826600B8();
extern int fn_82660558();
extern int fn_82661160();
extern int fn_82661A88();
extern int fn_82662AB8();
extern int fn_82669980();
extern int fn_82F622A8();
extern int fn_82F91FA0();
extern int fn_82F91FD0();
extern int fn_82F92000();
extern int fn_82F92208();
extern int fn_82F92218();
extern int fn_82F95398();
extern int fn_82F953B8();
extern unsigned int iStack0000001c;
extern unsigned int iStack0000002c;
extern unsigned int iStack00000034;
extern unsigned int iStack_20;
extern unsigned int uStack00000014;


unsigned int fn_82662630(unsigned int param_1,int param_2,char param_3,int param_4,int param_5)

{
  int iVar2;
  unsigned __int64 uVar1;
  int *piVar3;
  unsigned int *puVar4;
  char *pcVar5;
  int *piVar6;
  unsigned char *puVar7;
  unsigned int uStack00000014;
  int iStack0000001c;
  char cStack00000027;
  int iStack0000002c;
  int iStack00000034;
  int iStack_20;
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  cStack00000027 = param_3;
  iStack0000002c = param_4;
  iStack00000034 = param_5;
  iVar2 = fn_82662AB8(param_2);
  if (*(unsigned int *)(iStack0000001c + 8) < iVar2 - 1U) {
    *(int *)(iStack0000001c + 8) = *(int *)(iStack0000001c + 8) + 1;
    *(int *)(iStack00000034 + 4) = iStack0000002c;
    if (iStack0000002c == *(int *)(iStack0000001c + 4)) {
      piVar3 = (int *)fn_82F92000(iStack0000001c);
      *piVar3 = iStack00000034;
      piVar3 = (int *)fn_82F91FA0(iStack0000001c);
      *piVar3 = iStack00000034;
      piVar3 = (int *)fn_82F91FD0(iStack0000001c);
      *piVar3 = iStack00000034;
    }
    else if (cStack00000027 == '\0') {
      piVar3 = (int *)fn_82F953B8(iStack0000002c);
      *piVar3 = iStack00000034;
      piVar3 = (int *)fn_82F91FD0(iStack0000001c);
      if (iStack0000002c == *piVar3) {
        piVar3 = (int *)fn_82F91FD0(iStack0000001c);
        *piVar3 = iStack00000034;
      }
    }
    else {
      piVar3 = (int *)fn_8265D5A8(iStack0000002c);
      *piVar3 = iStack00000034;
      piVar3 = (int *)fn_82F91FA0(iStack0000001c);
      if (iStack0000002c == *piVar3) {
        piVar3 = (int *)fn_82F91FA0(iStack0000001c);
        *piVar3 = iStack00000034;
      }
    }
    iStack_20 = iStack00000034;
    while( true ) {
      puVar4 = (unsigned int *)fn_82F92208(iStack_20);
      pcVar5 = (char *)fn_82F95398(*puVar4);
      if (*pcVar5 != '\0') break;
      piVar3 = (int *)fn_82F92208(iStack_20);
      puVar4 = (unsigned int *)fn_82F92208(iStack_20);
      puVar4 = (unsigned int *)fn_82F92208(*puVar4);
      piVar6 = (int *)fn_8265D5A8(*puVar4);
      if (*piVar3 == *piVar6) {
        puVar4 = (unsigned int *)fn_82F92208(iStack_20);
        puVar4 = (unsigned int *)fn_82F92208(*puVar4);
        piVar3 = (int *)fn_82F953B8(*puVar4);
        iStack0000002c = *piVar3;
        pcVar5 = (char *)fn_82F95398(iStack0000002c);
        if (*pcVar5 == '\0') {
          puVar4 = (unsigned int *)fn_82F92208(iStack_20);
          puVar7 = (unsigned char *)fn_82F95398(*puVar4);
          *puVar7 = 1;
          puVar7 = (unsigned char *)fn_82F95398(iStack0000002c);
          *puVar7 = 1;
          puVar4 = (unsigned int *)fn_82F92208(iStack_20);
          puVar4 = (unsigned int *)fn_82F92208(*puVar4);
          puVar7 = (unsigned char *)fn_82F95398(*puVar4);
          *puVar7 = 0;
          puVar4 = (unsigned int *)fn_82F92208(iStack_20);
          piVar3 = (int *)fn_82F92208(*puVar4);
          iStack_20 = *piVar3;
        }
        else {
          puVar4 = (unsigned int *)fn_82F92208(iStack_20);
          piVar3 = (int *)fn_82F953B8(*puVar4);
          if (iStack_20 == *piVar3) {
            piVar3 = (int *)fn_82F92208(iStack_20);
            iStack_20 = *piVar3;
            fn_82661160(iStack0000001c,iStack_20);
          }
          puVar4 = (unsigned int *)fn_82F92208(iStack_20);
          puVar7 = (unsigned char *)fn_82F95398(*puVar4);
          *puVar7 = 1;
          puVar4 = (unsigned int *)fn_82F92208(iStack_20);
          puVar4 = (unsigned int *)fn_82F92208(*puVar4);
          puVar7 = (unsigned char *)fn_82F95398(*puVar4);
          *puVar7 = 0;
          puVar4 = (unsigned int *)fn_82F92208(iStack_20);
          puVar4 = (unsigned int *)fn_82F92208(*puVar4);
          fn_82669980(iStack0000001c,*puVar4);
        }
      }
      else {
        puVar4 = (unsigned int *)fn_82F92208(iStack_20);
        puVar4 = (unsigned int *)fn_82F92208(*puVar4);
        piVar3 = (int *)fn_8265D5A8(*puVar4);
        iStack0000002c = *piVar3;
        pcVar5 = (char *)fn_82F95398(iStack0000002c);
        if (*pcVar5 == '\0') {
          puVar4 = (unsigned int *)fn_82F92208(iStack_20);
          puVar7 = (unsigned char *)fn_82F95398(*puVar4);
          *puVar7 = 1;
          puVar7 = (unsigned char *)fn_82F95398(iStack0000002c);
          *puVar7 = 1;
          puVar4 = (unsigned int *)fn_82F92208(iStack_20);
          puVar4 = (unsigned int *)fn_82F92208(*puVar4);
          puVar7 = (unsigned char *)fn_82F95398(*puVar4);
          *puVar7 = 0;
          puVar4 = (unsigned int *)fn_82F92208(iStack_20);
          piVar3 = (int *)fn_82F92208(*puVar4);
          iStack_20 = *piVar3;
        }
        else {
          puVar4 = (unsigned int *)fn_82F92208(iStack_20);
          piVar3 = (int *)fn_8265D5A8(*puVar4);
          if (iStack_20 == *piVar3) {
            piVar3 = (int *)fn_82F92208(iStack_20);
            iStack_20 = *piVar3;
            fn_82669980(iStack0000001c,iStack_20);
          }
          puVar4 = (unsigned int *)fn_82F92208(iStack_20);
          puVar7 = (unsigned char *)fn_82F95398(*puVar4);
          *puVar7 = 1;
          puVar4 = (unsigned int *)fn_82F92208(iStack_20);
          puVar4 = (unsigned int *)fn_82F92208(*puVar4);
          puVar7 = (unsigned char *)fn_82F95398(*puVar4);
          *puVar7 = 0;
          puVar4 = (unsigned int *)fn_82F92208(iStack_20);
          puVar4 = (unsigned int *)fn_82F92208(*puVar4);
          fn_82661160(iStack0000001c,*puVar4);
        }
      }
    }
    puVar4 = (unsigned int *)fn_82F92000(iStack0000001c);
    puVar7 = (unsigned char *)fn_82F95398(*puVar4);
    *puVar7 = 1;
    fn_826600B8(uStack00000014,iStack00000034,iStack0000001c);
    return uStack00000014;
  }
  fn_82F92218(iStack00000034);
  uVar1 = fn_8265D5A8();
  fn_82661A88(iStack0000001c + 0xd,uVar1);
  fn_82660558(iStack0000001c + 0xc,iStack00000034,1);
                    /* WARNING: Subroutine does not return */
  fn_82F622A8(0xffffffff82197e58);
}

