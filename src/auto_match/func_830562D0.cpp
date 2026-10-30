extern "C" int fn_82A1E6A0(int,int,int,int);
extern "C" int fn_82FF8FB0(void (*)(void), void *, void *, void *, const char *);
extern "C" void fn_83055F28(void);

struct IOThread_830562D0 {
  int pad0[3];
  unsigned int thread;
  int pad1[7];
  unsigned int e2c;
  unsigned int e30;
  unsigned int e34;
  unsigned int e38;
  int e3c;
  int e40;
  int pad2;
  int e48;
};

extern "C" int fn_830562D0(IOThread_830562D0 *p, void *param_2)
{
  int r;
  p->e34 = fn_82A1E6A0(0,1,0,0);
  p->e38 = fn_82A1E6A0(0,1,0,0);
  p->e2c = fn_82A1E6A0(0,1,0,0);
  p->e30 = fn_82A1E6A0(0,1,1,0);
  p->e3c = 0;
  p->e40 = 0;
  p->e48 = 0;
  fn_82FF8FB0(fn_83055F28, p, param_2, &p->thread, "AK::IOThread");
  if (p->thread == 0 || p->e2c == 0 || p->e34 == 0 || p->e38 == 0) {
    return 2;
  }
  return 1;
}
