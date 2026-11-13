extern int fn_82F02410();
extern int fn_82F02700();


void fn_82F15C30(int p,int a,int b) {unsigned val,n;
 if(a!=0){if(b==0)return;n=1;val=1;}else{if(b==0)return;
 fn_82F02410(*(int*)(p+0x1ebc),0,1);fn_82F02700(*(int*)(p+0x1ebc));
 fn_82F02410(*(int*)(p+0x1ebc),0xab,0x18);
 fn_82F02410(*(int*)(p+0x1ebc),0x1b,0x18);
 fn_82F02410(*(int*)(p+0x1ebc),0x1b,0x18);
 fn_82F02410(*(int*)(p+0x1ebc),0x1b,0x18);n=0x10;val=0x1b;}
 fn_82F02410(*(int*)(p+0x1ebc),val,n);
}