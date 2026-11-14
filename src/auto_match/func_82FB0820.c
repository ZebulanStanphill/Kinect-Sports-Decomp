typedef struct Obj_82FB0820 {
    int pad[5];
    int sub;  /* 0x14 */
} Obj_82FB0820;

extern unsigned char fn_83007620(Obj_82FB0820 *p, int a, int b);
extern unsigned char fn_83008F08(int sub, int a, int b);

int fn_82FB0820(Obj_82FB0820 *p, int a, int b)
{
    if (fn_83007620(p, a, b) != 0) {
        return 1;
    }
    return p->sub != 0 && fn_83008F08(p->sub, a, b) != 0;
}
