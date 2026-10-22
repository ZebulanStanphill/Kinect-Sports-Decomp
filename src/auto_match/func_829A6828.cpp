struct P2 { char pad[0xc]; int c; char pad2[0x6c - 0x10]; int h; };

struct Obj {
  virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
  virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
  virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
  virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
  virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
  virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
  virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
  virtual unsigned int f70(int h);
  virtual int f74(int h);
};

extern "C" int fn_829A6828(Obj *param_1, P2 *param_2, int *param_3, int *param_4)
{
  if (param_1->f70(param_2->h) == 0xffff) {
    *param_4 = 0;
    *param_3 = param_1->f74(param_2->h);
  }
  else {
    *param_4 = 1;
    *param_3 = param_2->c;
  }
  return 0;
}
