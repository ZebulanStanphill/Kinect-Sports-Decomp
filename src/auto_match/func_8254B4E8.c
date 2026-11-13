extern int fn_82552720();
extern int fn_825529B0();
extern int fn_82552B50();


void fn_8254B4E8(unsigned int *param_1)

{
  unsigned int *puVar2;
  unsigned int *puVar3;
  int bVar4;
  
  puVar3 = param_1 + 0x68;
  if (fn_825529B0(puVar3) != 0) {
    puVar2 = param_1 + 0x6c;
    if (puVar2 != 0) {
      bVar4 = *puVar2 != 0;
    }
    else {
      bVar4 = 0;
    }
    if (bVar4) {
      fn_82552720(*param_1 + 0x84c,puVar3,puVar2,0,4,0,0);
    }
    else {
      if (fn_825529B0(puVar3) != 0) {
        fn_82552B50(puVar3,1);
      }
    }
  }
  return;
}
