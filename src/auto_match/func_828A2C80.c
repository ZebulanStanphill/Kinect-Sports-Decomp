extern int fn_828B55B0();
extern int fn_828B5738();


unsigned __int64 fn_828A2C80(int param_1,unsigned __int64 param_2)

{
  unsigned char cVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)(param_1 + 0x2f4);
  if (piVar2 != *(int **)(param_1 + 0x2f4)) {
    do {
      cVar1 = fn_828B5738(param_2,piVar2 + 3);
      if (cVar1 != '\0') {
        fn_828B55B0(param_2);
        return 1;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 0x2f4));
  }
  fn_828B55B0(param_2);
  return 0;
}

