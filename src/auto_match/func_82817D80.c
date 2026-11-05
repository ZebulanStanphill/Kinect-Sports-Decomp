typedef int(*Callback_82817D80)(unsigned,unsigned);
typedef struct Rows_82817D80{int count;unsigned *data;}Rows_82817D80;
unsigned fn_82817D80(Rows_82817D80 *p,unsigned arg,unsigned which,Callback_82817D80 cb){unsigned total=0;unsigned *it,*start;
if(p&&arg&&cb){start=p->data;it=start;if(start<start+p->count*3){do{unsigned v;switch(which){case 1:v=it[0];break;case 0:v=it[1];break;default:goto next;}
if(v&&cb(v,arg)==0)total++;next:it+=3;}while(it<p->data+p->count*3);}}return total;}