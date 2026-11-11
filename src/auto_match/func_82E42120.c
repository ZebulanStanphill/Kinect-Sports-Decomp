typedef union
{
    struct
    {
        unsigned short type;
        short p[3];
        short value;
        char tail[6];
    }
    ;
    unsigned __int64 q[2];
}
Variant_82E42120;
typedef struct Iface_82E42120 Iface_82E42120;
typedef struct
{
    void *p[2];
    void (*release)(Iface_82E42120 *);
    void *q[2];
    int (*get)(Iface_82E42120 *,void *,Variant_82E42120 *);
    void *r[3];
    int (*find)(Iface_82E42120 *,void *,Iface_82E42120 **);
}
Vt_82E42120;
struct Iface_82E42120
{
    Vt_82E42120 *vt;
}
;
extern void *memset(void *,int,unsigned);
extern char lbl_82152F68[];
extern void fn_82E50330(Variant_82E42120 *);
int fn_82E42120(void *unused,void *key,Iface_82E42120 *p)
{
    Iface_82E42120 *out=0;
    Variant_82E42120 v;
    int result=0;
    memset(&v,0,sizeof(v));
    if(p->vt->find(p,key,&out)>=0 && out)
    {
        if(out->vt->get(out,lbl_82152F68,&v)==0 && v.type==11)result=v.value==-1;
    }
    fn_82E50330(&v);
    if(out)out->vt->release(out);
    return result;
}
