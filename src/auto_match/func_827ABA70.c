typedef unsigned int U;
extern void fn_827A9810(U *,U);
extern void *memmove(void *,const void *,U);
void fn_827ABA70(U *p,U first,U count) {
 if(p[1]==count)fn_827A9810(p,0);
 else { memmove((U *)*p+first,(U *)*p+first+count,(p[1]-first-count)*4); p[1]-=count; }
}
