unsigned char fn_8261E7F8(int self,int mode){unsigned char a,b,c;
if(mode != 0){a=2;b=0;c=1;}else{a=0;b=1;c=2;}
switch(*(int *)(self+0x220)){case 4: case 16: return c; case 8: return a; case 32: return b;}
switch(*(int *)(self+0x224)){case 4: case 16: return c; case 8: return a; case 32: return b;}
return a;
}
