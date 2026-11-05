extern "C" void *fn_826A5E90(void *,void *);
extern "C" int fn_826A5AE0(void *,int,int,void *);
extern "C" void fn_826A4B58(int,int);
extern "C" void fn_8267BE38(int);
struct Args_826A5F00 { int x, y; };
struct Target_826A5F00 { int pad[4], x, y; };
__forceinline int Run_826A5F00(int x, Args_826A5F00 *p, Target_826A5F00 *q) {
 char buf[32];
 int r = fn_826A5AE0(p,0,x,fn_826A5E90(buf,q));
 fn_826A4B58(q->x,q->y);
 fn_8267BE38(q->x);
 return r;
}
extern "C" int fn_826A5F00(Args_826A5F00 *p, Target_826A5F00 *q) { return Run_826A5F00(p->y,p,q); }
