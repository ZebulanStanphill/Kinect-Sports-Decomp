extern int fn_82CE5410(void);
typedef void (*Call_82D003F0)(void *, unsigned, unsigned);
void fn_82D003F0(unsigned *p) {
 unsigned size=(p[2]+1)*3;
 unsigned value=p[0];
 int base=fn_82CE5410();
 void *obj=*(void **)(base+0x10);
 (*(Call_82D003F0 *)(*(int *)obj+8))(obj,value,size*4);
}
