typedef struct Ref_826CEC00 { unsigned int vt, refs; } Ref_826CEC00;
typedef struct Pair_826CEC00 { unsigned char *first, *second; unsigned char flags; } Pair_826CEC00;
extern Ref_826CEC00 *fn_826BD928(unsigned int);
extern unsigned int fn_826957D0(int,int);
extern void fn_82696B20();
extern void fn_8269A858(Ref_826CEC00 *,unsigned char *);
extern void fn_826824B0(unsigned char *);
extern void fn_8267C498(Ref_826CEC00 *);
void fn_826CEC00(int self) {
 Ref_826CEC00 *ref=fn_826BD928(*(unsigned int *)(self+8));
 unsigned int context, value; unsigned char *interior;
 Pair_826CEC00 pair;
 if(ref) ref->refs++;
 context=*(unsigned int *)(self+0x18);
 fn_82696B20(&pair,fn_826957D0(self,0),context);
 if(pair.first) interior=pair.first+0x10;
 else interior=0;
 fn_8269A858(ref,interior);
 if(!(pair.flags&2) && pair.first) fn_826824B0(pair.first);
 pair.first=0;
 if(!(pair.flags&1) && pair.second) fn_826824B0(pair.second);
 pair.second=0;
 if(ref) fn_8267C498(ref);
}
