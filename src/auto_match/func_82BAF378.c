typedef struct Value_82BAF378 { unsigned kind; union {float f; short s[2];} v; } Value_82BAF378;
extern const char *lbl_8316E080[];
extern int fn_82BD2990(float,void *);
extern int sprintf(void *,const char *,...);
int fn_82BAF378(Value_82BAF378 v,void *out) {
 if(v.kind==0) return fn_82BD2990(v.v.f,out);
 return sprintf(out,"<%s, %d>",lbl_8316E080[v.v.s[0]],v.v.s[1]);
}
