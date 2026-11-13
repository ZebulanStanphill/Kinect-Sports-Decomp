#define true 1
extern int fn_82F919B8();
extern int fn_82F92208();
extern int fn_82F93688();
extern int fn_82F953B8();


void fn_82F934C0(int *param_1)

{
  unsigned __int64 in_r0;
  char *pcVar1;
  unsigned int *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piStack00000014;
  
  if (*param_1 == 0) {
    trapWord(0x1f,in_r0,0x16);
  }
  piStack00000014 = param_1;
  pcVar1 = (char *)fn_82F919B8(param_1[1]);
  if (*pcVar1 == '\0') {
    puVar2 = (unsigned int *)fn_82F953B8(piStack00000014[1]);
    pcVar1 = (char *)fn_82F919B8(*puVar2);
    if (*pcVar1 == '\0') {
      puVar2 = (unsigned int *)fn_82F953B8(piStack00000014[1]);
      iVar3 = fn_82F93688(*puVar2);
      piStack00000014[1] = iVar3;
    }
    else {
      while( true ) {
        piVar4 = (int *)fn_82F92208(piStack00000014[1]);
        iVar3 = *piVar4;
        pcVar1 = (char *)fn_82F919B8(iVar3);
        piVar4 = piStack00000014;
        if ((*pcVar1 != '\0') || (piVar5 = (int *)fn_82F953B8(iVar3), piVar4[1] != *piVar5)) break;
        piStack00000014[1] = iVar3;
      }
      piStack00000014[1] = iVar3;
    }
  }
  else {
    trapWord(0x1f,in_r0,0x16);
  }
  return;
}

