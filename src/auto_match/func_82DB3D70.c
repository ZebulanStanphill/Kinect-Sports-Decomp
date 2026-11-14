extern void fn_82DB34D0(void *tree, void *sub, void *out);
extern void fn_82DB38B8(void *tree, void *sub, void *out, void *p, void *q);

void fn_82DB3D70(void *tree, void *sub, void *out, void *p, void *q)
{
    if (p != 0 && q != 0)
        fn_82DB38B8(tree, sub, out, p, q);
    else
        fn_82DB34D0(tree, sub, out);
}
