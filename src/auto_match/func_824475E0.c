extern int fn_82F64538();
extern char lbl_831D7088[];
extern char lbl_831E4F2C[];

int fn_824475E0(unsigned int *param_1)

{
  unsigned int v;
  char *name;

  if (param_1 != 0) {
    v = *param_1;
    if (v != 0) {
      name = (char *)(**(int (**)(int))(*(int *)v + 4))(v);
    }
    else {
      name = lbl_831D7088;
    }
    if ((unsigned char)fn_82F64538(name,lbl_831E4F2C) != 0) {
      return *param_1 + 4;
    }
  }
  return 0;
}
