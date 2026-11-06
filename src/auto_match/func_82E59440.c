extern char lbl_82154C18[];
typedef struct Interface_82E59440 Interface_82E59440;
typedef int (*Call)();
struct Interface_82E59440 {Call *vt;};
int fn_82E59440(Interface_82E59440 *p,unsigned a,unsigned b,unsigned c) {
 Interface_82E59440 *q,*r;
 int hr,rc;
 if(!p || !c)return 0x80070057;
 q=0;
 hr=p->vt[0](p,lbl_82154C18,&q);
 if(hr<0)return hr;
 r=0;
 rc=q->vt[4](q,a,0,&r);
 if(q){q->vt[2](q);q=0;}
 if(rc<0)return 0xc00d36d5;
 hr=r->vt[0](r,b,c);
 if(r)r->vt[2](r);
 return hr;
}
