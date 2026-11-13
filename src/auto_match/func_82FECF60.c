#define true 1
extern int fn_82FECE48();
extern int fn_82FECEE8();
extern int fn_82FEF6B8();
extern unsigned int lbl_831BC794;


unsigned __int64 fn_82FECF60(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  
  puVar1 = lbl_831BC794;
  do {
    if (puVar1 == (unsigned int *)0x0) {
LAB_82fecf94:
      uVar2 = fn_82FECEE8(2,param_1);
      return uVar2;
    }
    if ((unsigned __int64)(unsigned int)puVar1[1] == (param_1 & 0xffffffff)) {
      if (((puVar1[2] == 0) || (puVar1[2] == 1)) && (puVar1[5] == 0)) {
        uVar2 = fn_82FECE48();
        fn_82FEF6B8(uVar2,1);
        return 1;
      }
      goto LAB_82fecf94;
    }
    puVar1 = (unsigned int *)*puVar1;
  } while( true );
}

