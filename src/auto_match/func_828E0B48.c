typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_828865A0();
extern int fn_828ACC40();
extern int fn_828AD740();
extern int fn_828AE818();
extern int fn_828D45F8();
extern int fn_828D47D0();
extern int fn_828E09C8();
extern int fn_828E0DE0();


void fn_828E0B48(int param_1)

{
  bool bVar1;
  char cVar4;
  unsigned __int64 uVar2;
  int iVar3;
  
  cVar4 = fn_828AD740(*(unsigned int *)(param_1 + 0x14));
  if ((cVar4 != '\0') && (cVar4 = fn_828865A0(param_1), cVar4 != '\0')) {
    uVar2 = fn_828D45F8(param_1);
    iVar3 = fn_828D47D0(uVar2,3,0);
    if (iVar3 != 0) {
      fn_828D45F8(param_1);
      fn_828E09C8();
    }
  }
  cVar4 = fn_828AD740(*(unsigned int *)(param_1 + 0x14));
  if ((cVar4 == '\0') && (cVar4 = fn_828865A0(param_1), cVar4 != '\0')) {
    uVar2 = fn_828D45F8(param_1);
    iVar3 = fn_828D47D0(uVar2,3,0);
    if (iVar3 == 0) goto LAB_828e0c20;
    uVar2 = fn_828D45F8(param_1);
    iVar3 = fn_828D47D0(uVar2,4,0);
    if ((iVar3 != 0) || (bVar1 = true, *(char *)(param_1 + 0x20) == '\0')) goto LAB_828e0c20;
  }
  else {
LAB_828e0c20:
    bVar1 = false;
  }
  if (bVar1) {
    if (*(char *)(param_1 + 0x21) != '\0') goto LAB_828e0cac;
    iVar3 = (**(int (***)())(**(int **)(param_1 + 0x14) + 0x34))();
    if (iVar3 == 0) {
      *(unsigned char *)(param_1 + 0x22) = 1;
      *(unsigned char *)(param_1 + 0x21) = 1;
      goto LAB_828e0cac;
    }
    if (iVar3 != 1) goto LAB_828e0cac;
    *(unsigned char *)(param_1 + 0x21) = 1;
  }
  else {
    cVar4 = fn_828865A0(param_1);
    if (cVar4 != '\0') {
      uVar2 = fn_828D45F8(param_1);
      iVar3 = fn_828D47D0(uVar2,3,0);
      if (iVar3 != 0) goto LAB_828e0cac;
    }
    *(unsigned char *)(param_1 + 0x21) = 0;
  }
  *(unsigned char *)(param_1 + 0x22) = 0;
LAB_828e0cac:
  if (bVar1) {
    if (*(char *)(param_1 + 0x22) != '\0') {
      cVar4 = fn_828ACC40(*(unsigned int *)(param_1 + 0x18));
      if (cVar4 == '\0') {
        fn_828AE818(*(unsigned int *)(param_1 + 0x18),0x15);
      }
      if (*(int *)(param_1 + 8) != 1) {
        fn_828E0DE0(param_1,0);
        *(unsigned int *)(param_1 + 8) = 1;
      }
      *(unsigned __int64 *)(param_1 + 0x30) = 0;
      fn_828E0DE0(param_1,4);
    }
  }
  else {
    *(unsigned char *)(param_1 + 0x22) = 0;
    *(unsigned char *)(param_1 + 0x21) = 0;
  }
  return;
}

