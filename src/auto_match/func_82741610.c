extern void fn_82741210(int p);
extern void fn_827410A8(int p);
extern void fn_82741008(int p);
extern void fn_82741280(int p);
extern void fn_82741150(int p);

void fn_82741610(int p, unsigned int k)
{
    switch (k) {
    case 0: fn_82741210(p); break;
    case 1: fn_827410A8(p); break;
    case 2: fn_82741008(p); break;
    case 3: fn_82741280(p); break;
    case 4: fn_82741150(p); break;
    }
}
