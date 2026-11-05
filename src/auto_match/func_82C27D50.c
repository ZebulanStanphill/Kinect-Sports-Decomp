typedef struct Node_82C27D50 {unsigned value,state;struct Node_82C27D50 *next,*prev;} Node_82C27D50;
extern int fn_82C10B28(unsigned,int,Node_82C27D50 **);
int fn_82C27D50(unsigned self,int force){
 int hr=0;unsigned obj=*(unsigned *)(self+44);Node_82C27D50 *it=0,*p=*(Node_82C27D50 **)(obj+0x94);
 if(*(unsigned *)(obj+0x94)==0)return hr;
 it=*(Node_82C27D50 **)(obj+0x94);
 while(it){Node_82C27D50 *next=it->next;
  if(it->state==1 || force){
   unsigned q=*(unsigned *)(obj+0x4c);
   hr=(*(int (**)(unsigned,unsigned))(q+8))(q,it->value);if(hr<0)return hr;
   if(it==*(Node_82C27D50 **)(obj+0x94))*(Node_82C27D50 **)(obj+0x94)=it->next;
   if(it->prev)it->prev->next=it->next;
   if(it->next)it->next->prev=it->prev;
   hr=fn_82C10B28(*(unsigned *)(obj+0x48),0x1d,&it);if(hr<0)return hr;
  }
  it=next;
 }
return hr;
}
