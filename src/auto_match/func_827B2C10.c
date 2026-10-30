union Pair {struct {unsigned int first,second;} words; short halves[4];};
extern void fn_827B28D0(void *);
extern void fn_827B1968(void *,void *);
extern void fn_827B18F8(void *,void *);
void fn_827B2C10(char *object,short first,unsigned short second) {union Pair pair;if(*(unsigned int *)(object+0x28))fn_827B28D0(object);pair.words.first=*(unsigned int *)(object+0x18);pair.words.second=1;fn_827B1968(object+0x28,&pair.words.first);pair.halves[1]=second;pair.halves[0]=first*2;fn_827B18F8(object+0x18,&pair.words.first);}
