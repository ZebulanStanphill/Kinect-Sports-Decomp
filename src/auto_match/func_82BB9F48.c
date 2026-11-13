#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int uStack_10;


unsigned int fn_82BB9F48(unsigned int param_1,unsigned int param_2)

{
  unsigned char bVar1;
  unsigned int uStack_10;
  
  bVar1 = *(unsigned char *)(((((param_2 >> 0x18 & 1) << 1 | param_2 >> 0x10 & 1) << 1 | param_2 >> 8 & 1) <<
                     1 | param_2 & 1) * 0x10 +
                    ((((param_1 >> 0x18 & 1) << 1 | param_1 >> 0x10 & 1) << 1 | param_1 >> 8 & 1) <<
                     1 | param_1 & 1) + -0x7ce91980);
  uStack_10 = CONCAT31(CONCAT21(CONCAT11(bVar1 >> 3,bVar1 >> 2),bVar1 >> 1),bVar1) & 0x1010101;
  return uStack_10;
}

