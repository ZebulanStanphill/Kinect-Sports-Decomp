extern int fn_82A1F470(void);
unsigned int strlen(const char *);
extern int fn_82230360();
extern int fn_82665348();
extern int fn_8266A4E8();
extern unsigned int uStack_80;


int fn_8257EB78(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int lVar4;
  struct Info_8257EB78 { unsigned size; char text[100]; } info;
  
  lVar4 = 0;
  info.size = 0x5c;
  info.text[0] = '\0';
  iVar2 = fn_8266A4E8(&info);
  if (iVar2 == 0) {
    return fn_82A1F470();
  }
  else if (((info.text[0] != '\0') || (iVar2 = fn_82665348(info.text,0x55), 0 <= iVar2)) ||
          (lVar4 = fn_82A1F470(), lVar4 == 0)) {
    fn_82230360(param_1,info.text,strlen(info.text));
  }
  return lVar4;
}

