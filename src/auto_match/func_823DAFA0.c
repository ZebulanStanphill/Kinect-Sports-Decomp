typedef struct String_823DAFA0 {
    char bytes[32];
} String_823DAFA0;

extern void fn_82230110(String_823DAFA0 *, const char *);
extern String_823DAFA0 *fn_822B27E8(String_823DAFA0 *, String_823DAFA0 *, const char *);
extern void fn_82230300(String_823DAFA0 *, int, unsigned int);
extern int fn_828EA268(unsigned int);
extern void fn_82897DF8(void *, void *, String_823DAFA0 *);

void fn_823DAFA0(char *self)
{
    String_823DAFA0 name;
    String_823DAFA0 qualified;
    String_823DAFA0 *fullName;
    char *state;
    fn_82230110(&name, "Football State Controller");
    state = self + 0x34;
    fullName = fn_822B27E8(&qualified, &name, "_state");
    *(int *)(state + 0xc) = 0;
    state[0x58] = 0;
    *(int *)(state + 0x5c) = 0;
    *(int *)(state + 0x60) = 0x16;
    *(int *)(state + 0x64) = fn_828EA268(0x16);
    fn_82897DF8(state, self, fullName);
    fn_82230300(&qualified, 1, 0);
    fn_82230300(&name, 1, 0);
}
