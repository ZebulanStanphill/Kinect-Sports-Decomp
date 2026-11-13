extern unsigned int *auStack_90;
extern int fn_8235F928();
extern int fn_8235FA10();
extern int fn_82526C70();
extern int fn_82536070();
extern int fn_82536590();
extern int fn_82F68B7C();
extern unsigned int lbl_82196582;


void fn_8241AFD0(int *param_1,int param_2,unsigned int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  unsigned char *puVar3;
  char *pcVar4;
  char *pcVar5;
  unsigned char auStack_90 [128];
  
  if ((param_2 != 9) && (iVar2 = *param_1, *(unsigned int *)(iVar2 + 0x7c0) <= param_3)) {
    if (param_1 != *(int **)(iVar2 + 0x2b20)) {
      return;
    }
    pcVar4 = (char *)(iVar2 + 0xffc);
    goto fn_8235FA10;
  }
  switch(param_2) {
  case 1:
    return;
  case 2:
    iVar2 = *param_1;
    if (param_1 != *(int **)(iVar2 + 0x2b20)) {
      return;
    }
    pcVar4 = "";
    break;
  case 3:
    iVar2 = *param_1;
    if (param_1 != *(int **)(iVar2 + 0x2b20)) {
      return;
    }
    pcVar4 = "";
    break;
  default:
    iVar2 = *param_1;
    if (param_1 != *(int **)(iVar2 + 0x2b20)) {
      return;
    }
    if (*(int *)(iVar2 + 0xc0c) == 0) {
      return;
    }
    if (*(int *)(iVar2 + 0xcb8) == 0) {
      return;
    }
    if (*(int *)(iVar2 + 0x730) == 0) {
      return;
    }
    fn_82F68B7C(iVar2 + 0xd90,0);
    return;
  case 6:
    iVar2 = *param_1;
    if (param_1 != *(int **)(iVar2 + 0x2b20)) {
      return;
    }
    pcVar4 = "";
    break;
  case 7:
    iVar2 = *param_1;
    if (param_1 != *(int **)(iVar2 + 0x2b20)) {
      return;
    }
    pcVar4 = (char *)(iVar2 + 0x10bc);
    break;
  case 8:
    iVar2 = *param_1;
    if (*(unsigned int *)(iVar2 + 0x7bc) < (unsigned int)param_1[0x96]) {
      if (param_1 != *(int **)(iVar2 + 0x2b20)) {
        return;
      }
      puVar3 = (unsigned char *)(iVar2 + 0x10fc);
    }
    else {
      if (param_1 != *(int **)(iVar2 + 0x2b20)) {
        return;
      }
      puVar3 = (unsigned char *)(iVar2 + 0x113c);
    }
    goto fn_8235F928;
  case 9:
    iVar2 = *param_1;
    if (param_1 != *(int **)(iVar2 + 0x2b20)) {
      return;
    }
    puVar3 = &lbl_82196582;
fn_8235F928:
    fn_82F68B7C(iVar2,puVar3);
    return;
  case 10:
    if ((param_1[0xa3] != 6) && (param_1[0xa3] != 7)) {
      iVar2 = *param_1;
      if (param_1 != *(int **)(iVar2 + 0x2b20)) {
        return;
      }
      puVar3 = (unsigned char *)(iVar2 + 0x117c);
      goto fn_8235F928;
    }
    iVar2 = *param_1;
    if (param_1 != *(int **)(iVar2 + 0x2b20)) {
      return;
    }
    pcVar4 = (char *)(iVar2 + 0x11bc);
    break;
  case 0xb:
  case 0xd:
    if ((param_1[0xa3] == 6) || (param_1[0xa3] == 7)) {
      iVar2 = *param_1;
      if (param_1 != *(int **)(iVar2 + 0x2b20)) {
        return;
      }
      pcVar4 = (char *)(iVar2 + 0x11fc);
    }
    else {
      iVar2 = *param_1;
      if (param_1 != *(int **)(iVar2 + 0x2b20)) {
        return;
      }
      pcVar4 = (char *)(iVar2 + 0x123c);
    }
  }
fn_8235FA10:
  if (((*(int *)(iVar2 + 0x2b80) == 0) && (*(int *)(iVar2 + 0x2b84) == 0)) || (param_4 != 0)) {
    if ((*(int *)(iVar2 + 0xc0c) != 0) && (pcVar5 = pcVar4, *(int *)(iVar2 + 0xcb8) != 0)) {
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if ((int)pcVar5 - (int)pcVar4 == 1) {
        if (*(int *)(iVar2 + 0x2b98) == 3) {
          pcVar4 = (char *)(iVar2 + 0xf7c);
        }
        else if (*(int *)(iVar2 + 0x2b98) == 4) {
          pcVar4 = (char *)(iVar2 + 0xfbc);
        }
        else {
          pcVar4 = (char *)(iVar2 + 0xf3c);
        }
      }
      fn_82526C70(auStack_90,0x80,0xffffffff821b26d0,iVar2 + 0xebc,pcVar4);
      fn_82536070(iVar2 + 0xe3c,auStack_90);
      fn_82536590(iVar2 + 0xd6c,0);
    }
    *(unsigned int *)(iVar2 + 0x2b80) = 1;
  }
  return;
}

