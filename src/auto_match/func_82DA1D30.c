extern unsigned int *auStack_30;
extern int fn_82CE6150();
extern unsigned int lbl_82006848;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_820BC52C;
extern unsigned int lbl_821AAD20;


char * fn_82DA1D30(char *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  double dVar3;
  unsigned char auStack_30 [1];
  
  *param_1 = '\x01';
  dVar3 = (double)lbl_82006848;
  pcVar1 = (char *)fn_82CE6150(dVar3,auStack_30,param_2 + 0x20);
  cVar2 = '\x01' - (*pcVar1 == '\0');
  *param_1 = cVar2;
  if (cVar2 != '\0') {
    pcVar1 = (char *)fn_82CE6150(dVar3,auStack_30,param_2 + 0x50);
    cVar2 = '\x01';
    if (*pcVar1 != '\0') goto LAB_82da1db0;
  }
  cVar2 = '\0';
LAB_82da1db0:
  *param_1 = cVar2;
  if ((cVar2 == '\0') || (cVar2 = '\x01', *(float *)(param_2 + 0x9c) != lbl_820BC52C)) {
    cVar2 = '\0';
  }
  *param_1 = cVar2;
  if ((cVar2 == '\0') || (cVar2 = '\x01', *(float *)(param_2 + 0xa0) < lbl_821AAD20)) {
    cVar2 = '\0';
  }
  *param_1 = cVar2;
  if ((cVar2 == '\0') || (cVar2 = '\x01', lbl_8201DD74 <= *(float *)(param_2 + 0xa0))) {
    cVar2 = '\0';
  }
  *param_1 = cVar2;
  if ((cVar2 == '\0') || (cVar2 = '\x01', *(float *)(param_2 + 0xb4) < *(float *)(param_2 + 0xb0)))
  {
    cVar2 = '\0';
  }
  *param_1 = cVar2;
  if ((cVar2 == '\0') || (cVar2 = '\x01', *(float *)(param_2 + 0x8c) < *(float *)(param_2 + 0x88)))
  {
    cVar2 = '\0';
  }
  *param_1 = cVar2;
  return param_1;
}

