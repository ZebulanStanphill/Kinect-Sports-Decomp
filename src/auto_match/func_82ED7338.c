typedef unsigned char B; extern B *lbl_8324E3B0;
void fn_82ED7338(int unused, B *d,short *s,int stride,int step) {int row;for(row=0;row<4;row++){d[0]=lbl_8324E3B0[d[0]+s[0]];d[1]=lbl_8324E3B0[d[1]+s[1]];d[2]=lbl_8324E3B0[d[2]+s[2]];d[3]=lbl_8324E3B0[d[3]+s[3]];d[4]=lbl_8324E3B0[d[4]+s[4]];d[5]=lbl_8324E3B0[d[5]+s[5]];d[6]=lbl_8324E3B0[d[6]+s[6]];d[7]=lbl_8324E3B0[d[7]+s[7]];d+=stride;s+=step;}}
