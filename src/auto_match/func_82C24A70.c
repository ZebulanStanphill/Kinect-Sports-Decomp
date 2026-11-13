extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_82C1E828();
extern int fn_82C1EAB8();
extern int fn_82C1EC50();
extern int fn_82C1EE20();
extern unsigned int lbl_820ED018;
extern unsigned int lbl_820ED028;
extern unsigned int uStack_34;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


unsigned __int64 fn_82C24A70(int param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int *piVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  char cStack_50;
  char acStack_4f [3];
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int auStack_40 [2];
  unsigned char auStack_38 [4];
  unsigned int uStack_34;
  unsigned char abStack_30 [24];
  
  piVar3 = *(int **)(param_1 + 0x1c);
  uStack_44 = 0;
  uStack_48 = 0;
  auStack_40[0] = 0;
  iVar4 = *piVar3;
  cStack_50 = '\0';
  acStack_4f[0] = '\0';
  uStack_4c = 0x1e;
  uVar5 = (**(int (***)())(iVar4 + 0xc))(iVar4,0x1e);
  if (((((-1 < (int)uVar5) &&
        (uVar5 = fn_82C1EE20(param_1,abStack_30,&uStack_44,&uStack_48,&uStack_4c), -1 < (int)uVar5
        )) && (uVar5 = fn_82C1EC50(param_1,auStack_38,&uStack_44,&uStack_48,&uStack_4c),
              -1 < (int)uVar5)) &&
      ((uVar5 = fn_82C1EAB8(param_1,auStack_40,&uStack_44,&uStack_48,&uStack_4c), -1 < (int)uVar5
       && (uVar5 = fn_82C1E828(param_1,&cStack_50,&uStack_44,&uStack_48,&uStack_4c),
          -1 < (int)uVar5)))) &&
     (uVar5 = fn_82C1E828(param_1,acStack_4f,&uStack_44,&uStack_48,&uStack_4c), -1 < (int)uVar5))
  {
    pbVar6 = abStack_30;
    pbVar7 = (unsigned char *)&lbl_820ED018;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar6;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar6 = pbVar6 + 1;
    } while (pbVar7 != &lbl_820ED028);
    if ((((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) && (cStack_50 == '\x01')) &&
       (acStack_4f[0] == '\x02')) {
      *(unsigned int *)(piVar3[1] + 4) = uStack_34;
    }
    else {
      uVar5 = 0xffffffff8050000c;
    }
  }
  return uVar5;
}

