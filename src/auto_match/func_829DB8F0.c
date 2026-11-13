extern unsigned strlen(const char *);
extern int fn_829DAEB8();
extern int fn_82A2B130();
extern int fn_82F664B0();


int  fn_829DB8F0(char *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  char cVar1;
  int lVar2;
  int iVar3;
  char *pcVar4;
  unsigned aiStack_160 [4];
  unsigned char auStack_150 [304];
  
  aiStack_160[0] = 300;
  lVar2 = fn_82A2B130(2,0x101,param_1,strlen(param_1)+1,auStack_150,aiStack_160);
  if (aiStack_160[0] == 0) {
    lVar2 = -0x7fffbffb;
  }
  if (((int)lVar2 < 0) || (lVar2 = fn_829DAEB8(param_3,auStack_150), lVar2 < 0)) {
    iVar3 = fn_82F664B0(auStack_150,300,param_2);
    if (iVar3 == 0) {
      lVar2 = fn_829DAEB8(param_3,auStack_150);
    }
  }
  return lVar2;
}

