typedef unsigned char undefined1;
typedef unsigned char undefined;
typedef unsigned __int64 undefined8;
typedef int (*code)();
extern int fn_8240D930();
extern unsigned char fn_825B5568();
extern int fn_828B2BF8();
extern unsigned int lbl_820E8684;


void fn_828B2E78(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned int apuStack_20 [4];
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    apuStack_20[0] = lbl_820E8684;
    fn_828B2BF8();
    if (fn_825B5568() != 0) {
      fn_828B2BF8();
      piVar1 = (int *)fn_8240D930();
      iVar2 = (*(code *)(*piVar1 + 0x28))(piVar1,*(undefined8 *)(param_1 + 0x30),0,0,0);
      if (iVar2 == 0) {
        fn_828B2BF8();
        piVar1 = (int *)fn_8240D930();
        (*(code *)(*piVar1 + 0x14))(piVar1,*(undefined8 *)(param_1 + 0x30),apuStack_20,1);
        *(undefined1 *)(param_1 + 0x38) = 1;
      }
    }
  }
  return;
}
