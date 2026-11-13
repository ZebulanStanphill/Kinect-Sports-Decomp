typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_20;
extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern unsigned int *auStack_2c;
extern int fn_828B62F0();
extern int fn_828B6380();
extern int fn_828B6458();
extern int fn_828B6720();
extern int fn_828B6758();
extern int fn_828B6768();
extern int fn_828B7DC0();
extern int fn_828B8F48();
extern int fn_828B8F90();
extern int fn_828C3D70();
extern int fn_828C4360();


void fn_8251AF48(int param_1)

{
  bool bVar1;
  char cVar6;
  unsigned __int64 uVar2;
  unsigned char *puVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int uVar7;
  int *piStack_30;
  unsigned char auStack_2c [4];
  unsigned char auStack_28 [4];
  unsigned char auStack_24 [4];
  unsigned char auStack_20 [8];
  
  fn_828C3D70(auStack_2c,*(unsigned int *)(*(int *)(param_1 + 4) + 8));
  cVar6 = fn_828B62F0(auStack_2c);
  if (cVar6 == '\0') {
    if (*(int *)(param_1 + 0x10) != 0) {
      if (*(int *)(param_1 + 0x50) != 2) {
        *(unsigned int *)(param_1 + 0xc) = 5;
        *(unsigned int *)(param_1 + 0x54) = 2;
      }
      goto LAB_8251b098;
    }
LAB_8251b090:
    uVar7 = 4;
  }
  else {
    fn_828C4360(auStack_2c);
    cVar6 = fn_828B6458();
    if (cVar6 == '\0') goto LAB_8251b098;
    if (*(int *)(param_1 + 0x10) == 2) {
      uVar7 = 1;
    }
    else {
      bVar1 = true;
      uVar2 = fn_828C4360(auStack_2c);
      fn_828B6758(&piStack_30,uVar2);
      while( true ) {
        uVar2 = fn_828C4360(auStack_2c);
        puVar5 = (unsigned int *)fn_828B6768(auStack_28,uVar2);
        if (piStack_30 == (int *)*puVar5) break;
        iVar4 = *piStack_30;
        if (*(char *)(iVar4 + 0x9c) == '\0') {
          if (*(char *)(iVar4 + 0x9e) == '\0') {
            bVar1 = false;
            break;
          }
LAB_8251b0bc:
          piStack_30 = piStack_30 + 2;
        }
        else {
          if (*(char *)(iVar4 + 0x9d) == '\0') {
            uVar2 = fn_828C4360(auStack_2c);
            puVar3 = auStack_24;
          }
          else {
            cVar6 = fn_828B8F48();
            if ((cVar6 != '\0') && (cVar6 = fn_828B8F90(*piStack_30), cVar6 != '\0'))
            goto LAB_8251b0bc;
            uVar2 = fn_828C4360(auStack_2c);
            puVar3 = auStack_20;
          }
          puVar5 = (unsigned int *)fn_828B7DC0(puVar3,uVar2,&piStack_30);
          piStack_30 = (int *)*puVar5;
        }
      }
      if (!bVar1) goto LAB_8251b098;
      fn_828C4360(auStack_2c);
      iVar4 = fn_828B6720();
      uVar7 = 5;
      if (iVar4 == 0) goto LAB_8251b090;
    }
  }
  *(unsigned int *)(param_1 + 0x54) = uVar7;
LAB_8251b098:
  fn_828B6380(auStack_2c);
  return;
}

