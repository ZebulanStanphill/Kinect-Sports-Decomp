extern int XamUserGetSigninInfo(unsigned int,unsigned int,void *);
int fn_82A2AB30(unsigned int user,unsigned int flags,void *info) {int status=XamUserGetSigninInfo(user,flags,info);int result;if(status>=0)result=0;else{result=status&0xffff;if((status&0x1fff0000)!=0x70000)result=0x65b;}return result;}
