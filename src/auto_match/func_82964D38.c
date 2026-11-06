int fn_82964D38(int a,int b,int self) {
 unsigned *x=*(unsigned **)(a*4+*(int *)(self+20));
 unsigned *y=*(unsigned **)(b*4+*(int *)(self+20));
 if(x[14]<y[14])return -1;
 if(x[14]>y[14])return 1;
 if(x[15]<y[15])return -1;
 if(x[15]>y[15])return 1;
 if(x[1]<y[1])return -1;
 if(x[1]>y[1])return 1;
 if(x[3]<y[3])return -1;
 if(x[3]>y[3])return 1;
 if(x[2]<y[2])return -1;
 if(x[2]>y[2])return 1;
 if(x[4]<y[4])return -1;
 if(x[4]>y[4])return 1;
 if(x[5]<y[5])return -1;
 if(x[5]>y[5])return 1;
 if((int)x[6]<(int)y[6])return -1;
 return (int)x[6]>(int)y[6];
}
