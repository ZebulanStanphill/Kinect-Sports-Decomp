struct Struct_824925D0 { Struct_824925D0(const Struct_824925D0 &); int data[5]; };
extern "C" {
void *fn_8248F890(unsigned);
__declspec(noreturn) void fn_82F622A8(const char *);
int *fn_82499258(int *,int *,void *,void *);
extern char lbl_821BEBB0[],lbl_821BEBB4[];
}
static __forceinline void CopyBase_82499158(int *d,const int *s) {
 d[0]=(int)lbl_821BEBB0; d[1]=s[1];
}
static __forceinline void CopyDerived_82499158(int *d,const int *s) {
 CopyBase_82499158(d,s);
 d[0]=(int)lbl_821BEBB4;
 ((Struct_824925D0 *)(d+2))->Struct_824925D0::Struct_824925D0(*(const Struct_824925D0 *)(s+2));
}
static __forceinline void CopyValue_82499158(int *d,const int *s) {
 d[0]=s[0]; CopyDerived_82499158(d+1,s+1);
 d[8]=s[8];d[9]=s[9];d[10]=s[10];d[11]=s[11];
}
extern "C" int *fn_82499158(int *out,int *o,const int *value) {
 int *list=o+1;
 int *next=*(int **)list[0];
 int *prev=(int *)next[1];
 int *node=(int *)fn_8248F890(56);
 node[0]=(int)next;node[1]=(int)prev;
 if(node+2) CopyValue_82499158(node+2,value);
 if(0x5555554u-(unsigned)list[1] < 1) fn_82F622A8("list<T> too long");
 ++list[1];next[1]=(int)node;*(int *)node[1]=(int)node;
 fn_82499258(out,o,(char *)**(int ***)list+8,**(int ***)list);
 return out;
}
