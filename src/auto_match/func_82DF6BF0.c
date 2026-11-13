#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82D539F8();
extern int fn_82D5B3B0();
extern int fn_82D5E360();
extern int fn_82D62140();
extern int fn_82D67EF8();
extern int fn_82D68F28();
extern int fn_82D69C40();
extern int fn_82D742B0();


unsigned char fn_82DF6BF0(unsigned __int64 param_1)

{
  if ((param_1 & 0xffffffff) == ZEXT48(fn_82D67EF8)) {
    return 1;
  }
  if ((param_1 & 0xffffffff) == ZEXT48(fn_82D62140)) {
    return 2;
  }
  if ((param_1 & 0xffffffff) == ZEXT48(fn_82D69C40)) {
    return 3;
  }
  if ((param_1 & 0xffffffff) == ZEXT48(fn_82D68F28)) {
    return 4;
  }
  if ((param_1 & 0xffffffff) == ZEXT48(fn_82D5B3B0)) {
    return 5;
  }
  if ((param_1 & 0xffffffff) == ZEXT48(fn_82D742B0)) {
    return 6;
  }
  if ((param_1 & 0xffffffff) == ZEXT48(fn_82D539F8)) {
    return 7;
  }
  if ((param_1 & 0xffffffff) == ZEXT48(fn_82D5E360)) {
    return 8;
  }
  return -(param_1 == 0xffffffff82d5f458) & 9;
}

