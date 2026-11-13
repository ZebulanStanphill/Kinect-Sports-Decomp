extern int fn_82BA02A8();
extern unsigned int lbl_820E7F98;


void fn_82BBBFB8(int param_1)

{
  int lVar1;
  unsigned int *puVar2;
  
  fn_82BA02A8(*(unsigned int *)(param_1 + 0x754),"Shader interpolator assignments:\n");
  lVar1 = 0;
  puVar2 = (unsigned int *)(param_1 + 0x410);
  do {
    if (puVar2[-0x20] != 0) {
      fn_82BA02A8(*(unsigned int *)(param_1 + 0x754),"  Interpolator %d assigned type %s-%d\n",lVar1,
                   (&lbl_820E7F98)[puVar2[-0x10] * 3],*puVar2);
    }
    lVar1 = lVar1 + 1;
    puVar2 = puVar2 + 1;
  } while ((int)lVar1 < 0x10);
  return;
}

