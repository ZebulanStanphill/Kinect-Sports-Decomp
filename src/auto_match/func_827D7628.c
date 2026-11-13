extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_827D8D58();
extern int fn_827DF520();
extern int fn_827E0B50();
extern int fn_827E8698();
extern int fn_82811438();
extern unsigned int lbl_83156AA0;


void fn_827D7628(int *param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  int *piStack00000014;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [80];
  
  puVar5 = (unsigned int *)param_1[0xb1];
  piStack00000014 = param_1;
  if (puVar5 != (unsigned int *)0x0) {
    (**(int (***)())*puVar5)(puVar5,1);
  }
  puVar5 = (unsigned int *)*param_1;
  if (puVar5 != (unsigned int *)0x0) {
    (**(int (***)())*puVar5)(puVar5,1);
  }
  puVar5 = (unsigned int *)param_1[0xb5];
  for (puVar1 = (unsigned int *)*puVar5; puVar1 != puVar5; puVar1 = (unsigned int *)*puVar1) {
    puVar5 = (unsigned int *)puVar1[3];
    if (puVar5 != (unsigned int *)0x0) {
      (**(int (***)())*puVar5)(puVar5,1);
    }
    puVar5 = (unsigned int *)param_1[0xb5];
  }
  RtlEnterCriticalSection(param_1 + 0xf2);
  piVar2 = *(int **)param_1[0xd5];
  if (piVar2 != (int *)param_1[0xd5]) {
    do {
      iVar3 = *(int *)lbl_83156AA0;
      uVar4 = fn_82811438(auStack_50,auStack_60,0x10);
      (**(int (***)())(iVar3 + 0x18))(lbl_83156AA0,piVar2[3],uVar4);
      piVar2[3] = 0;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)param_1[0xd5]);
  }
  RtlLeaveCriticalSection(param_1 + 0xf2);
  fn_827E0B50(param_1 + 0xd4);
  fn_827E0B50(param_1 + 0xb4);
  fn_827DF520(param_1 + 0x44);
  fn_827D8D58(param_1 + 0x33);
  fn_827D8D58(param_1 + 0x29);
  fn_827D8D58(param_1 + 0x11);
  fn_827E8698(param_1 + 1);
  return;
}

