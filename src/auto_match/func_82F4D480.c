extern unsigned int lbl_83261840;
extern unsigned int uRam83261848;
extern unsigned int uRam8326184c;
extern unsigned int uRam83261850;
extern unsigned int uRam83261854;
extern unsigned int uRam83261858;
extern unsigned int uRam8326185c;
extern unsigned int uRam83261860;
extern unsigned int uRam83261864;
extern unsigned int uRam83261868;
extern unsigned int uRam8326186c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82F4D480(unsigned __int64 param_1,unsigned __int64 *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  if (param_2 == (unsigned __int64 *)0x0) {
    return;
  }
  *param_2 = lbl_83261840;
  *(unsigned int *)(param_2 + 1) = uRam83261848;
  *(unsigned int *)((int)param_2 + 0xc) = uRam8326184c;
  uVar4 = uRam8326185c;
  uVar3 = uRam83261858;
  uVar2 = uRam83261854;
  puVar1 = (unsigned int *)((unsigned int)(param_2 + 2) & 0xfffffff0);
  *puVar1 = uRam83261850;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  uVar4 = uRam8326186c;
  uVar3 = uRam83261868;
  uVar2 = uRam83261864;
  puVar1 = (unsigned int *)((unsigned int)(param_2 + 4) & 0xfffffff0);
  *puVar1 = uRam83261860;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  return;
}

