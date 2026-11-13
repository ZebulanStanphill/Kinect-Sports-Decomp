extern int fn_822B17A8();
extern unsigned char fn_822BD338(void *,const char *);
extern int fn_824CD030();


void fn_823D2808(int param_1,unsigned int *param_2)

{
  char *iVar1;
  unsigned char cVar3;
  int iVar2;
  
  cVar3 = fn_822BD338((char *)*param_2 + 0x38,"seagull");
  if (cVar3 != '\0') {
    iVar1 = *(char **)(*(int *)(param_1 + 4) + 0x48c);
    if (((iVar1 != 0) && (*(int *)(iVar1 + 0x34) != 0)) &&
       (iVar2 = fn_824CD030(iVar1), iVar2 != 0)) {
      fn_822B17A8(*(unsigned int *)(iVar1 + 0x34),0x1c,0);
    }
  }
  return;
}

