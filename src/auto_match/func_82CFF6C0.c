struct Owner_82CFF6C0 {int pad[3]; void *obj;unsigned char flag;};
extern unsigned fn_82CEB1A8(unsigned);
typedef unsigned (*Method_82CFF6C0)(void *);
unsigned fn_82CFF6C0(struct Owner_82CFF6C0 *o,char *e){
 int n=*(unsigned short *)(e+4)&0x7fff;
 if(n==0 && o->flag){unsigned v=(*(Method_82CFF6C0 *)((char *)*(void **)o->obj+0x10))(o->obj);if(v)return fn_82CEB1A8(v);return 0;}return n;}
