extern int fn_8306C590(int);
extern int fn_82A1F470(void);
int fn_82E49970(char *self) {
 int result=0;
 int handle=*(int *)(self+0x9c);
 if(handle==-1) return 0x80070057;
 if(fn_8306C590(handle)==0) {int e=fn_82A1F470(); if(e<=0) result=e; else result=((unsigned __int64)e & 0xffff) | 0x80070000;}
 return result;
}
