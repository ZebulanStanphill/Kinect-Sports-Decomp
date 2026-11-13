extern int fn_82AA66A8();
extern int fn_82AC6560();
extern int fn_82AD1978();
extern int fn_82AD1AC8();


void fn_82AD2128(unsigned __int64 param_1,int param_2,unsigned int param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int *puVar2;
  
  iVar1 = fn_82AD1AC8();
  if (iVar1 == 0) {
    puVar2 = (unsigned int *)fn_82AC6560(param_4,0x14,0x1a);
    puVar2[3] = param_3;
    *puVar2 = (param_2 + 1) * 0x2000 & 0x1ffe000U | *puVar2 & 0xfe001fff;
    puVar2[2] = *(unsigned int *)(param_3 + 4);
    *(unsigned int **)(param_3 + 4) = puVar2;
    fn_82AD1978(param_1,puVar2);
  }
  else if (*(unsigned int *)(iVar1 + 0xc) != param_3) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(*(unsigned int *)(*(int *)((unsigned int)param_1 & 0xfffff000) + 0x94),0x12c0);
  }
  return;
}

