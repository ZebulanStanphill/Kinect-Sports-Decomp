struct Item_82FB0D28 {virtual void destroy(int);};
struct Entry_82FB0D28 {unsigned key;Item_82FB0D28 *obj;};
struct State_82FB0D28 {char pad[0x88];Entry_82FB0D28 *first,*last;unsigned x94,y94,start,end;};
extern "C" {extern unsigned lbl_831BC768;void fn_82FA5190(unsigned,Item_82FB0D28*);}
static __forceinline void reset(unsigned *p){p[0]=0;p[2]=p[1];}
extern "C" void fn_82FB0D28(State_82FB0D28 *p) {p->y94=0;{struct Range_82FB0D28 {unsigned start,end;};Range_82FB0D28 *r=(Range_82FB0D28*)&p->start;r->end=r->start;}
 for(Entry_82FB0D28 *it=p->first;it!=p->last;++it){Item_82FB0D28 *obj=it->obj;unsigned heap=lbl_831BC768;if(obj){obj->destroy(0);fn_82FA5190(heap,obj);}}
 p->last=p->first;
}
