#define true 1
extern int fn_828F5390();
extern int fn_828F53E0();
extern int fn_828F59D0();
extern int fn_828FAB00();


unsigned __int64 fn_828F6C70(int param_1,unsigned int *param_2)

{
  unsigned char *pbVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  int *piVar8;
  
  pbVar1 = (unsigned char *)*param_2;
  iVar5 = fn_828F5390(param_1,pbVar1);
  iVar5 = (iVar5 + 0x1e) * 4;
  piVar8 = (int *)(iVar5 + param_1);
  iVar5 = *(int *)(iVar5 + param_1);
  do {
    if (iVar5 == 0) {
LAB_828f6d44:
      param_2[3] = *piVar8;
      *piVar8 = (int)param_2;
      return 0;
    }
    puVar2 = (unsigned int *)*piVar8;
    pbVar6 = (unsigned char *)*puVar2;
    pbVar7 = pbVar1;
    do {
      uVar4 = (unsigned int)*pbVar6;
      uVar3 = (unsigned int)*pbVar7;
      if (*pbVar7 == 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar6 = pbVar6 + 1;
    } while (uVar3 == uVar4);
    if ((int)(uVar3 - uVar4) < 0) goto LAB_828f6d44;
    if (uVar3 == uVar4) {
      iVar5 = fn_828F53E0(param_1,puVar2,param_2);
      if (iVar5 == 0) {
        fn_828FAB00(param_1 + 0x18,param_1 + 0x280,0x5ef,0xffffffff820293d4,pbVar1);
      }
      iVar5 = *piVar8;
      *piVar8 = *(int *)(iVar5 + 0xc);
      *(unsigned int *)(iVar5 + 0xc) = 0;
      fn_828F59D0(iVar5,1);
      goto LAB_828f6d44;
    }
    iVar5 = puVar2[3];
    piVar8 = puVar2 + 3;
  } while( true );
}

