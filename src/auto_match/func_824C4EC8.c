extern unsigned int *auStack_240;
extern unsigned int *auStack_440;
extern unsigned int *auStack_640;
extern unsigned int *auStack_840;
extern int fn_82230300();
extern int fn_82297DB0();
extern int fn_8229DCA8();
extern int fn_8229E410();
extern int fn_825129C8();
extern int fn_82528BF8();
extern int fn_82528EE0();
extern int fn_8265C9E0();
extern int iRam8327674c;
extern unsigned int lbl_821A8C90;
extern unsigned int lbl_83276730;


void fn_824C4EC8(int param_1,unsigned __int64 param_2,unsigned int *param_3,char param_4,
                  unsigned int *param_5,unsigned int *param_6)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned char auStack_840 [512];
  unsigned char auStack_640 [512];
  unsigned char auStack_440 [512];
  unsigned char auStack_240 [576];
  
  puVar2 = param_3;
  if (0xf < (unsigned int)param_3[5]) {
    puVar2 = (unsigned int *)*param_3;
  }
  fn_82528BF8(lbl_83276730,puVar2,auStack_440,0x100,0,1);
  puVar2 = param_6;
  if (7 < (unsigned int)param_6[5]) {
    puVar2 = (unsigned int *)*param_6;
  }
  puVar3 = param_5;
  if (7 < (unsigned int)param_5[5]) {
    puVar3 = (unsigned int *)*param_5;
  }
  fn_82528EE0(auStack_240,0x100,auStack_440,puVar3,puVar2);
  fn_82528BF8(lbl_83276730,0xffffffff821a9468,auStack_640,0x100,0,1);
  if (param_4 != '\0') {
    fn_82528BF8(lbl_83276730,0xffffffff821a9464,auStack_840,0x100,0,1);
  }
  iVar1 = fn_8265C9E0(0x434);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(unsigned char ***)(iVar1 + 0x41c) = &lbl_821A8C90;
    fn_8229DCA8(iVar1,0xffffffff820e975c,auStack_240,auStack_640,
                      -(unsigned int)(param_4 != '\0') & (unsigned int)auStack_840,0xffffffff824c4408,param_1,1);
  }
  *(int *)(param_1 + 0x18) = iVar1;
  fn_8229E410();
  if (iRam8327674c == 0) {
    iRam8327674c = fn_825129C8(0);
  }
  fn_82230300(param_2,1,0);
  fn_82230300(param_3,1,0);
  fn_82297DB0(param_5,1,0);
  fn_82297DB0(param_6,1,0);
  return;
}

