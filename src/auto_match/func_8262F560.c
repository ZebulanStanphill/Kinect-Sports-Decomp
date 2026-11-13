#define true 1
extern int fn_82522ED8();
extern int fn_827D9780();
extern int fn_82F63CA0();


void fn_8262F560(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  piVar3 = *(int **)(iVar1 + 0x34);
  do {
    if (piVar3 == *(int **)(iVar1 + 0x38)) {
LAB_8262f5b4:
      piVar3 = *(int **)(iVar1 + 0x44);
      do {
        if (piVar3 == *(int **)(iVar1 + 0x48)) {
          return;
        }
        iVar2 = fn_827D9780(param_1 + 0x10,*piVar3);
        if (iVar2 == 0) {
          *(int *)(*piVar3 + 0x20) = *(int *)(*piVar3 + 0x20) + -1;
          if (*(int *)(*piVar3 + 0x20) == 0) {
            fn_82522ED8(*(unsigned int *)(*piVar3 + 0x18));
            fn_82F63CA0(piVar3,piVar3 + 1,(*(int *)(iVar1 + 0x48) - (int)(piVar3 + 1) >> 2) << 2);
            *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + -4;
            fn_82522ED8(*piVar3);
            return;
          }
        }
        piVar3 = piVar3 + 1;
      } while( true );
    }
    iVar2 = fn_827D9780(param_1 + 0x10,*piVar3);
    if (iVar2 == 0) {
      *(int *)(*piVar3 + 0x20) = *(int *)(*piVar3 + 0x20) + -1;
      goto LAB_8262f5b4;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}

