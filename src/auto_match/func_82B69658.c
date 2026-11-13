extern int fn_82AA0840();
extern int fn_82AB71F0();


void fn_82B69658(unsigned int self,unsigned int key) {
 unsigned a,b;
 a=fn_82AB71F0(self,82,key); b=fn_82AB71F0(self,29,key);
 if(a==6 || a==4 || a==5 || a==7) {
  if(b!=a) fn_82AA0840(self,29,key,a);
 } else if(b!=0) fn_82AA0840(self,29,key,0);
 a=fn_82AB71F0(self,83,key); b=fn_82AB71F0(self,30,key);
 if(a==6 || a==4 || a==5 || a==7) {
  if(b!=a) fn_82AA0840(self,30,key,a);
 } else if(b!=0) fn_82AA0840(self,30,key,0);
 a=fn_82AB71F0(self,84,key); b=fn_82AB71F0(self,31,key);
 if(a==6 || a==4 || a==5 || a==7) {
  if(b!=a) fn_82AA0840(self,31,key,a);
 } else if(b!=0) fn_82AA0840(self,31,key,0);
}
