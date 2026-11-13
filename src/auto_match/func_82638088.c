extern unsigned int lbl_8218E8E8;
extern float lbl_82195644;


unsigned __int64 fn_82638088(int param_1)

{
  return ((((__int64)(*(float *)(param_1 + 0x28ec) * lbl_82195644 + lbl_8218E8E8) & 0xffU) << 8 |
          (__int64)(*(float *)(param_1 + 0x28e0) * lbl_82195644 + lbl_8218E8E8) & 0xffU) << 8 |
         (__int64)(*(float *)(param_1 + 0x28e4) * lbl_82195644 + lbl_8218E8E8) & 0xffU) << 8 |
         (__int64)(*(float *)(param_1 + 0x28e8) * lbl_82195644 + lbl_8218E8E8) & 0xffU;
}

