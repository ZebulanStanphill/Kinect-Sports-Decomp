typedef struct Rows_83025108 { unsigned *data,mask; unsigned pad; unsigned short stride, used; } Rows_83025108;
void fn_83025108(Rows_83025108 *p) {
 unsigned bits,count,i,n;
 n=p->stride-p->used;
 if(!n) return;
 count=0;
 for(bits=p->mask;bits;bits&=bits-1) count++;
 i=0; if(count) do {
  unsigned *q=p->data+p->stride*i+p->used;
  unsigned j;
  for(j=0;j<n;j++) q[j]=0;
  i++;
 } while(i<count);
}
