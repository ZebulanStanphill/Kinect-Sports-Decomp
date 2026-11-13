extern int fn_82231700();
extern int fn_8265D5A8();
extern int fn_826600B8();
extern int fn_82660558();
extern int fn_82661160();
extern int fn_826612A8();
extern int fn_82661A88();
extern int fn_826689B8();
extern int fn_82669980();
extern int fn_82669AC8();
extern int fn_82669B20();
extern int fn_82F622E0();
extern int fn_82F91FA0();
extern int fn_82F91FD0();
extern int fn_82F92000();
extern int fn_82F92208();
extern int fn_82F92218();
extern int fn_82F95398();
extern int fn_82F953A8();
extern int fn_82F953B8();
extern unsigned int iStack0000001c;
extern unsigned int iStack_1c;
extern unsigned int iStack_20;
extern unsigned int iStack_24;
extern unsigned int iStack_28;
extern unsigned int iStack_2c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000014;
extern unsigned int uStack00000024;


unsigned int fn_826608A0(unsigned int param_1,int param_2,unsigned int param_3)

{
  char *pcVar3;
  int iVar4;
  unsigned int *puVar5;
  int *piVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar1;
  unsigned char *puVar8;
  unsigned char *puVar9;
  unsigned __int64 uVar2;
  unsigned int uStack00000014;
  int iStack0000001c;
  unsigned int uStack00000024;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  fn_826689B8(&stack0x00000024);
  pcVar3 = (char *)fn_82F953A8();
  if (*pcVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff821963f4);
  }
  iVar4 = fn_826689B8(&stack0x00000024);
  fn_82669B20(&stack0x00000024);
  puVar5 = (unsigned int *)fn_8265D5A8(iVar4);
  pcVar3 = (char *)fn_82F953A8(*puVar5);
  iStack_28 = iVar4;
  if (*pcVar3 == '\0') {
    puVar5 = (unsigned int *)fn_82F953B8(iVar4);
    pcVar3 = (char *)fn_82F953A8(*puVar5);
    if (*pcVar3 == '\0') {
      iStack_28 = fn_826689B8(&stack0x00000024);
      piVar6 = (int *)fn_82F953B8(iStack_28);
      iStack_2c = *piVar6;
    }
    else {
      piVar6 = (int *)fn_8265D5A8(iVar4);
      iStack_2c = *piVar6;
    }
  }
  else {
    piVar6 = (int *)fn_82F953B8(iVar4);
    iStack_2c = *piVar6;
  }
  if (iStack_28 == iVar4) {
    piVar6 = (int *)fn_82F92208(iVar4);
    iStack_24 = *piVar6;
    pcVar3 = (char *)fn_82F953A8(iStack_2c);
    if (*pcVar3 == '\0') {
      piVar6 = (int *)fn_82F92208(iStack_2c);
      *piVar6 = iStack_24;
    }
    piVar6 = (int *)fn_82F92000(iStack0000001c);
    if (*piVar6 == iVar4) {
      piVar6 = (int *)fn_82F92000(iStack0000001c);
      *piVar6 = iStack_2c;
    }
    else {
      piVar6 = (int *)fn_8265D5A8(iStack_24);
      if (*piVar6 == iVar4) {
        piVar6 = (int *)fn_8265D5A8(iStack_24);
        *piVar6 = iStack_2c;
      }
      else {
        piVar6 = (int *)fn_82F953B8(iStack_24);
        *piVar6 = iStack_2c;
      }
    }
    piVar6 = (int *)fn_82F91FA0(iStack0000001c);
    if (*piVar6 == iVar4) {
      pcVar3 = (char *)fn_82F953A8(iStack_2c);
      iStack_20 = iStack_24;
      if (*pcVar3 == '\0') {
        iStack_20 = fn_82669AC8(iStack_2c);
      }
      piVar6 = (int *)fn_82F91FA0(iStack0000001c);
      *piVar6 = iStack_20;
    }
    piVar6 = (int *)fn_82F91FD0(iStack0000001c);
    if (*piVar6 == iVar4) {
      pcVar3 = (char *)fn_82F953A8(iStack_2c);
      iStack_1c = iStack_24;
      if (*pcVar3 == '\0') {
        iStack_1c = fn_826612A8(iStack_2c);
      }
      piVar6 = (int *)fn_82F91FD0(iStack0000001c);
      *piVar6 = iStack_1c;
    }
  }
  else {
    puVar5 = (unsigned int *)fn_8265D5A8(iVar4);
    piVar6 = (int *)fn_82F92208(*puVar5);
    *piVar6 = iStack_28;
    puVar5 = (unsigned int *)fn_8265D5A8(iVar4);
    puVar7 = (unsigned int *)fn_8265D5A8(iStack_28);
    *puVar7 = *puVar5;
    piVar6 = (int *)fn_82F953B8(iVar4);
    if (iStack_28 == *piVar6) {
      iStack_24 = iStack_28;
    }
    else {
      piVar6 = (int *)fn_82F92208(iStack_28);
      iStack_24 = *piVar6;
      pcVar3 = (char *)fn_82F953A8(iStack_2c);
      if (*pcVar3 == '\0') {
        piVar6 = (int *)fn_82F92208(iStack_2c);
        *piVar6 = iStack_24;
      }
      piVar6 = (int *)fn_8265D5A8(iStack_24);
      *piVar6 = iStack_2c;
      puVar5 = (unsigned int *)fn_82F953B8(iVar4);
      puVar7 = (unsigned int *)fn_82F953B8(iStack_28);
      *puVar7 = *puVar5;
      puVar5 = (unsigned int *)fn_82F953B8(iVar4);
      piVar6 = (int *)fn_82F92208(*puVar5);
      *piVar6 = iStack_28;
    }
    piVar6 = (int *)fn_82F92000(iStack0000001c);
    if (*piVar6 == iVar4) {
      piVar6 = (int *)fn_82F92000(iStack0000001c);
      *piVar6 = iStack_28;
    }
    else {
      puVar5 = (unsigned int *)fn_82F92208(iVar4);
      piVar6 = (int *)fn_8265D5A8(*puVar5);
      if (*piVar6 == iVar4) {
        puVar5 = (unsigned int *)fn_82F92208(iVar4);
        piVar6 = (int *)fn_8265D5A8(*puVar5);
        *piVar6 = iStack_28;
      }
      else {
        puVar5 = (unsigned int *)fn_82F92208(iVar4);
        piVar6 = (int *)fn_82F953B8(*puVar5);
        *piVar6 = iStack_28;
      }
    }
    puVar5 = (unsigned int *)fn_82F92208(iVar4);
    puVar7 = (unsigned int *)fn_82F92208(iStack_28);
    *puVar7 = *puVar5;
    uVar2 = fn_82F95398(iVar4);
    uVar1 = fn_82F95398(iStack_28);
    fn_82231700(uVar1,uVar2);
  }
  pcVar3 = (char *)fn_82F95398(iVar4);
  if (*pcVar3 != '\x01') {
LAB_82660fec:
    fn_82F92218(iVar4);
    uVar2 = fn_8265D5A8();
    fn_82661A88(iStack0000001c + 0xd,uVar2);
    fn_82660558(iStack0000001c + 0xc,iVar4,1);
    if (*(int *)(iStack0000001c + 8) != 0) {
      *(int *)(iStack0000001c + 8) = *(int *)(iStack0000001c + 8) + -1;
    }
    fn_826600B8(uStack00000014,uStack00000024,iStack0000001c);
    return uStack00000014;
  }
