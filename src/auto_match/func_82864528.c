typedef struct {int v[4];} Quad_82864528;
typedef struct {int v[3]; Quad_82864528 q;} Source_82864528;
typedef struct {int value; int pad[5]; Quad_82864528 q;} Globals_82864528;
extern Globals_82864528 lbl_832116B4;
extern Source_82864528 *fn_82862178(void *);
extern void fn_82810360(Source_82864528 *,void *);
void fn_82864528(void *obj,int x) {
 Source_82864528 *p=fn_82862178(obj);
 lbl_832116B4.value=x;
 fn_82810360(p,(char *)&lbl_832116B4+12);
 lbl_832116B4.q=p->q;
}
