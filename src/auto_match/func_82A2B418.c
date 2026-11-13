typedef unsigned char bool;
extern int fn_82A2B760();
extern unsigned int uStack_14;
extern unsigned int uStack_16;
extern unsigned int uStack_18;
extern unsigned int uStack_1a;
extern unsigned int uStack_1c;
extern unsigned int uStack_1e;
extern unsigned int uStack_20;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


bool fn_82A2B418(unsigned short *param_1,unsigned int *param_2)

{
  char cVar1;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned short uStack_20;
  unsigned short uStack_1e;
  unsigned short uStack_1c;
  unsigned short uStack_1a;
  unsigned short uStack_18;
  unsigned short uStack_16;
  unsigned short uStack_14;
  
  uStack_20 = *param_1;
  uStack_1e = param_1[1];
  uStack_1c = param_1[3];
  uStack_1a = param_1[4];
  uStack_18 = param_1[5];
  uStack_16 = param_1[6];
  uStack_14 = param_1[7];
  cVar1 = RtlTimeFieldsToTime(&uStack_20,&stack_pair_30.first);
  if (cVar1 != '\0') {
    param_2[1] = stack_pair_30.second;
    *param_2 = stack_pair_30.first;
  }
  else {
    fn_82A2B760(0xffffffffc000000d);
  }
  return cVar1 != '\0';
}

