extern int fn_828AC508();
extern int memcpy();


void fn_828B8F98(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  unsigned char param_6,int param_7)

{
  unsigned char *puVar1;
  unsigned char *puVar2;
  __int64 lVar3;
  
  lVar3 = 8;
  puVar1 = (unsigned char *)(param_3 + -1);
  puVar2 = (unsigned char *)(param_1 + 0x27);
  do {
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  memcpy(param_1 + 0x30,param_4,0x10);
  memcpy(param_1 + 0x40,param_5,0x24);
  *(unsigned char *)(param_1 + 100) = param_6;
  *(unsigned __int64 *)(param_1 + 0x68) = param_2;
  if (*(char *)(param_7 + 4) != '\0') {
    fn_828AC508(param_1 + 0xb8,param_7);
  }
  return;
}

