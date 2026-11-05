typedef int (*F)(void *);
int fn_82E6E680(unsigned *p) {int r=((F)*(unsigned *)(*p+0x40))(p);if(r>=0) {if(p[2]==0)r=0xc00d36bb;else r=((F)*(unsigned *)(*(unsigned *)p[2]+0x44))((void *)p[2]);} return r;}
