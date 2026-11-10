typedef struct Obj_82365C38 {void *vt;char pad[0x1998-0x14];} Obj_82365C38;
typedef struct Block_82365C38 {void *vt;int uses,weaks,pad;Obj_82365C38 obj;} Block_82365C38;
typedef struct Out_82365C38 {Obj_82365C38 *obj;Block_82365C38 *block;} Out_82365C38;
extern void *fn_8265C9E0(unsigned);
extern void fn_8227AD00(void *,int,int,int,const char *,int,int,int,int,int,int,int);
extern char lbl_821A8D8C[],lbl_821AC014[];
extern float ltcg_pool_0_0f;
Out_82365C38 *fn_82365C38(Out_82365C38 *out,int a,int *b,int *c) {
 Block_82365C38 *p=fn_8265C9E0(0x1998);
 if(p){Obj_82365C38 *o;
 p->uses=1;p->vt=lbl_821A8D8C;p->weaks=1;
 o=&p->obj;
 if(o){
 fn_8227AD00(o,a,*b,*c,"resultsscreentitle",0,1,1,1,0,1,0);
 *(unsigned short *)((char *)o+0x1188)=0;
 *(int *)((char *)o+0xa48)=0;
 *(int *)((char *)o+0xa84)=15;
 {float value=ltcg_pool_0_0f;
 o->vt=lbl_821AC014;
 *(float *)((char *)o+0xa4c)=value;}
 }
 }else p=0;
 out->block=p;out->obj=&p->obj;return out;
}
