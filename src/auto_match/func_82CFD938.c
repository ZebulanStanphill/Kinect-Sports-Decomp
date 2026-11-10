extern int fn_82CFD5F0(void *);
void fn_82CFD938(void *obj,void *p,int x) {
 switch(fn_82CFD5F0(obj)) {
 case 1: *(char *)p=(char)x; break;
 case 2: *(short *)p=(short)x; break;
 case 4: *(int *)p=x; break;
 }
}
