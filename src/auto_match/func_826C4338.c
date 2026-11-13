extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_8269A608();
extern int fn_826C1328();
extern int fn_826C3198();


void fn_826C4338(int param_1)

{
  int *puVar1;
  int uVar2;
  
  fn_826C3198(param_1 + 0x50);
  fn_8267BE38(*(unsigned int *)(param_1 + 0x3c));
  if (*(unsigned int *)(param_1 + 0x38) != 0) {
    fn_8267C498(*(unsigned int *)(param_1 + 0x38));
  }
  *(unsigned int *)(param_1 + 0x38) = 0;
  { struct RefSlot_826C4338 { int *ref; };
  struct RefSlot_826C4338 *slot = (struct RefSlot_826C4338 *)(param_1 + 0x34);
  puVar1 = slot->ref;
  if (puVar1 != (int *)0x0) {
    uVar2 = *puVar1;
    *puVar1 = uVar2 - 1;
    if (uVar2 - 1 <= 0) {
      fn_8269A608(puVar1);
      fn_8267BE38(puVar1);
    }
  }
  }
  *(unsigned int *)(param_1 + 0x34) = 0;
  fn_826C1328(param_1);
  return;
}

