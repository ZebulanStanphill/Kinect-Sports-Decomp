extern int fn_82522D98();


void fn_82526A70(unsigned __int64 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
                    /* WARNING: Subroutine does not return */
  fn_82522D98(pcVar2 + (1 - (int)param_2));
}

