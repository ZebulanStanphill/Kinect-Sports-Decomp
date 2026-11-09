typedef struct Range_8302BF38 { int min,max; } Range_8302BF38;
extern int fn_82F65350(void);
extern double lbl_8217BB90,lbl_82005730;
int fn_8302BF38(Range_8302BF38 *r) {
 int span=r->max-r->min;
 int offset=0;
 if (span!=0) offset=(int)(span*(fn_82F65350()*lbl_8217BB90)+lbl_82005730);
 return r->min+offset;
}
