extern int fn_822C72E0();
extern int fn_827F6318();
extern int fn_827F6328();
extern unsigned int lbl_821CA460;


void fn_8231FED0(double param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = *(unsigned int *)(*(int *)(*(int *)(param_2 + 0x20) + 0xc) + 0x110);
  dVar3 = (double)fn_827F6328(uVar1);
  dVar5 = (double)lbl_821CA460;
  dVar4 = (double)(float)((double)(float)(dVar5 / dVar3) * param_1);
  dVar3 = (double)fn_827F6318(uVar1);
  if (dVar5 <= (double)(float)(dVar3 + dVar4)) {
    puVar2 = (unsigned int *)(param_2 + 4);
    if (0xf < *(unsigned int *)(param_2 + 0x18)) {
      puVar2 = (unsigned int *)*puVar2;
    }
    fn_822C72E0(param_3,puVar2);
  }
  return;
}

