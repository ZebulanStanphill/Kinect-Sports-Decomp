#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int uStack0000001c;
extern unsigned int uStack0000001d;
extern unsigned int uStack0000001e;
extern unsigned int uStack0000001f;
extern unsigned int uStack_10;


unsigned int fn_82BB9EC0(unsigned int param_1,unsigned int param_2)

{
  char cStack00000014;
  char cStack00000015;
  char cStack00000016;
  char cStack00000017;
  unsigned char uStack0000001c;
  unsigned char uStack0000001d;
  unsigned char uStack0000001e;
  unsigned char uStack0000001f;
  unsigned int uStack_10;
  
  cStack00000014 = (char)((unsigned int)param_1 >> 0x18);
  if (cStack00000014 == '\0') {
    uStack0000001c = (unsigned char)((unsigned int)param_2 >> 0x18);
  }
  else {
    uStack0000001c = 0;
  }
  cStack00000015 = (char)((unsigned int)param_1 >> 0x10);
  if (cStack00000015 == '\0') {
    uStack0000001d = (unsigned char)((unsigned int)param_2 >> 0x10);
  }
  else {
    uStack0000001d = 0;
  }
  cStack00000016 = (char)((unsigned int)param_1 >> 8);
  if (cStack00000016 == '\0') {
    uStack0000001e = (unsigned char)((unsigned int)param_2 >> 8);
  }
  else {
    uStack0000001e = 0;
  }
  cStack00000017 = (char)param_1;
  if (cStack00000017 == '\0') {
    uStack0000001f = (unsigned char)param_2;
  }
  else {
    uStack0000001f = 0;
  }
  uStack_10 = CONCAT31(CONCAT21(CONCAT11(uStack0000001c,uStack0000001d),uStack0000001e),
                       uStack0000001f);
  return uStack_10;
}

