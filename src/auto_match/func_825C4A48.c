extern int fn_82522D98();
extern int fn_825C4F40();
extern int fn_825F1500();
extern int fn_82616B30();
extern int fn_8265C9E0();


unsigned __int64 fn_825C4A48(unsigned __int64 param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar5;
  __int64 lVar3;
  unsigned __int64 uVar4;
  
  if (*(unsigned int *)(param_2 + 0x10) < 0x100001) {
    piVar1 = *(int **)(param_2 + 0xc);
    if (*(int *)(param_3 + 0x10) == 0) {
      for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
        iVar2 = *piVar1;
        if ((*(int *)(iVar2 + 0x84) != 0) && (cVar5 = fn_825C4F40(param_3,iVar2), cVar5 != '\0')
           ) {
          piVar1[1] = piVar1[1] + 1;
          if (iVar2 != 0) {
            uVar4 = fn_8265C9E0(0xd0);
            if ((uVar4 & 0xffffffff) != 0) {
              fn_82616B30(param_1,uVar4,param_4,iVar2,param_3);
            }
                    /* WARNING: Subroutine does not return */
            fn_82522D98(0x18);
          }
          break;
        }
      }
    }
    lVar3 = fn_825F1500(param_3);
    if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82522D98(0xc);
    }
  }
  return 0;
}

