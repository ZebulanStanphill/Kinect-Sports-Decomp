extern void fn_8269A608(void*);extern void fn_8267BE38(void*);
void fn_8269D728(int a,int b){int x=*(int*)(b+0x80); int *r;
if(x)++*(int*)x;
r=*(int**)(a+0x80);if(r && --*r<=0){fn_8269A608(r);fn_8267BE38(r);}
*(int*)(a+0x80)=*(int*)(b+0x80);
r=*(int**)(b+0x80);if(r && --*r<=0){fn_8269A608(r);fn_8267BE38(r);}
*(int*)(b+0x80)=0;if(*(int*)(a+0x80))*(int*)(*(int*)(a+0x80)+4)=a;
}