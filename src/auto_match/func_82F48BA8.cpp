struct Interface_82F48BA8 {virtual void vf0();virtual void vf4();};
typedef struct Enumerator_82F48BA8{unsigned pad;Interface_82F48BA8 **begin,**end,**cur;} Enumerator_82F48BA8;
extern "C" unsigned fn_82F48BA8(Enumerator_82F48BA8*p,unsigned n,Interface_82F48BA8**out,unsigned *fetched){unsigned avail,k,status;
if(out==0||(n!=1&&fetched==0))return 0x80004003;
if(!p->begin||!p->end||!p->cur)return 0x80004005;
avail=p->end-p->cur;status=0;k=n;if(avail<n){k=avail;status=1;}
if(fetched)*fetched=k;
if(k){Interface_82F48BA8 **d=out-1;do{Interface_82F48BA8 *o;--k;o=*p->cur;*++d=o;o->vf4();p->cur++;}while(k);}
return status;
}