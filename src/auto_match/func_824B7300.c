typedef int (*code)();
extern int *fn_8225F160(void);
extern unsigned char fn_828EA610(int);
extern unsigned char fn_828EA5F8(int);
extern unsigned char fn_82512508(int);
extern int fn_8245AE18(void);
extern int fn_8245B1F0(int);
extern int fn_8245AF50(int, unsigned short);
extern int fn_823AB478(int);
extern int fn_8245B050(int, unsigned char, int);
extern int fn_8245B100(int);
extern int fn_8245B168(int, void *, int);
extern int fn_824B70F0(void);
extern int fn_8245AFC0(int, int, int);

void fn_824B7300(int param_1,int param_2,int param_3,int param_4,
                  short param_5,short param_6,short param_7)

{
  int *cmd;
  int kind;
  int obj;
  int code;
  short buf;
  unsigned char uv;

  switch (param_2) {
  case 1:
    kind = 8;
    break;
  case 2:
    kind = 9;
    break;
  case 3:
    kind = 7;
    break;
  case 4:
    kind = 6;
    break;
  default:
    kind = ((param_2 == 5) ^ 1) + 5;
    break;
  }
  cmd = fn_8225F160();
  cmd[6] = 2;
  cmd[7] = kind;
  cmd[10] = 4;
  cmd[8] = param_4;
  cmd[9] = 0;
  if (fn_828EA610(param_1) == 0) {
    if (fn_828EA5F8(param_1) != 0 && fn_82512508(param_1) != 0) {
      obj = fn_8245AE18();
      switch (param_2) {
      case 1:
        code = 0x1e;
        break;
      case 2:
        code = 0x1f;
        break;
      case 3:
        code = 0x1d;
        break;
      case 4:
        code = 0x1c;
        break;
      default:
        code = ((param_2 == 5) ^ 1) + 0x1b;
        break;
      }
      if (fn_8245B1F0(obj) != 0) {
        fn_8245AF50(obj,code);
        if (*(int *)(obj + 0x14) == 0) {
          *(int *)(obj + 0x14) = 1;
        }
        uv = fn_823AB478(param_1);
        fn_8245B050(obj,uv,4);
        fn_8245B050(obj,param_3,4);
        fn_8245B100(obj);
        buf = (short)param_4;
        fn_8245B168(obj,&buf,2);
        buf = param_5;
        fn_8245B168(obj,&buf,2);
        buf = param_6;
        fn_8245B168(obj,&buf,2);
        buf = param_7;
        fn_8245B168(obj,&buf,2);
        fn_824B70F0();
        fn_8245AFC0(obj,0,0);
      }
    }
  }
}
