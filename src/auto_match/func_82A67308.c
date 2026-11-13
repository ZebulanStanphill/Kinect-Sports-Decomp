#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))


double fn_82A67308(unsigned char *param_1)

{
  return (double)((float)(__int64)
                         ((int)((unsigned int)CONCAT21(CONCAT11(param_1[2],param_1[1]),*param_1) << 8) >> 8)
                 * 1.1920929e-07f);
}

