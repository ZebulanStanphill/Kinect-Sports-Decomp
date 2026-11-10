extern unsigned fn_83052680(void *,unsigned *,float *);
extern void fn_83054FF0(void *,unsigned,unsigned,float);
void fn_830555E8(void *o) {
 struct {unsigned first;float second;} pair;
 unsigned p=fn_83052680(o,&pair.first,&pair.second);
 if(p)fn_83054FF0(o,p,pair.first,pair.second);
}
