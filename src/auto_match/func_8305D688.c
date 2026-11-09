typedef struct { int a,b,c; } Element_8305D688;
extern void fn_8305F778(Element_8305D688 **, int, Element_8305D688 *);
void fn_8305D688(int p, int i, Element_8305D688 *out)
{
    fn_8305F778(*(Element_8305D688 ***)(p+0x28), (*(int **)(p+0x2c))[i], out);
}
