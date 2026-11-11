typedef struct
{
    int result;
    int pad;
    void *p;
    void *handle;
}
Context_82FE8728;
typedef struct
{
    int kind;
    void (*fn)(void);
    void *context;
    int pad;
    int a[5];
}
Message_82FE8728;
extern void *lbl_832642F0;
extern int fn_82FE7B00(void);
extern int fn_82FE71B8(Context_82FE8728 *);
extern void fn_82FE72A0(void);
extern int fn_82FFA6E8(void *,Message_82FE8728);
extern int fn_82FE7220(Context_82FE8728 *,int);
int fn_82FE8728(void)
{
    Context_82FE8728 c;
    Message_82FE8728 m;
    if(!lbl_832642F0)return 2;
    {
        int r=fn_82FE7B00();
        if(r==1){
            r=fn_82FE71B8(&c);
            if(r==1){
                m.kind=8;
                m.fn=fn_82FE72A0;
                m.context=&c;
                m.pad=0;
                r=fn_82FFA6E8(lbl_832642F0,m);
                r=fn_82FE7220(&c,r);
            }
        }
        return r;
    }
}
