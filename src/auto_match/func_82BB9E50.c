#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int uStack_10;


unsigned int fn_82BB9E50(unsigned int param_1)

{
  unsigned char bStack00000014;
  unsigned char bStack00000015;
  unsigned char bStack00000016;
  unsigned char bStack00000017;
  unsigned int uStack_10;
  
  bStack00000015 = (unsigned char)((unsigned int)param_1 >> 0x10);
  bStack00000016 = (unsigned char)((unsigned int)param_1 >> 8);
  bStack00000017 = (unsigned char)param_1;
  bStack00000014 = (unsigned char)((unsigned int)param_1 >> 0x18);
  uStack_10 = CONCAT31(CONCAT21(CONCAT11((char)((unsigned __int64)bStack00000014 - 1) -
                                         ((bStack00000014 - 2) +
                                         ((unsigned __int64)bStack00000014 - 1 == 0)),
                                         (char)((unsigned __int64)bStack00000015 - 1) -
                                         ((bStack00000015 - 2) +
                                         ((unsigned __int64)bStack00000015 - 1 == 0))),
                                (char)((unsigned __int64)bStack00000016 - 1) -
                                ((bStack00000016 - 2) + ((unsigned __int64)bStack00000016 - 1 == 0))),
                       (char)((unsigned __int64)bStack00000017 - 1) -
                       ((bStack00000017 - 2) + ((unsigned __int64)bStack00000017 - 1 == 0)));
  return uStack_10;
}

