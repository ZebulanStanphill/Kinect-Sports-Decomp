typedef struct Var_8229FFE8 {
    int a;
    int b;
    union {
        double d;
        int i;
    } u;
} Var_8229FFE8;
typedef struct Obj_8229FFE8 {
    void *f0;
    char pad[0x9c - 4];
    char name[0x40];
} Obj_8229FFE8;
extern int __ascii_stricmp(const char *, const char *);
extern void fn_82273CD8(Var_8229FFE8 *, int);
extern void fn_82273C88(Var_8229FFE8 *);
extern void fn_82672C20(void *, const char *, Var_8229FFE8 *, int);
extern void fn_82F64988(char *, int, const char *);

void fn_8229FFE8(int *self,int n,int text) {
Var_8229FFE8 v[2]; Var_8229FFE8 *p; int i;
for(i=0;i<2;i++) { v[i].a=0; v[i].b=0; }
fn_82273CD8(&v[0],3); v[0].u.d=(double)(n+1);
fn_82273CD8(&v[1],5); v[1].u.i=text;
fn_82672C20((void *)*self,"_root.mainCtrl.setWorldRecordCaption",v,2);
p=v+2; i=1; do {p--; fn_82273C88(p);} while(--i>=0);
}
