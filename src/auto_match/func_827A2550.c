typedef struct {unsigned x,y,z;unsigned char b;unsigned char pad[3];} Entry_827A2550;
typedef struct {Entry_827A2550 e[5];unsigned char mask;} State_827A2550;
void fn_827A2550(State_827A2550 *dst,State_827A2550 *src) {
 unsigned i;for(i=0;i<5;++i) if(src->mask&(1<<i)) {
 dst->mask |= 1<<i;
 dst->e[i].x=src->e[i].x;dst->e[i].y=src->e[i].y;dst->e[i].z=src->e[i].z;dst->e[i].b=src->e[i].b;
 }
}
