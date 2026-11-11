extern unsigned strlen(const char *);
extern int fn_82526C70(char *,int,const char *,...);
extern void fn_82536070(void *,char *);
extern void fn_82536590(void *,int);
void fn_8235F928(char *self,char *name,int force)
{
    char buf[128];
    if(*(int *)(self+0x2b84)!=0 && !force)return;
    {
        char *selected=name;
        if(strlen(name)==0)
        {
            if(*(int *)(self+0xcb8))*(int *)(self+0x2ba0)=1;
            switch(*(int *)(self+0x2b98))
            {
                case 1:selected=self+0xf7c;
                break;
                case 2:selected=self+0xfbc;
                break;
                default:selected=self+0xf3c;
                break;
            }
        }
        fn_82526C70(buf,128,"%s_%s",self+0xe7c,selected);
    }
    fn_82536070(self+0xe3c,buf);
    if(*(int *)(self+0x2b80) && !force)return;
    if(*(int *)(self+0xc0c))fn_82536590(self+0xd6c,0);
    *(int *)(self+0x2b80)=1;
}
