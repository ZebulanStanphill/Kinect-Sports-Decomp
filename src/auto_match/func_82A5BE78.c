typedef struct { unsigned a,b,c,d,e; } Request_82A5BE78;
extern Request_82A5BE78 *fn_82A3FF60(void *,unsigned,unsigned,int);
extern void fn_82A4F4E0(void *);
extern int fn_82A5C760(unsigned,void *);
extern char lbl_83219D50[];
typedef void (*Call)(void *);
static __forceinline void Init(Request_82A5BE78 *p,unsigned d,unsigned e) {
 struct Payload_82A5BE78 {unsigned d,e;} *q=(struct Payload_82A5BE78 *)&p->d;
 p->a=0;p->b=0;p->c=12;q->d=d;q->e=e;
}
int fn_82A5BE78(int self,unsigned value) {
 Request_82A5BE78 *p; int result;
 void *lock=*(void **)(self+12);
 (*(Call *)(*(int *)lock+8))(lock);
 p=fn_82A3FF60(lbl_83219D50,20,0x20970006,0);
 if(!p) result=0x8007000e;
 else {
 Init(p,self+4,value);
 result=fn_82A5C760(*(unsigned *)(self+20),p);
 if(result<0)fn_82A4F4E0(p);
 }
 lock=*(void **)(self+12);
 (*(Call *)(*(int *)lock+20))(lock);
 return result;
}
