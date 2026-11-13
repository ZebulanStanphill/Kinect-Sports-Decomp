extern int fn_822315A0();
extern int fn_8265C9E0();
extern int fn_828A0B78();
extern int fn_828A0BE8();
extern int fn_828CCCC0();
extern int fn_828D0080();
extern int fn_828D0AF8();
extern unsigned int lbl_8202678C;
extern unsigned int uStack_60;


/* WARNING: Removing unreachable block (ram,0x828d0c38) */

unsigned int *
fn_828D0BE0(unsigned int *param_1,int param_2,char param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned __int64 param_6)

{
  char cVar3;
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  int *piVar4;
  unsigned int uStack_60;
  unsigned int *puStack_5c;
  
  piVar4 = *(int **)(param_2 + 0x14);
  if (piVar4 != *(int **)(param_2 + 0x18)) {
    do {
      if ((*(char *)(*piVar4 + 8) == '\0') &&
         (cVar3 = fn_828A0BE8(*piVar4 + 9,param_4), cVar3 != '\0')) {
        if (*(char *)(*piVar4 + 8) == '\0') {
          cVar3 = fn_828A0B78(*piVar4 + 0x2d,param_5);
        }
        else {
          cVar3 = '\0';
        }
        if (cVar3 != '\0') {
          *param_1 = 0;
          param_1[1] = 0;
          fn_828CCCC0(param_1,*piVar4,piVar4[1],0);
          return param_1;
        }
      }
      piVar4 = piVar4 + 2;
    } while (piVar4 != *(int **)(param_2 + 0x18));
  }
  uVar1 = fn_8265C9E0(0xb0);
  if ((uVar1 & 0xffffffff) == 0) {
    uStack_60 = 0;
  }
  else {
    uStack_60 = fn_828D0080(uVar1,(-(param_3 != '\0') & 7U) + 1,param_4,param_5,param_6);
  }
  puStack_5c = (unsigned int *)fn_8265C9E0(0x10);
  if (puStack_5c == (unsigned int *)0x0) {
    puStack_5c = (unsigned int *)0x0;
  }
  else {
    puStack_5c[3] = uStack_60;
    puStack_5c[1] = 1;
    *puStack_5c = &lbl_8202678C;
    puStack_5c[2] = 1;
  }
  fn_828D0AF8(param_2 + 0x14,&uStack_60);
  *param_1 = 0;
  param_1[1] = 0;
  puVar2 = puStack_5c;
  if (param_1 != &uStack_60) {
    param_1[1] = puStack_5c;
    *param_1 = uStack_60;
    puVar2 = (unsigned int *)0x0;
  }
  if (puVar2 != (unsigned int *)0x0) {
    fn_822315A0();
  }
  return param_1;
}

