extern int fn_82BBF9C8(void *,const void *);
extern int fn_82BBDD18(void *);
extern int lbl_83223534;
int fn_82BBFC10(void *output,const void *input) {int result;if(lbl_83223534!=0){result=fn_82BBF9C8(output,input);if(result>=0){result=fn_82BBDD18(output);result=(result>>31)&result;}}else result=fn_82BBF9C8(output,input);return result;}
