typedef struct Node_82E774E8 { unsigned short id,pad; int data; struct Node_82E774E8 *next; } Node_82E774E8;
typedef struct Item_82E774E8 { unsigned char data[16]; unsigned short size; } Item_82E774E8;
extern int fn_82E76510(int,unsigned short,Item_82E774E8 *);
unsigned short _byteswap_ushort(unsigned short);
int fn_82E774E8(int self,unsigned short id,int buffer,unsigned int size,int *sink) {
 int result=0, data;
 Node_82E774E8 *node;
 unsigned char *p; unsigned short n,index,total;
 Item_82E774E8 item;
 if(size>8) {
  node=*(Node_82E774E8 **)(self+8);
  size-=8;p=(unsigned char *)(buffer+8);
  for(;;) {if(!node)return 0xc00d36b3; if(node->id==id)break;node=node->next;}
  data=node->data;
  index=0;total=*(unsigned short *)(data+4);
  if(total) {
   do {
    result=fn_82E76510(data,index,&item);
    if(result<0)return result;
    n=item.size;
    if(n==0xffff) {
     if(size<2)return 0xc00d3a9a;
     n=_byteswap_ushort(*(unsigned short *)p);p+=2;size-=2;
    }
    if(n>size)return 0xc00d3a9a;
    result=(*(int (**)(int *,Item_82E774E8 *,unsigned char *,unsigned int))(*sink+0x68))(sink,&item,p,n);
    if(result<0)return result;
    p+=n;index++;size-=n;
   }while(index<total);
  }
 }
 return result;
}
