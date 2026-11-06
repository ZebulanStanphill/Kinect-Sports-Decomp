typedef unsigned U;
typedef struct Elem_82FB65B0 {char pad[48]; U *p;} Elem_82FB65B0;
typedef struct Range_82FB65B0 {Elem_82FB65B0 *first,*last;} Range_82FB65B0;
typedef struct Owner_82FB65B0 {char pad[160]; Range_82FB65B0 range;} Owner_82FB65B0;
extern int fn_82FAF788(Owner_82FB65B0 *);
extern void fn_82FAF810(Owner_82FB65B0 *);
extern int fn_82FFF908(U);
extern void fn_82FFF990(U);
int fn_82FB65B0(Owner_82FB65B0 *self) {
 int result=fn_82FAF788(self);
 if(result==1) {
  Range_82FB65B0 *r=&self->range;
  U i;
  for(i=0;i<(U)(r->last-r->first);++i) {
   U *p=r->first[i].p;
   if(p && (result=fn_82FFF908(*p))!=1) {
    U j;
    for(j=0;j<i;++j) {
     U *p=r->first[j].p;
     if(p) fn_82FFF990(*p);
    }
    fn_82FAF810(self);
    return result;
   }
  }
 }
 return result;
}
