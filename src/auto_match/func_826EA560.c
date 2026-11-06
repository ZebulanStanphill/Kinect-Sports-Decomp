typedef struct { char pad[24]; void *object; } Owner_826EA560;
extern void *fn_8267B890(void *,unsigned,int);
extern void *fn_826EA4C8(void *,void *);
extern void *lbl_831E7E64;
void fn_826EA560(Owner_826EA560 *p,void *arg) {
 void *mem=fn_8267B890(lbl_831E7E64,0x818,0);
 void *object;
 if(mem) object=fn_826EA4C8(mem,arg); else object=0;
 p->object=object;
}