LAB_82660c80:
  piVar6 = (int *)fn_82F92000(iStack0000001c);
  if ((iStack_2c == *piVar6) || (pcVar3 = (char *)fn_82F95398(iStack_2c), *pcVar3 != '\x01'))
  goto LAB_82660fdc;
  piVar6 = (int *)fn_8265D5A8(iStack_24);
  if (iStack_2c == *piVar6) {
    puVar5 = (unsigned int *)fn_82F953B8(iStack_24);
    iStack_28 = *puVar5;
    pcVar3 = (char *)fn_82F95398(iStack_28);
    if (*pcVar3 == '\0') {
      puVar8 = (unsigned char *)fn_82F95398(iStack_28);
      *puVar8 = 1;
      puVar8 = (unsigned char *)fn_82F95398(iStack_24);
      *puVar8 = 0;
      fn_82661160(iStack0000001c,iStack_24);
      puVar5 = (unsigned int *)fn_82F953B8(iStack_24);
      iStack_28 = *puVar5;
    }
    pcVar3 = (char *)fn_82F953A8(iStack_28);
    if (*pcVar3 == '\0') {
      puVar5 = (unsigned int *)fn_8265D5A8(iStack_28);
      pcVar3 = (char *)fn_82F95398(*puVar5);
      if (*pcVar3 == '\x01') {
        puVar5 = (unsigned int *)fn_82F953B8(iStack_28);
        pcVar3 = (char *)fn_82F95398(*puVar5);
        if (*pcVar3 == '\x01') {
          puVar8 = (unsigned char *)fn_82F95398(iStack_28);
          *puVar8 = 0;
          goto LAB_82660c70;
        }
      }
      puVar5 = (unsigned int *)fn_82F953B8(iStack_28);
      pcVar3 = (char *)fn_82F95398(*puVar5);
      if (*pcVar3 == '\x01') {
        puVar5 = (unsigned int *)fn_8265D5A8(iStack_28);
        puVar8 = (unsigned char *)fn_82F95398(*puVar5);
        *puVar8 = 1;
        puVar8 = (unsigned char *)fn_82F95398(iStack_28);
        *puVar8 = 0;
        fn_82669980(iStack0000001c,iStack_28);
        puVar5 = (unsigned int *)fn_82F953B8(iStack_24);
        iStack_28 = *puVar5;
      }
      puVar8 = (unsigned char *)fn_82F95398(iStack_24);
      puVar9 = (unsigned char *)fn_82F95398(iStack_28);
      *puVar9 = *puVar8;
      puVar8 = (unsigned char *)fn_82F95398(iStack_24);
      *puVar8 = 1;
      puVar5 = (unsigned int *)fn_82F953B8(iStack_28);
      puVar8 = (unsigned char *)fn_82F95398(*puVar5);
      *puVar8 = 1;
      fn_82661160(iStack0000001c,iStack_24);
LAB_82660fdc:
      puVar8 = (unsigned char *)fn_82F95398(iStack_2c);
      *puVar8 = 1;
      goto LAB_82660fec;
    }
  }
  else {
    puVar5 = (unsigned int *)fn_8265D5A8(iStack_24);
    iStack_28 = *puVar5;
    pcVar3 = (char *)fn_82F95398(iStack_28);
    if (*pcVar3 == '\0') {
      puVar8 = (unsigned char *)fn_82F95398(iStack_28);
      *puVar8 = 1;
      puVar8 = (unsigned char *)fn_82F95398(iStack_24);
      *puVar8 = 0;
      fn_82669980(iStack0000001c,iStack_24);
      puVar5 = (unsigned int *)fn_8265D5A8(iStack_24);
      iStack_28 = *puVar5;
    }
    pcVar3 = (char *)fn_82F953A8(iStack_28);
    if (*pcVar3 == '\0') {
      puVar5 = (unsigned int *)fn_82F953B8(iStack_28);
      pcVar3 = (char *)fn_82F95398(*puVar5);
      if (*pcVar3 == '\x01') {
        puVar5 = (unsigned int *)fn_8265D5A8(iStack_28);
        pcVar3 = (char *)fn_82F95398(*puVar5);
        if (*pcVar3 == '\x01') {
          puVar8 = (unsigned char *)fn_82F95398(iStack_28);
          *puVar8 = 0;
          goto LAB_82660c70;
        }
      }
      puVar5 = (unsigned int *)fn_8265D5A8(iStack_28);
      pcVar3 = (char *)fn_82F95398(*puVar5);
      if (*pcVar3 == '\x01') {
        puVar5 = (unsigned int *)fn_82F953B8(iStack_28);
        puVar8 = (unsigned char *)fn_82F95398(*puVar5);
        *puVar8 = 1;
        puVar8 = (unsigned char *)fn_82F95398(iStack_28);
        *puVar8 = 0;
        fn_82661160(iStack0000001c,iStack_28);
        puVar5 = (unsigned int *)fn_8265D5A8(iStack_24);
        iStack_28 = *puVar5;
      }
      puVar8 = (unsigned char *)fn_82F95398(iStack_24);
      puVar9 = (unsigned char *)fn_82F95398(iStack_28);
      *puVar9 = *puVar8;
      puVar8 = (unsigned char *)fn_82F95398(iStack_24);
      *puVar8 = 1;
      puVar5 = (unsigned int *)fn_8265D5A8(iStack_28);
      puVar8 = (unsigned char *)fn_82F95398(*puVar5);
      *puVar8 = 1;
      fn_82669980(iStack0000001c,iStack_24);
      goto LAB_82660fdc;
    }
  }
LAB_82660c70:
  iStack_2c = iStack_24;
  piVar6 = (int *)fn_82F92208(iStack_24);
  iStack_24 = *piVar6;
  goto LAB_82660c80;
}

