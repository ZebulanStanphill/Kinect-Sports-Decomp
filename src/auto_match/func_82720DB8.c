typedef struct Owner_82720D48 Owner_82720D48;

extern void fn_82720D48(Owner_82720D48 *self, void *ctx, int a, int b, int c, int d, int e, unsigned char f);

void fn_82720DB8(char *iface, void *ctx, int a)
{
    fn_82720D48((Owner_82720D48 *)(iface - 0x34), ctx, a, 0x66, 0, 0, 0, 0);
}
