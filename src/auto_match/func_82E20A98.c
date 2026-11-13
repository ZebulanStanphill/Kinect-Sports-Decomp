extern int fn_82E20270();
extern int fn_82F67988();
extern int fprintf();


void fn_82E20A98(int param_1)

{
  unsigned int *puVar1;
  int lVar2;
  
  if ((*(char *)(param_1 + 2) == '\0') &&
     (lVar2 = fn_82E20270("UploadControl.dat","w",1), lVar2 != 0)) {
    fprintf(lVar2,"%d\n",*(unsigned int *)(param_1 + 4));
    for (puVar1 = *(unsigned int **)(param_1 + 0xc); puVar1 != (unsigned int *)0x0;
        puVar1 = (unsigned int *)*puVar1) {
      fprintf(lVar2,"%s\n",puVar1[1]);
      fprintf(lVar2,"%s\n",puVar1[2]);
      fprintf(lVar2,"%s\n",puVar1[3]);
    }
    fn_82F67988(lVar2);
  }
  return;
}

