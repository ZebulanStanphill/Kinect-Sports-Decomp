typedef struct TZ_8306C7F8 {
  int bias;
  unsigned short stdName[32];
  char stdDate[16];
  int stdBias;
  unsigned short dayName[32];
  char dayDate[16];
  int dayBias;
} TZ_8306C7F8;

extern unsigned int fn_82A2A7D0(TZ_8306C7F8 *);

void fn_8306C7F8(__int64 *param_1)
{
  TZ_8306C7F8 tz;
  unsigned int id;
  int x;
  int y;

  id = fn_82A2A7D0(&tz);
  y = tz.bias;
  switch (id) {
    case 0:
      break;
    case 2:
      x = tz.dayBias;
      goto add;
    case 1:
      x = tz.stdBias;
    add:
      tz.bias = x + y;
      break;
    default:
      tz.bias = 0;
      break;
  }
  *param_1 = (__int64)(tz.bias * 0x3c) * 10000000;
}
