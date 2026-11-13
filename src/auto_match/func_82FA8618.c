extern unsigned int *auStack_1c;
extern int fn_82FAC688();
extern unsigned int uStack_20;


unsigned __int64 fn_82FA8618(int param_1)

{
  unsigned char cVar1;
  unsigned int uStack_20;
  unsigned int auStack_1c;
  
  cVar1 = fn_82FAC688(*(unsigned int *)(param_1 + 400),param_1,&uStack_20,&auStack_1c);
  if (cVar1 != '\0') {
    *(unsigned char *)(param_1 + 0xdb) = *(unsigned char *)(param_1 + 0xdb) | 0x80;
    *(unsigned int *)(param_1 + 0x134) = uStack_20;
    *(unsigned int *)(param_1 + 0xd0) = auStack_1c;
    return 1;
  }
  return 2;
}

