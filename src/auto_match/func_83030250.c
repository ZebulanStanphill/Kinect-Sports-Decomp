extern int fn_82FAF408();
extern int fn_83031520();


unsigned __int64 fn_83030250(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  for (puVar2 = (unsigned int *)param_1[0x1f];
      (puVar2 != (unsigned int *)param_1[0x20] && ((unsigned __int64)*puVar2 != (param_2 & 0xffffffff)));
      puVar2 = puVar2 + 2) {
  }
  uVar1 = (unsigned int)((unsigned int *)param_1[0x20] != puVar2);
  puVar3 = (unsigned int *)(-(unsigned int)(uVar1 != 0) & (unsigned int)(puVar2 + 1));
  if (puVar3 != (unsigned int *)0x0) {
    (**(int (***)())(*(int *)*puVar3 + 0x2c))((int *)*puVar3,0,param_3,-uVar1);
    fn_82FAF408(param_1 + 0x1f,param_2);
  }
  fn_83031520(param_1 + 0x39,param_2);
  if (puVar3 != (unsigned int *)0x0) {
    (**(int (***)())(*param_1 + 8))(param_1);
  }
  return 1;
}

