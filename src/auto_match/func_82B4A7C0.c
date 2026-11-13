extern unsigned int *auStack_b0;
extern int fn_82932548();
extern int fn_82AA66A8();
extern int fn_82AC6560();
extern int fn_82B45DE8();
extern int fn_82B46770();
extern int fn_82B467D8();
extern int fn_82B46EA8();
extern int fn_82B47730();
extern int memcpy();


unsigned __int64
fn_82B4A7C0(int param_1,char *param_2,int param_3,int param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned __int64 param_7,unsigned int *param_8)

{
  char cVar1;
  char *pcVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int iVar7;
  char *pcVar8;
  unsigned int uVar9;
  unsigned int auStack_b0 [20];
  
  pcVar8 = param_2;
  if (param_2 == (char *)0x0) {
    pcVar3 = (char *)fn_82B45DE8(param_1,param_3);
    pcVar8 = pcVar3;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar7 = (int)pcVar8 - (int)pcVar3;
  }
  else {
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar7 = (int)pcVar8 - (int)param_2;
  }
  uVar2 = fn_82B47730(param_1,iVar7,0);
  if (param_2 == (char *)0x0) {
    param_2 = (char *)fn_82B45DE8(param_1,param_3);
  }
  memcpy(uVar2,param_2,iVar7);
  uVar4 = fn_82B46EA8(param_1,param_5,param_6,param_7);
  puVar5 = (unsigned int *)fn_82AC6560(param_1,0x58,0x14);
  fn_82932548(auStack_b0);
  puVar5[4] = param_3;
  puVar5[0xc] = uVar4;
  puVar5[1] = 0xb;
  puVar5[5] = (int)param_6 * (int)param_7;
  *puVar5 = auStack_b0[0];
  uVar2 = fn_82B46770(param_1,1,uVar2,puVar5);
  if (param_8 != (unsigned int *)0x0) {
    uVar4 = fn_82B467D8(param_1,uVar2,*param_8,0xffffffff8202df2c);
    *param_8 = uVar4;
  }
  uVar9 = param_3 + 1;
  if (uVar9 < (unsigned int)(param_3 + param_4)) {
    iVar7 = uVar9 * 0x28;
    do {
      if ((*(unsigned int *)(iVar7 + *(int *)(param_1 + 0xc)) & 7) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      uVar9 = uVar9 + 1;
      puVar6 = (unsigned int *)(iVar7 + *(int *)(param_1 + 0xc));
      iVar7 = iVar7 + 0x28;
      *puVar6 = *puVar6 & 0xfffffff8 | 5;
    } while (uVar9 < (unsigned int)(param_3 + param_4));
  }
  return uVar2;
}

