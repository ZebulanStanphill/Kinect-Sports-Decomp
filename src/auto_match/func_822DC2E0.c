typedef struct Pair_822DC2E0 { unsigned first,second; } Pair_822DC2E0;
typedef Pair_822DC2E0 *(*Callback_822DC2E0)(Pair_822DC2E0 *,void *,unsigned,unsigned);
void fn_822DC2E0(unsigned *self) {
 Pair_822DC2E0 result;
 unsigned v = self[11];
 unsigned w = self[10];
 unsigned first, second;
 if(self[0]!=0) { result = *(*(Callback_822DC2E0 *)((self[0]&~1u)+4))(&result,self+2,w,v); second = result.second; first = result.first; }
 else { first = v; second = v; }
 if(first==self[11] && second==self[11] && self[9]==self[11]) *(unsigned char *)(self+12)=1;
 { unsigned *q = &self[8]; self[9]=first; *q=self[10]; self[10]=second; }
}
