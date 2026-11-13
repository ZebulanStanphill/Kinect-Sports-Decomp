typedef unsigned char bool;
#define false 0
extern unsigned int *auStack_260;
extern unsigned int *auStack_290;
extern unsigned int *auStack_2c0;
extern unsigned int *auStack_320;
extern unsigned int *auStack_360;
extern int fn_82A862C8();
extern int fn_82A86818();
extern int fn_82A86CB0();
extern int fn_82A86E00();
extern int fn_82A87EC8();
extern int fn_82A8A9F8();
extern int fn_82A8C620();
extern int fn_82A8CF10();
extern int memcpy();
extern unsigned int iStack_37c;
extern unsigned int lbl_821CB794;
extern unsigned int uStack_2fc;
extern unsigned int uStack_300;
extern unsigned int uStack_380;
extern unsigned int uStack_60;


bool fn_82A8ACB0(unsigned int *param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  char cVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int uStack_380;
  int iStack_37c;
  int aiStack_378;
  int aiStack_370 [2];
  int aiStack_368 [2];
  unsigned char auStack_360 [48];
  unsigned char **appuStack_330 [4];
  unsigned char auStack_320 [8];
  unsigned char **appuStack_318 [6];
  struct { unsigned int first; unsigned int second; } stack_pair_300;

  unsigned char auStack_2c0 [48];
  unsigned char auStack_290 [48];
  unsigned char auStack_260 [512];
  unsigned int uStack_60;
  
  if ((((param_1[7] != 0) && (param_1[8] != 0)) &&
      (cVar1 = (**(int (***)())(*param_2 + 4))(param_2), cVar1 != '\0')) &&
     (cVar1 = (**(int (***)())(*param_2 + 0x10))(param_2,auStack_290,0x30,&uStack_380), cVar1 != '\0'))
  {
    memcpy(&stack_pair_300.first,param_1,0x34);
    fn_82A86CB0(auStack_360,auStack_290,0x30);
    fn_82A8C620(auStack_360,0,0x20,param_1);
    fn_82A8C620(auStack_360,0x20,0x20,param_1 + 1);
    fn_82A8C620(auStack_360,0x40,0x20,param_1 + 2);
    fn_82A8C620(auStack_360,0x60,0x20,param_1 + 3);
    fn_82A8C620(auStack_360,0x80,0x20,param_1 + 4);
    puVar5 = param_1 + 5;
    fn_82A8C620(auStack_360,0xa0,0x20,puVar5);
    puVar2 = param_1 + 6;
    fn_82A8C620(auStack_360,0xc0,0x20,puVar2);
    fn_82A8C620(auStack_360,0xe0,0x20,aiStack_368);
    fn_82A8C620(auStack_360,0x100,0x20,aiStack_370);
    fn_82A8C620(auStack_360,0x120,0x20,&aiStack_378);
    fn_82A8C620(auStack_360,0x140,0x20,&iStack_37c);
    fn_82A8C620(auStack_360,0x160,0x20,&uStack_380);
    param_1[9] = param_1[8] + aiStack_368[0];
    param_1[10] = param_1[8] + aiStack_370[0];
    param_1[0xb] = param_1[7] + aiStack_378;
    param_1[0xc] = param_1[7] + iStack_37c;
    if ((unsigned __int64)uStack_380 <= (param_3 & 0xffffffff)) {
      if ((*param_1 <= stack_pair_300.first) && (param_1[1] <= stack_pair_300.second)) {
        uVar4 = 0;
        if (*puVar5 != 0) {
          lVar3 = 0;
          do {
            uStack_60 = param_1[8];
            fn_82A8CF10(appuStack_330,param_2);
            cVar1 = fn_82A8A9F8(auStack_260,appuStack_330);
            if (cVar1 == '\0') {
              return false;
            }
            memcpy(lVar3 + (unsigned __int64)param_1[0xb],auStack_260,0x200);
            uVar4 = uVar4 + 1;
            appuStack_330[0] = &lbl_821CB794;
            lVar3 = lVar3 + 0x200;
          } while (uVar4 < *puVar5);
        }
        uVar4 = 0;
        if (*puVar2 != 0) {
          lVar3 = 0;
          do {
            cVar1 = (**(int (***)())(*param_2 + 0x10))(param_2,auStack_320,8,&aiStack_378);
            if (cVar1 == '\0') {
              return false;
            }
            fn_82A86E00(aiStack_370,auStack_320,8);
            fn_82A8C620(aiStack_370,0,0x20,&uStack_380);
            fn_82A8C620(aiStack_370,0x20,0x20,&iStack_37c);
            fn_82A862C8(auStack_2c0,iStack_37c,(unsigned __int64)uStack_380 + (unsigned __int64)param_1[8]);
            fn_82A8CF10(appuStack_318,param_2);
            cVar1 = fn_82A86818(auStack_2c0,appuStack_318,param_3,param_4);
            if (cVar1 == '\0') {
              return false;
            }
            memcpy(lVar3 + (unsigned __int64)param_1[0xc],auStack_2c0,0x2c);
            uVar4 = uVar4 + 1;
            appuStack_318[0] = &lbl_821CB794;
            lVar3 = lVar3 + 0x2c;
          } while (uVar4 < *puVar2);
        }
        cVar1 = fn_82A87EC8(param_1,param_2);
        return cVar1 != '\0';
      }
      memcpy(param_1,&stack_pair_300.first,0x34);
    }
  }
  return false;
}

