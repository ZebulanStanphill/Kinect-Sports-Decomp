typedef struct Rows_83027078 { unsigned *data,mask; unsigned pad; unsigned short stride; } Rows_83027078;
void fn_83027078(Rows_83027078 *p,unsigned n) {
 unsigned bits,count,i;
 if(!n) return;
 count=0;
 for(bits=p->mask;bits;bits&=bits-1) count++;
 i=0; if(count) do {
  unsigned *q=p->data+p->stride*i;
  unsigned j;
  for(j=0;j<n;j++) q[j]=0;
  i++;
 } while(i<count);
}