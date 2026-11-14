extern int XMemSet();


void fn_825C6DB0(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 8) = param_2;
                    /* WARNING: Subroutine does not return */
  XMemSet(param_1,0,8);
}

