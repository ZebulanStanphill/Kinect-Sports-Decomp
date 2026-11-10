extern void *fn_83052680(void *,unsigned *,float *);
extern void fn_830530F8(void *,void *,unsigned,float);
void fn_830533F8(void *self) {
 struct {unsigned value; float x;} tmp;
 void *p=fn_83052680(self,&tmp.value,&tmp.x);
 if(p) fn_830530F8(self,p,tmp.value,tmp.x);
}
