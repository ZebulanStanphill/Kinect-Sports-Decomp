extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696480();
extern float fn_826972E0();
extern int fn_826C59F8();
extern int fn_826C7450();


void fn_826C8318(int param_1)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  int lVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  double dVar6;
  
  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  lVar3 = fn_826C59F8(param_1);
  if ((lVar3 != 0) && (1 <= *(int *)(param_1 + 0x1c))) {
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    dVar6 = (double)fn_826972E0(uVar4,uVar2);
    uVar5 = fn_826C7450(lVar3,(unsigned __int64)(unsigned int)(int)dVar6 + 0x4000);
    if (uVar5 != 0) {
      fn_82696480(*(unsigned int *)(param_1 + 4),
                        (*(unsigned char *)(uVar5 + 0x66) & 0x80) ? uVar5 : 0);
    }
  }
  return;
}

