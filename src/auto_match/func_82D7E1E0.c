extern int fn_82CE5410(void); extern void fn_82CE6310(int,void *,int,int);
void fn_82D7E1E0(char *self) {
 int n=*(int *)(self+0xd8)&0x3fffffff;
 if(n && !(*(int *)(self+0xd0)&15)) return;
 if(n+1<4)n=4;else n++;
 { int *array=(int *)(self+0xd0); int a=fn_82CE5410();
 if((array[2]&0x3fffffff)<n)fn_82CE6310(*(int *)(a+0x10),array,n,4); }
}