extern char lbl_820102B4[];

extern void fn_826B1688(void *node, void *self, void *visitor, int flag);

unsigned char fn_8271FB80(void *self, void *node)
{
    if (node == 0)
        return 0;
    fn_826B1688(node, self, lbl_820102B4, 1);
    return 1;
}
