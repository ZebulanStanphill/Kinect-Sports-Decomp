extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_823F2E20();
extern int fn_8266EC60();
extern int fn_8266EE08();
extern int fn_8266F6A8();
extern int fn_82672C20();
extern unsigned int iStack_4c;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned int * fn_8229E9B8(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  unsigned char auStack_50 [4];
  int iStack_4c;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  char *pcStack_38;
  
  *param_1 = 1;
  param_1[1] = 2;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = param_1 + 2;
  uVar1 = fn_8266EC60();
  uVar1 = fn_8266EE08(auStack_50,uVar1,param_2,0,1,0);
  fn_823F2E20(puVar2,uVar1);
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  fn_8266F6A8(*puVar2,3);
  fn_82672C20(*puVar2,0xffffffff821ab560,0,0);
  uStack_40 = 0;
  uStack_3c = 0;
  if (param_1[1] != 0) {
    param_1[1] = 0;
    fn_82273CD8(&uStack_40,4);
    pcStack_38 = "single";
    fn_82672C20(*puVar2,0xffffffff821ab578,&uStack_40,1);
  }
  fn_82273C88(&uStack_40);
  return param_1;
}

