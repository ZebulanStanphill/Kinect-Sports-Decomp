typedef struct Triple_82C91D80 { unsigned a,b,c; } Triple_82C91D80;
typedef struct Packet_82C91D80 { char pad[0xdc]; char *base1,*base2; char gap[0xea0-0xe4]; Triple_82C91D80 *first,*second; char gap2[0xec0-0xea8]; Triple_82C91D80 firstCopy; char gap3[0xee8-0xecc]; Triple_82C91D80 secondCopy; char *firstPtr; char gap4[0xf10-0xef8]; char *ptrs[3]; char gap5[0x39e8-0xf1c]; Triple_82C91D80 result; } Packet_82C91D80;
extern void fn_82C69500(void *,void *);
void fn_82C91D80(Packet_82C91D80 *o) {
 Triple_82C91D80 *a,*b;
 unsigned offset;
 fn_82C69500(&o->first,&o->second);
 a=o->first; b=o->second;
 o->firstCopy.a=a->a; o->firstCopy.b=a->b; o->firstCopy.c=a->c;
 o->secondCopy.a=b->a; o->secondCopy.b=b->b; o->secondCopy.c=b->c;
 offset=o->secondCopy.a;
 o->firstPtr=offset!=0 ? o->base1+offset:0;
 o->ptrs[0]=o->firstCopy.a!=0 ? o->base1+o->firstCopy.a:0;
 o->ptrs[1]=o->firstCopy.b!=0 ? o->base2+o->firstCopy.b:0;
 o->ptrs[2]=o->firstCopy.c!=0 ? o->base2+o->firstCopy.c:0;
 o->result.a=offset; o->result.b=o->secondCopy.b; o->result.c=o->secondCopy.c;
}
