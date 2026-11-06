class Iface_82E76230;
extern "C" {
extern void fn_82E73448(unsigned int);
extern void fn_82E73470(unsigned int);
extern int fn_82E75BB8(int, Iface_82E76230 *, int, unsigned int *, unsigned int *);
extern int fn_82EEAFA8(unsigned int, long long, unsigned char);
extern char lbl_8214C2B0[];
}
class Iface_82E76230 {
public:
  virtual void v0() {}
  virtual void v1() {}
  virtual void v2() {}
  virtual void v3() {}
  virtual void v4() {}
  virtual void v5() {}
  virtual void v6() {}
  virtual void v7() {}
  virtual void v8() {}
  virtual void v9() {}
  virtual void v10() {}
  virtual void v11() {}
  virtual void v12() {}
  virtual void v13() {}
  virtual void v14() {}
  virtual void v15() {}
  virtual void v16() {}
  virtual void v17() {}
  virtual void v18() {}
  virtual void v19() {}
  virtual void v20() {}
  virtual void v21() {}
  virtual void v22() {}
  virtual void v23() {}
  virtual void v24() {}
  virtual void v25() {}
  virtual int m68(char *, short *, int);
};

extern "C" int fn_82E76230(int param_1, Iface_82E76230 *param_2, int param_3, unsigned int *param_4, unsigned int *param_5)
{
  int hr;
  unsigned int obj;
  short flag;
  int ok;
  if (param_4 == 0 || param_5 == 0) {
    return 0x80004003;
  } else {
    hr = fn_82E75BB8(param_1, param_2, param_3, param_4, param_5);
    if (hr >= 0 && *param_5 != 0) {
      obj = *param_4;
      if (obj == 0 || *(int *)(obj + 0x28) == 0) {
        hr = 0x8000FFFF;
      } else {
        ok = 1;
        if (*(unsigned int *)(param_1 + 0x70) != 0) {
          flag = 1;
          hr = param_2->m68(lbl_8214C2B0, &flag, 2);
          if (hr < 0) {
            ok = 0;
          } else {
            hr = fn_82EEAFA8(*(unsigned int *)(param_1 + 0x70), *(long long *)(obj + 0x10), *(unsigned char *)(obj + 0x22));
            if (hr < 0) ok = 0;
          }
        }
        if (ok) {
          if (*(unsigned int *)(param_1 + 0x74) != 0) {
            fn_82E73470(*(unsigned int *)(param_1 + 0x74));
            *(unsigned int *)(param_1 + 0x74) = 0;
          }
          *(unsigned int *)(param_1 + 0x74) = obj;
          fn_82E73448(obj);
        }
      }
    }
  }
  return hr;
}
