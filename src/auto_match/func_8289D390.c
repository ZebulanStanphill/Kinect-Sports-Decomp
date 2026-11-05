typedef unsigned (*Get_8289D390)(void*);
typedef struct Node_8289D390 {char pad[32];void *iface;char pad24[8];unsigned char skip;char pad2d[3];struct Node_8289D390 *next;}Node_8289D390;
extern void fn_8289CB70(Node_8289D390*,unsigned,int,int);extern unsigned char fn_828985D8(Node_8289D390*);extern unsigned char fn_8289AB78(Node_8289D390*);extern unsigned char fn_8289A0E0(Node_8289D390*);extern void fn_828A13B8(void*,Node_8289D390*);
static __forceinline unsigned get(void **p,unsigned slot){return (*(Get_8289D390*)(*(unsigned*)*p+slot))(*p);}
void fn_8289D390(void *o,unsigned a){Node_8289D390 *n=*(Node_8289D390 **)((char*)o+0x2c4);while(n){Node_8289D390 *next=n->next;if(!n->skip){unsigned char done;fn_8289CB70(n,a,0,0);done=0;if(!fn_828985D8(n)){
if(n->iface && get(&n->iface,4)){if(fn_8289AB78(n))done=1;}
else if(n->iface && get(&n->iface,20)){if(fn_8289AB78(n))done=1;}
else if(n->iface && get(&n->iface,12)){if(fn_8289A0E0(n))done=1;}
else done=1;if(done)fn_828A13B8(o,n);}}n=next;}}