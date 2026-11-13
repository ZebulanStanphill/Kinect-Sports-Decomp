typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_220;
extern int fn_8268B610();
extern int fn_826BCF78();
extern int fn_826BD078();
extern int fn_826BD398();
extern unsigned int iStack_230;
extern unsigned int lbl_83155184;
extern unsigned int lbl_83155188;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_8268CAB0(unsigned int *param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  char in_RESERVE;
  unsigned char in_cr0;
  int iStack_230;
  int aiStack_22c;
  unsigned char auStack_220 [512];
  
  aiStack_22c = (*param_2 & 0xfffffffc) + 8;
  *param_1 = &lbl_83155184;
  do {
    if (in_RESERVE != '\0') {
      lbl_83155188 = storeWordConditionalIndexed((unsigned __int64)lbl_83155188 + 1,0,0xffffffff83155188);
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  iStack_230 = 0;
LAB_8268cb08:
  do {
    uVar1 = fn_826BD078(&aiStack_22c);
    if (uVar1 != 0) {
      uVar2 = fn_826BCF78(uVar1 & 0xffff);
      fn_826BD398(auStack_220,&iStack_230,uVar2);
      if (iStack_230 < 0x1f8) goto LAB_8268cb08;
    }
    fn_8268B610(param_1,auStack_220,iStack_230);
    iStack_230 = 0;
    if ((uVar1 & 0xffffffff) == 0) {
      return param_1;
    }
  } while( true );
}

