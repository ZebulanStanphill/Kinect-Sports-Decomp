#define true 1
extern unsigned int *auStack_40;
extern int fn_82AA6648();
extern int fn_82ABE250();
extern int fn_82ABE650();
extern int fn_82B2B908();


unsigned char fn_82B36328(int param_1,int param_2)

{
  unsigned int *puVar1;
  char cVar2;
  unsigned int *puVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char auStack_40;
  
  if ((*(unsigned int *)(param_2 + 0x14) & 1) == 0) {
    uVar6 = *(unsigned int *)(param_2 + 0x14);
    iVar5 = param_2 + 0x10;
  }
  else if ((*(unsigned int *)(param_2 + 0x1c) & 1) == 0) {
    uVar6 = *(unsigned int *)(param_2 + 0x1c);
    iVar5 = param_2 + 0x18;
  }
  else {
    uVar6 = *(unsigned int *)(param_2 + 0x24);
    iVar5 = param_2 + 0x20;
  }
  uVar6 = -(unsigned int)((uVar6 & 1) == 0) & uVar6;
  do {
    if (uVar6 == 0) break;
    do {
      *(unsigned int *)(uVar6 + 8) = *(unsigned int *)(uVar6 + 8) & 0xfbffffff;
      uVar6 = *(unsigned int *)((uVar6 & 0xfffffffe) + 0x28);
      if ((uVar6 & 1) != 0) break;
    } while (uVar6 != 0);
    iVar4 = param_2 + 0x20;
    if (iVar5 == iVar4) break;
    if ((iVar5 == param_2 + 0x18) || ((*(unsigned int *)(param_2 + 0x1c) & 1) != 0)) {
      uVar6 = *(unsigned int *)(param_2 + 0x24);
    }
    else {
      uVar6 = *(unsigned int *)(param_2 + 0x1c);
      iVar4 = param_2 + 0x18;
    }
    iVar5 = iVar4;
  } while ((uVar6 & 1) == 0);
  auStack_40 = 0;
  puVar1 = (unsigned int *)fn_82ABE250(param_1,8,0x26);
  *(unsigned int **)(param_1 + 0x28c) = puVar1;
  puVar1[1] = (unsigned int)puVar1 | 1;
  *puVar1 = (unsigned int)(puVar1 + 1) | 1;
  uVar6 = *(unsigned int *)(param_1 + 0x28);
  *(unsigned int *)(param_1 + 0x28) = uVar6 | 0x1000;
LAB_82b36434:
  if ((*(unsigned int *)(param_2 + 0x14) & 1) == 0) {
    uVar8 = *(unsigned int *)(param_2 + 0x14);
    iVar5 = param_2 + 0x10;
  }
  else if ((*(unsigned int *)(param_2 + 0x1c) & 1) == 0) {
    uVar8 = *(unsigned int *)(param_2 + 0x1c);
    iVar5 = param_2 + 0x18;
  }
  else {
    uVar8 = *(unsigned int *)(param_2 + 0x24);
    iVar5 = param_2 + 0x20;
  }
LAB_82b3646c:
  uVar8 = -(unsigned int)((uVar8 & 1) == 0) & uVar8;
  iVar4 = iVar5;
  do {
    do {
      if (uVar8 == 0) goto LAB_82b36514;
      do {
        if ((*(unsigned int *)(uVar8 + 8) >> 0x1a & 1) == 0) {
          cVar2 = fn_82B2B908(param_1,uVar8,&auStack_40);
          if (cVar2 != '\0') goto LAB_82b36434;
        }
        uVar8 = *(unsigned int *)((uVar8 & 0xfffffffe) + 0x28);
        if ((uVar8 & 1) != 0) {
          uVar8 = 0;
          break;
        }
      } while (uVar8 != 0);
      iVar5 = param_2 + 0x20;
    } while (iVar4 == iVar5);
    if ((iVar4 == param_2 + 0x18) || ((*(unsigned int *)(param_2 + 0x1c) & 1) != 0)) goto LAB_82b36508;
    uVar8 = -(unsigned int)((*(unsigned int *)(param_2 + 0x1c) & 1) == 0) & *(unsigned int *)(param_2 + 0x1c);
    iVar4 = param_2 + 0x18;
  } while( true );
LAB_82b36514:
  puVar1 = *(unsigned int **)(param_1 + 0x28c);
  uVar8 = puVar1[1];
  if ((uVar8 & 1) != 0) {
LAB_82b365d4:
    fn_82ABE650(param_1,uVar6 >> 0xc & 1);
    *(unsigned int *)(param_1 + 0x28c) = 0;
    return auStack_40;
  }
  if (uVar8 == 0) goto LAB_82b365d4;
  if ((uVar8 & 1) == 0) {
    puVar3 = (unsigned int *)((*puVar1 & 0xfffffffe) - 4);
  }
  else {
    puVar3 = (unsigned int *)0x0;
  }
  uVar7 = puVar3[2] - 1;
  uVar8 = puVar3[puVar3[2] + 3];
  puVar3[2] = uVar7;
  if (uVar7 == 0) {
    *(unsigned int *)(puVar3[1] & 0xfffffffe) = *puVar3;
    *(unsigned int *)(*puVar3 & 0xfffffffe) = puVar3[1];
    fn_82AA6648(puVar1,puVar3,((unsigned __int64)puVar3[3] + 4 & 0x3fffffff) << 2);
  }
  uVar7 = *(unsigned int *)(uVar8 + 8);
  *(unsigned int *)(uVar8 + 8) = uVar7 & 0xfbffffff;
  if (((uVar7 & 0x3f80) != 0x3980) && (*(int *)(uVar8 + 0x1c) == param_2)) {
    fn_82B2B908(param_1,uVar8,&auStack_40);
  }
  goto LAB_82b36514;
LAB_82b36508:
  uVar8 = *(unsigned int *)(param_2 + 0x24);
  goto LAB_82b3646c;
}

