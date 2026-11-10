typedef struct Var_822A0090 {
    int a;
    int b;
    union {
        double d;
        int i;
    } u;
} Var_822A0090;
typedef struct Obj_822A0090 {
    void *f0;
    char pad[0x9c - 4];
    char name[0x40];
} Obj_822A0090;
extern int __ascii_stricmp(const char *, const char *);
extern void fn_82273CD8(Var_822A0090 *, int);
extern void fn_82273C88(Var_822A0090 *);
extern void fn_82672C20(void *, const char *, Var_822A0090 *, int);
extern void fn_82F64988(char *, int, const char *);

void fn_822A0090(int *self,int n,int text) {
Var_822A0090 v[2]; Var_822A0090 *p; int i;
for(i=0;i<2;i++) { v[i].a=0; v[i].b=0; }
fn_82273CD8(&v[0],3); v[0].u.d=(double)(n+1);
fn_82273CD8(&v[1],5); v[1].u.i=text;
fn_82672C20((void *)*self,"_root.mainCtrl.setPersonalBestCaption",v,2);
p=v+2; i=1; do {p--; fn_82273C88(p);} while(--i>=0);
}
