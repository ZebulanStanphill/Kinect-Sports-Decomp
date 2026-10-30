extern int fn_82BBDD18(void *p);
extern int fn_82BBECA8(void *p);
extern int fn_82BBEF70(void *p);

int fn_82BBFA78(void *p)
{
  int result;
  int hr = fn_82BBECA8(p);
  if (hr >= 0) {
    int r = fn_82BBEF70(p);
    result = r < 0 ? r : 0;
  } else {
    result = hr;
  }
  if (result >= 0) {
    int r = fn_82BBDD18(p);
    result = r < 0 ? r : 0;
  }
  return result;
}
