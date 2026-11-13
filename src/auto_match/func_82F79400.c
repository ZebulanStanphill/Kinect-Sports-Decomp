unsigned int fn_82F79400(void)

{
  unsigned char in_fp_fx;
  unsigned char in_fp_fex;
  unsigned char in_fp_vx;
  unsigned char in_fp_ox;
  unsigned char in_fp_ux;
  unsigned char in_fp_zx;
  unsigned char in_fp_xx;
  unsigned char in_fp_vxsnan;
  unsigned char in_fp_vxisi;
  unsigned char in_fp_vxidi;
  unsigned char in_fp_vxzdz;
  unsigned char in_fp_vximz;
  unsigned char in_fp_vxvc;
  unsigned char in_fp_fr;
  unsigned char in_fp_fi;
  unsigned char in_fp_c;
  unsigned char in_fp_cc0;
  unsigned char in_fp_cc1;
  unsigned char in_fp_cc2;
  unsigned char in_fp_cc3;
  unsigned char in_fp_reserve1;
  unsigned char in_fp_vxsoft;
  unsigned char in_fp_vxsqrt;
  unsigned char in_fp_vxcvi;
  unsigned char in_fp_ve;
  unsigned char in_fp_oe;
  unsigned char in_fp_ue;
  unsigned char in_fp_ze;
  unsigned char in_fp_xe;
  unsigned char in_fp_ni;
  unsigned char in_fp_rn0;
  unsigned char in_fp_rn1;
  
  return (in_fp_rn1 & 1 | (unsigned int)in_fp_fx << 0x1f | (in_fp_fex & 1) << 0x1e | (in_fp_vx & 1) << 0x1d
          | (in_fp_ox & 1) << 0x1c | (in_fp_ux & 1) << 0x1b | (in_fp_zx & 1) << 0x1a |
          (in_fp_xx & 1) << 0x19 | (in_fp_vxsnan & 1) << 0x18 | (in_fp_vxisi & 1) << 0x17 |
          (in_fp_vxidi & 1) << 0x16 | (in_fp_vxzdz & 1) << 0x15 | (in_fp_vximz & 1) << 0x14 |
          (in_fp_vxvc & 1) << 0x13 | (in_fp_fr & 1) << 0x12 | (in_fp_fi & 1) << 0x11 |
          (in_fp_c & 1) << 0x10 | (in_fp_cc0 & 1) << 0xf | (in_fp_cc1 & 1) << 0xe |
          (in_fp_cc2 & 1) << 0xd | (in_fp_cc3 & 1) << 0xc | (in_fp_reserve1 & 1) << 0xb |
          (in_fp_vxsoft & 1) << 10 | (in_fp_vxsqrt & 1) << 9 | (in_fp_vxcvi & 1) << 8 |
          (in_fp_ve & 1) << 7 | (in_fp_oe & 1) << 6 | (in_fp_ue & 1) << 5 | (in_fp_ze & 1) << 4 |
          (in_fp_xe & 1) << 3 | (in_fp_ni & 1) << 2 | (in_fp_rn0 & 1) << 1) ^ 0xf8;
}

