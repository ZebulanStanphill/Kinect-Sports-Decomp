typedef struct Var_82681898 { unsigned char tag; char pad[7]; double d; } Var_82681898;
extern void fn_826959C8(Var_82681898 *);

void fn_82681898(Var_82681898 *p, double d)
{
    if (p->tag >= 5) {
        fn_826959C8(p);
    }
    p->d = d;
    p->tag = 3;
}
