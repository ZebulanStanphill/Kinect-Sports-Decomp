extern int fn_82230360();
extern int fn_828C0038();
extern int fn_828C0068();
extern unsigned int lbl_8200DFF4;


__int64 fn_828B73B8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  double dVar4;
  
  dVar4 = (double)fn_828C0038(6);
  pcVar2 = (char *)fn_828C0068(6);
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  fn_82230360(param_2,pcVar2,pcVar3 + (-1 - (int)pcVar2));
  return (__int64)(dVar4 * (double)lbl_8200DFF4);
}

