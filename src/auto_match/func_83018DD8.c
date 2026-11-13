extern unsigned int *auStack_7c;
extern int fn_82FA5190();
extern int fn_83016C18();
extern int fn_830187E8();
extern int fn_83019328();
extern int fn_830195D8();
extern int fn_83019CF8();
extern int fn_83019FD0();
extern int fn_8301A128();
extern unsigned int lbl_831BC768;


unsigned __int64
fn_83018DD8(int param_1,unsigned __int64 param_2,int param_3,int param_4,int param_5,unsigned __int64 param_6,
             unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int *puVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  int *piStack_80;
  unsigned char auStack_7c [1];
  
  iVar3 = param_1 + 0x720;
  RtlEnterCriticalSection(iVar3);
  uVar4 = 0x1f;
  if ((param_2 & 0xffffffff) != 0) {
    for (piVar2 = *(int **)(param_1 + 0x6a0); piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      puVar1 = piVar2 + 1;
      if (((unsigned __int64)(unsigned int)piVar2[1] == (param_2 & 0xffffffff)) && (piVar2[2] == param_4)) {
        if (piVar2 != (int *)0xfffffffc) {
          piVar5 = (int *)piVar2[5];
          goto joined_r0x83018ea0;
        }
        break;
      }
    }
    puVar1 = (unsigned int *)fn_83019CF8(param_1 + 0x6a0);
    if (puVar1 == (unsigned int *)0x0) {
      RtlLeaveCriticalSection(iVar3);
      return 0x34;
    }
    *puVar1 = (int)param_2;
    puVar1[1] = param_4;
    puVar1[3] = in_stack_0000005c;
    puVar1[2] = in_stack_00000054;
LAB_83018f1c:
    if (((param_7 & 0xffffffff) != 0) && ((param_8 & 0xffffffff) != 0)) {
      piVar2 = (int *)fn_83019328(puVar1 + 4);
      if (piVar2 == (int *)0x0) {
        uVar4 = 0x34;
      }
      else {
        piVar2[1] = param_3;
        *piVar2 = param_5;
        uVar4 = fn_830195D8(piVar2 + 2,param_7,param_8,param_6);
        if ((int)uVar4 == 1) {
          uVar4 = fn_830187E8(param_1,param_2);
          RtlLeaveCriticalSection(iVar3);
          return uVar4;
        }
        puVar1[5] = puVar1[5] + -0x14;
      }
    }
    if (puVar1[5] == puVar1[4]) {
      fn_83019FD0(puVar1);
      fn_8301A128(param_1 + 0x6a0,puVar1);
    }
  }
  RtlLeaveCriticalSection(iVar3);
  return uVar4;
joined_r0x83018ea0:
  piStack_80 = piVar5;
  if (piVar5 == (int *)piVar2[6]) goto LAB_83018f1c;
  if (*piVar5 == param_5) {
    if (piVar5[2] != 0) {
      fn_82FA5190(lbl_831BC768);
      piVar5[2] = 0;
    }
    piVar5[3] = 0;
    piVar5[4] = 0;
    fn_83016C18(auStack_7c,piVar2 + 5,&piStack_80);
    goto LAB_83018f1c;
  }
  piVar5 = piVar5 + 5;
  goto joined_r0x83018ea0;
}

