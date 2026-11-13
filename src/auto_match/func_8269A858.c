extern int fn_82696330();
extern int fn_82696958();


void fn_8269A858(int *param_1,int *param_2)

{
  int iVar2;
  unsigned char cVar3;
  unsigned int uVar1;
  unsigned int *puVar4;
  unsigned char auStack_30[4];

  auStack_30[0] = 0;
  iVar2 = (*(int (**)(int *))(*param_1 + 0x5c))(param_1);
  puVar4 = (unsigned int *)(iVar2 + 0x78);
  {
    int vt = *param_2;
    unsigned int n = *puVar4 + 0x130;
    cVar3 = (*(unsigned char (**)(int *, unsigned int *, unsigned int, unsigned char *))(vt + 0x2c))(param_2,puVar4,n,auStack_30);
  }
  if (cVar3 != 0) {
    iVar2 = param_1[0x1a];
    uVar1 = fn_82696958(auStack_30,0);
    (*(void (**)(int *, unsigned int *, unsigned int))(iVar2 + 0x34))(param_1 + 0x1a,puVar4,uVar1);
  }
  fn_82696330(auStack_30);
}
