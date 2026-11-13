extern unsigned int lbl_28280086;


unsigned __int64 fn_8284C480(unsigned char *param_1)

{
  if (param_1 < (unsigned char *)0x28000003) {
    if ((((param_1 != (unsigned char *)0x28000002) && (param_1 != (unsigned char *)0x18280043)) &&
        ((param_1 != (unsigned char *)0x1828004f &&
         ((param_1 != (unsigned char *)0x18280086 && (param_1 != (unsigned char *)0x1a20007d)))))) &&
       (param_1 != (unsigned char *)0x1a200086)) {
      return 0;
    }
  }
  else if ((param_1 < (unsigned char *)0x28280043) ||
          (((((unsigned char *)0x28280045 < param_1 && (param_1 != (unsigned char *)0x2828004f)) &&
            (param_1 != &lbl_28280086)) && (param_1 != (unsigned char *)0x2a200086)))) {
    return 0;
  }
  return 1;
}

