typedef struct {int *p; int idx;} Iter_82753B18;
typedef struct {unsigned end[2]; Iter_82753B18 it;} Locals_82753B18;
extern void fn_8278C110(Iter_82753B18 *,void *);
extern unsigned char fn_826A8E58(Iter_82753B18 *,unsigned *);
extern void fn_827741E8(Iter_82753B18 *);
extern void fn_827B0A40(void *);
void fn_82753B18(char *obj) {
 Locals_82753B18 l;
 fn_8278C110(&l.it,obj+8);
 l.end[0]=0; l.end[1]=0;
 if(fn_826A8E58(&l.it,l.end)==0) {
  l.end[0]=0; l.end[1]=0;
  do {
   int *e=*(int **)(l.it.idx*12+*l.it.p+0x10);
   e[1]=0;
   fn_827741E8(&l.it);
  } while(fn_826A8E58(&l.it,l.end)==0);
 }
 fn_827B0A40(obj+8);
}
