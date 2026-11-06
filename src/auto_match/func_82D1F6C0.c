typedef float (*Query)(void *, unsigned, unsigned,int);
unsigned fn_82D1F6C0(int self,unsigned kind,int *v,float threshold) {
 int i=0,off;
 if(v[1]>0) { off=0; do {
 void *q=*(void **)(self+0x38);
 float d=(*(Query *)(*(int *)q+4))(q,kind,*(unsigned *)(*v+off),1);
 if(d<threshold)return 1;
 ++i;off+=4;
 } while(i<v[1]); }
 return 0;
}
