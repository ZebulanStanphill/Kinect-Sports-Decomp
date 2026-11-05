extern void fn_82522ED8(unsigned);extern void fn_82A1F238(unsigned);
void fn_82525E40(unsigned self,unsigned idx){
 unsigned base=idx;int i;
 i=0;do {
  unsigned *p=(unsigned *)((base*4+i+0x291)*4+self);{unsigned o=*p;if(o){fn_82522ED8(o);*p=0;}}
  p=(unsigned *)((base*4+i+0x2a1)*4+self);{unsigned o=*p;if(o){fn_82A1F238(o);*p=0;}}
  p=(unsigned *)((base*4+0x2c9+i)*4+self);{unsigned o=*p;if(o){fn_82A1F238(o);*p=0;}}
 }while(++i<4);
 {struct Four_82525E40 {unsigned a,b,c,d;} *q=(struct Four_82525E40 *)(self+idx*16+0xac4);q->a=0;q->b=0;q->c=0;q->d=0;}
}
