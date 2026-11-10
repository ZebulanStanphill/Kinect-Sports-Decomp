extern int fn_825279F8(int);
int fn_825279A0(int self,int mode) {
 int result=fn_825279F8(self);
 if(mode) return result!=0 && result!=3;
 return result!=0;
}
