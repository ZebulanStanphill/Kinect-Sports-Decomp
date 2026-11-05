typedef struct Entry_82AA6270 {unsigned short id,pad;unsigned value;} Entry_82AA6270;
extern Entry_82AA6270 lbl_8315FFB0[];
unsigned fn_82AA6270(int id) {unsigned i;Entry_82AA6270 *p=lbl_8315FFB0;for(i=0;i<0xa8;i++,p++) if(p->id==id)return lbl_8315FFB0[i].value;return 0;}
