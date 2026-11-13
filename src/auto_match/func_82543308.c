extern unsigned int *auStack_70;
extern unsigned int *auStack_b0;
extern int fn_826310E0();
extern int fn_82639F78();
extern unsigned int iStack_74;
extern unsigned int uStack_b8;


void fn_82543308(unsigned int *param_1,int param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 *puVar5;
  int *piVar6;
  __int64 lVar7;
  unsigned __int64 uStack_b8;
  unsigned char auStack_b0 [1];
  int iStack_74;
  unsigned char auStack_70 [112];
  
  iVar2 = param_3[1];
  if (iVar2 == 0) {
    param_1[5] = param_3;
  }
  else {
    puVar5 = &uStack_b8;
    lVar7 = 8;
    do {
      puVar5 = puVar5 + 1;
      *puVar5 = 0;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    thunk_FUN_82838b18(auStack_70,(unsigned __int64)*(unsigned int *)param_3[2] + (unsigned __int64)*(unsigned int *)(param_2 + 4)
                       ,auStack_b0,iVar2,*param_3);
    uVar3 = 0;
    if (param_3[1] != 0) {
      piVar6 = &iStack_74;
      uVar4 = 1;
      do {
        piVar6 = piVar6 + 1;
        fn_82639F78(*param_1,uVar4,param_3[(*piVar6 + 2) * 2],0,param_3[*piVar6 * 2 + 5],
                          0x8000000000000000 >>
                          ((((0x5f - uVar4) * 0x5556 & 0xffffffff) >> 0x10) + 0x20 & 0x7f));
        uVar3 = param_3[1];
        uVar1 = uVar4 & 0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar1 < uVar3);
    }
    uVar4 = (unsigned __int64)(unsigned int)param_3[3];
    if ((uVar4 != 0xffff) ||
       (uVar4 = (unsigned __int64)(unsigned int)param_1[0x2014], param_1[0x2014] != 0xffffffff)) {
      lVar7 = (unsigned __int64)(uVar3 - 1 >> 2) + 1;
      fn_826310E0(*param_1,uVar4,auStack_b0,lVar7,
                   (unsigned __int64)
                   (-0x8000000000000000 >>
                   ((((uVar4 + lVar7) - 1 & 0xffffffff) >> 2) - (uVar4 >> 2) & 0x7f)) >>
                   (uVar4 >> 2 & 0x7f));
    }
  }
  return;
}

