extern int fn_82292AE8(void);extern void fn_82536070(const char *,const char *);
void fn_82292D50(int x){char *p=(char *)fn_82292AE8();if(*(int *)(p+0x54)!=x){*(int *)(p+0x54)=x; switch(x){case 0:fn_82536070("stadium_location","exterior");break;case 1:fn_82536070("stadium_location","interior");break;}}}
