extern int fn_829B24E0(void *,const void *);
extern int fn_82BBDD18(void *);
extern int lbl_8315A390;
int fn_829B30E0(void *output,const void *input) {int result;if(lbl_8315A390!=0){result=fn_829B24E0(output,input);if(result>=0){result=fn_82BBDD18(output);result=(result>>31)&result;}}else result=fn_829B24E0(output,input);return result;}
