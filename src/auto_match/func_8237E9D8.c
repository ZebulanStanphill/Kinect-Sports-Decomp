extern int lbl_831CB348[];
extern float lbl_821CC160;
extern unsigned fn_82570840(unsigned,void *,int,void *);
void fn_8237E9D8(char *p,unsigned n) {
 if (lbl_831CB348[0x7c/4]) switch(n) {
 case 2: if (*(unsigned *)(p+0x2d4)) *(unsigned *)(p+0x2e4)=fn_82570840(*(unsigned *)(p+0x2c4),p+0x2d4,0,p+0x20); break;
 case 1: if (*(unsigned *)(p+0x2d0)) { *(unsigned *)(p+0x2e0)=fn_82570840(*(unsigned *)(p+0x2c4),p+0x2d0,0,p+0x20); *(float *)(p+0x2ac)=lbl_821CC160; } break;
 case 0: if (*(unsigned *)(p+0x2cc)) *(unsigned *)(p+0x2dc)=fn_82570840(*(unsigned *)(p+0x2c4),p+0x2cc,0,p+0x20); break;
 }
}